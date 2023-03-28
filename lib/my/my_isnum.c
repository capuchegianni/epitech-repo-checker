/*
** EPITECH PROJECT, 2023
** B-MUL-100-LIL-1-1-myradar-gianni.henriques
** File description:
** my_isnum
*/

#include "my.h"

int my_isnum(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9' || str[i] == ' '
        || str[i] == '\n' || str[i] == '\0')) {
            j++;
        }
        i++;
    }
    if ((my_strlen(str)) != j)
        return 1;
    return 0;
}
