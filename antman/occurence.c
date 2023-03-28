/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** occurence
*/

#include "../include/antman.h"

char **tab_occurence(char **tab, int nbr_words)
{
    int incr = 0, z = 0;
    char **words = malloc(sizeof(char *) * nbr_words);
    int *occu_w = malloc(sizeof(int) * nbr_words);
    char **result = malloc(sizeof(char *) * (nbr_words * 2));
    for (int i = 0 ; tab[i] ; i++) {
        int v = 0;
        for (int y = 0 ; words[y] ; y++) {
            (my_strcmp(tab[i], words[y]) == 0) ? occu_w[y]++ && v++ : (v = v);
        }
        ((v == 0) && (my_strlen(tab[i]) >= 4)) ? (words[incr] = tab[i])
        && (occu_w[incr] = 1) && incr++ : (v = v);
    }
    for (int i = 0 ; words[i] ; i++) {
        result[z] = words[i];
        result[z + 1] = nbr_str(occu_w[i]);
        z += 2;
    }
    return (result);
}

int in_n_first(char **n_first, char *str)
{
    for (int i = 0 ; n_first[i] ; i++) {
        if (my_strcmp(str, n_first[i]) == 0)
            return (1);
    }
    return (0);
}

char **n_first_func_ext(char **result, char **n_first, int z)
{
    int incr = 0;
    int occu = 0;
    int i = 0;
    for (; result[i] ; i += 2) {
        if ((my_getnbr(result[i + 1]) > occu) &&
        (in_n_first(n_first, result[i]) == 0)) {
            incr = i;
            occu = my_getnbr(result[i + 1]);
        }
    }
    n_first[z] = result[incr];
    return (n_first);
}

char **n_first_func(char **result, char **n_first, int n)
{
    int z = 0;

    for (int y = 0 ; y < n ; y++) {
        n_first = n_first_func_ext(result, n_first, z);
        z++;
    }
    return (n_first);
}

char **occurence(char **tab, int n)
{
    int nbr_words = 0;
    for (; tab[nbr_words] ; nbr_words++);

    int nbr_words_diff = 0;
    char **result = tab_occurence(tab, nbr_words);
    for (int i = 0 ; result[i] ; i += 2)
        nbr_words_diff++;

    if (nbr_words_diff < n)
        n = nbr_words_diff;

    char **n_first = malloc(sizeof(char *) * n + 1);
    n_first = n_first_func(result, n_first, n);
    return (n_first);
}
