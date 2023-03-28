/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** main
*/

#include "../include/antman.h"
#include "../include/my.h"

int compression_process(char *buffer, int filetype)
{
    if ((parse_args(filetype)) == 0) {
        my_putstr("Error: Invalid filetype.\n");
        return 1;
    }
    if ((parse_args(filetype)) == 1 ||
    (parse_args(filetype)) == 2) {
        if ((compress_lyrics(buffer)) == 1)
            return 1;
    }
    if ((parse_args(filetype)) == 3) {
        if ((compress_ppm(buffer)) == 1)
            return 1;
    }
    return 0;
}

int antman(char *filename, int filetype)
{
    char *buffer;

    if ((buffer = my_readfile(filename)) == NULL) {
        my_putstr("Error: File not found.\n");
        return 1;
    }
    if (buffer[0] == '\0')
        return 0;
    if ((compression_process(buffer, filetype)) == 1)
        return 1;
    free(buffer);
    return 0;
}

void print_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./antman [file] [filetype]\n");
    my_putstr("OPTIONS\n");
    my_putstr("\tfile\tfile to be compressed.\n");
    my_putstr("\tfiletype\tnumber representing the file type :\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tCompress a file as much as you can with this command.\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        print_help();
        return 84;
    }
    if (ac != 3) {
        my_putstr("USAGE : ./antman [file] [filetype]\n");
        return 84;
    }
    if (antman(av[1], my_getnbr(av[2])) == 1)
        return 84;
}
