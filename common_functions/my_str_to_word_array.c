/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** my_str_to_word_array
*/

#include "../include/my.h"

int get_words(char *str)
{
    int i = 0;
    int words = 0;

    for (; str[i] ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '='
        || str[i] == '.' || str[i] == ';' || str[i] == ':' || str[i] == ',')
            words++;
    }
    return words;
}

int get_chars(char *str)
{
    int i = 0;

    for (; str[i] ; i++);
    return i;
}

char **my_str_to_word_arraytxt(char *str)
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
        for (; str[i] && str[i] != ' ' ; i++) {
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

int print_three_lines(char *str)
{
    int z = 0;
    int i = 0;

    while (z <= 3) {
        while (str[i] != '\n') {
            my_putchar(str[i]);
            i++;
        }
        z++;
        if (z != 3) {
            my_putchar('\n');
            i++;
        }
    }
    return i;
}

char **my_str_to_word_arrayimg(char *str)
{
    int words = get_words(str);
    int chars = get_chars(str);
    char **tab = malloc(sizeof(char *) * (words + 1));
    int x = 0;
    int y = 0;
    int i = print_three_lines(str);

    while (str[i]) {
        x = 0;
        tab[y] = malloc(sizeof(char) * (chars + 1));
        for (; str[i] && str[i] != '\n' ; i++) {
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
