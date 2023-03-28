/*
** EPITECH PROJECT, 2023
** antman.h
** File description:
** antman.h
*/

#ifndef ANTMAN_H_
    #define ANTMAN_H_

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include "my.h"

    int compress_lyrics(char *str);
    int compress_ppm(char *str);
    int parse_args(int filetype);
    char **my_str_to_word_arraytxt(char *str);
    char **my_str_to_word_arrayimg(char *str);
    char **occurence(char **tab, int n);
    int get_words(char *str);
    int get_chars(char *str);

#endif /* !ANTMAN_H_ */
