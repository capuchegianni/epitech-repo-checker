/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** my_nbrtostr
*/

#include "my.h"

char *nbr_str(int nb)
{
    int i = 0;
    int cop = nb;
    char *result = malloc(sizeof(char) * 10000);

    while (cop > 0) {
        cop /= 10;
        i++;
    }

    int power = i;

    for (int x = 0 ; x < i ; x++) {
        result[x] = (nb % my_compute_power_rec(10, power))
        / my_compute_power_rec(10, power - 1) + '0';
        power--;
    }
    return (result);
}
