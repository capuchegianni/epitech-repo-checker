/*
** EPITECH PROJECT, 2022
** B-CPE-110-LIL-1-1-BSQ-gianni.henriques
** File description:
** my_puterr
*/

#include <unistd.h>
#include "my.h"

int my_puterr(char const *str)
{
    write(2, str, my_strlen(str));
    return 84;
}
