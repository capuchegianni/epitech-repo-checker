/*
** EPITECH PROJECT, 2022
** lib-epitech
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i;
    int j = my_strlen(dest);

    for (i = 0 ; src[i] != '\0' ; i++) {
        dest[i + j] = src[i];
    }
    dest[i + j] = '\0';
    return dest;
}
