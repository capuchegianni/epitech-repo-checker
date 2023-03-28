/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** uncompress_textfiles
*/

#include "../include/giantman.h"
#include "../include/my.h"

char **detect_patern(char *str)
{
    char **result = malloc(sizeof(char *) * (18 * 2) + 1);
    int z = 0, x = 0;
    for (int i = 0 ; i < 18 ; i++) {
        int y = 0;
        result[z] = malloc(sizeof(char) * 1000);
        for (; str[x] != '\\' ; x++) {
            result[z][y] = str[x];
            y++;
        } result[z][y] = '\0';
        y = 0;
        z++;
        result[z] = malloc(sizeof(char) * 1000);
        for (x++ ; str[x] != '\n' ; x++) {
            result[z][y] = str[x];
            y++;
        } result[z][y] = '\0';
        z++;
        x++;
    }
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

int uncompress_lyrics(char *str)
{
    char **tab;

    if ((tab = my_str_to_word_arraytxt(str)) == NULL)
        return 1;
    if (str[0] != '@')
        return 0;
    char **w_paterns = detect_patern(str);
    for (int i = 1 ; tab[i] ; i++) {
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
    my_free_wordarray(w_paterns);
    return 0;
}
