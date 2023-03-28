/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** compress_images
*/

#include "../include/antman.h"
#include "../include/my.h"

void compress_img(char **tab)
{
    int i = 0;
    while (tab[i]) {
        char *str = tab[i];
        int count = 0;
        for (; tab[i] && my_strcmp(str, tab[i]) == 0 ; i++)
            count++;
        if (count > 1) {
            my_putstr(str);
            my_putchar('\\');
            my_putnbr(count);
            my_putchar('\n');
        } else {
            my_putstr(str);
            my_putchar('\n');
        }
    }
}

int compress_ppm(char *str)
{
    char **tab;
    if ((tab = my_str_to_word_arrayimg(str)) == NULL)
        return 1;

    compress_img(tab);
    my_free_wordarray(tab);
    return 0;
}
