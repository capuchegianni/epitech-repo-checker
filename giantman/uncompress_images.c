/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** uncompress_images
*/

#include "../include/giantman.h"
#include "../include/my.h"

void detect_occu(int i, char **tab)
{
    char *nbr = malloc(sizeof(char) * my_strlen(tab[i]));
    char *occ = malloc(sizeof(char) * my_strlen(tab[i]));
    int z = 0;
    int x = 0;
    for (; tab[i][x] != '\\' ; x++)
        nbr[x] = tab[i][x];
    for (x++ ; tab[i][x] ; x++) {
        occ[z] = tab[i][x];
        z++;
    }
    for (int x = 0 ; x < my_getnbr(occ) ; x++) {
        my_putstr(nbr);
        my_putchar('\n');
    }
    free(nbr);
    free(occ);
}

int uncompress_ppm(char *str)
{
    char **tab = my_str_to_word_arrayimg(str);

    for (int i = 0 ; tab[i] ; i++) {
        int bs = 0;
        for (int y = 0 ; tab[i][y] ; y++) {
            (tab[i][y] == '\\') ? bs++ : (bs = bs);
        }
        if (bs != 0) {
            detect_occu(i, tab);
        } else {
            my_putstr(tab[i]);
            my_putchar('\n');
        }
    }
    my_free_wordarray(tab);
    return 0;
}
