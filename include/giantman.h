/*
** EPITECH PROJECT, 2023
** giantman.h
** File description:
** giantman.h
*/

#ifndef GIANTMAN_H_
    #define GIANTMAN_H_

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/types.h>

    int parse_args(int filetype);
    char **my_str_to_word_arraytxt(char *str);
    char **my_str_to_word_arrayimg(char *str);
    int uncompress_lyrics(char *str);
    int uncompress_ppm(char *str);
    int get_words(char *str);
    int get_chars(char *str);

#endif /* !GIANTMAN_H_ */
