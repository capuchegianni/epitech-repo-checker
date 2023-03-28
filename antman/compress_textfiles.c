/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** compress_textfiles
*/

#include "../include/antman.h"
#include "../include/my.h"

char **my_str_to_word_arraytxtnnn(char *str)
{
    int words = get_words(str);
    int chars = get_chars(str);
    char **tab = malloc(sizeof(char *) * (words + 1));
    int i = 0;
    int x = 0;
    int y = 0;

    while (str[i]) {
        x = 0;
        tab[y] = malloc(sizeof(char) * (chars + 1));
        for (; str[i] && str[i] != ' ' && str[i] != '\n' ; i++) {
            tab[y][x] = str[i];
            x++;
        }
        tab[y][x] = '\0';
        y++;
        i++;
    }
    tab[y] = '\0';
    return tab;
}

char **replace(void)
{
    char **result = malloc(sizeof(char *) * 18 + 1);
    result[0] = "@&";
    result[1] = "@~";
    result[2] = "@#";
    result[3] = "@{";
    result[4] = "@[";
    result[5] = "@|";
    result[6] = "@`";
    result[7] = "@}";
    result[8] = "@^";
    result[9] = "@]";
    result[10] = "&@";
    result[11] = "~@";
    result[12] = "#@";
    result[13] = "{@";
    result[14] = "[@";
    result[15] = "|@";
    result[16] = "`@";
    result[17] = "^@";
    return result;
}

char **print_words_occu(char **tab)
{
    char **words = occurence(tab, 18);
    char **patern = replace();
    char **result = malloc(sizeof(char *) * (18 * 2));
    int z = 0;

    for (int i = 0 ; words[i] ; i++) {
        result[z] = words[i];
        result[z + 1] = patern[i];
        z += 2;
    }
    for (int i = 0 ; words[i] ; i++) {
        my_putstr(patern[i]);
        my_putchar('\\');
        my_putstr(words[i]);
        my_putchar('\n');
    }
    my_putchar(' ');
    return result;
}

char *is_in_words(char *str, char **w_paterns)
{
    for (int i = 0 ; w_paterns[i] ; i += 2) {
        if (my_strcmp(str, w_paterns[i]) == 0)
            return (w_paterns[i + 1]);
    }
    return (NULL);
}

int compress_lyrics(char *str)
{
    char **tab;

    if ((tab = my_str_to_word_arraytxtnnn(str)) == NULL)
        return 1;
    char **w_paterns = print_words_occu(tab);
    if ((tab = my_str_to_word_arraytxt(str)) == NULL)
        return 1;
    for (int i = 0 ; tab[i] ; i++) {
        char *str = NULL;
        if ((str = is_in_words(tab[i], w_paterns)) != NULL) {
            my_putstr(str);
        } else {
            my_putstr(tab[i]);
        }
        if (tab[i + 1])
            my_putchar(' ');
    }
    my_free_wordarray(tab);
    return 0;
}
