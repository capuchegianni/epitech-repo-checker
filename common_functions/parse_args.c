/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** parse_args
*/

#include "../include/antman.h"
#include "../include/my.h"

int parse_args(int filetype)
{
    if (filetype == 1)
        return 1;
    if (filetype == 2)
        return 2;
    if (filetype == 3)
        return 3;
    return 0;
}
