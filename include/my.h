/*
** EPITECH PROJECT, 2022
** lib-epitech
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

    long long my_compute_power_rec(long long nb, long long p);
    void my_free_wordarray(char **array);
    int my_getnbr(char const *str);
    int my_isnum(char *str);
    char *nbr_str(int nb);
    void my_putchar(char c);
    int my_puterr(char const *str);
    int my_putfloat(double nbr);
    void my_putnbr(long long nb);
    int my_putstr(char const *str);
    char *my_readfile(char *filepath);
    char *my_revstr(char *str);
    char *my_strcat(char *dest, char const *src);
    int my_strcmp(char const *s1, char const *s2);
    char *my_strcpy(char *dest, char const *src);
    int my_strisalpha(char *str);
    int my_strlen(char const *str);

#endif /* MY_H_ */
