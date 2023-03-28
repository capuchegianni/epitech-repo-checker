/*
** EPITECH PROJECT, 2023
** B-MUL-100-LIL-1-1-myradar-gianni.henriques
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int nb = 0;

    for (int i = 0 ; str[i] >= '0' && str[i] <= '9'; i++) {
        nb = nb * 10 + (str[i] - '0');
    }
    return nb;
}
