/*
** EPITECH PROJECT, 2023
** B-CPE-110-LIL-1-1-antman-gianni.henriques
** File description:
** main
*/

#include "../include/giantman.h"
#include "../include/my.h"

int giantman(char *filename, int filetype)
{
    char *buffer;

    if ((buffer = my_readfile(filename)) == NULL) {
        my_putstr("Error: File not found.\n");
        return 1;
    }
    if ((parse_args(filetype)) == 0) {
        my_putstr("Error: Invalid filetype.\n");
        return 1;
    }
    if ((parse_args(filetype)) == 1 ||
    (parse_args(filetype)) == 2)
        uncompress_lyrics(buffer);
    if ((parse_args(filetype)) == 3)
        uncompress_ppm(buffer);
    free(buffer);
    return 0;
}

void print_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./giantman [compressed file] [original filetype]\n");
    my_putstr("OPTIONS\n");
    my_putstr("\tcompressed file\tfile to uncompress.\n");
    my_putstr("\toriginal filetype\ttype of the original file.\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tUncompress a file to its original form with this command.\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        print_help();
        return 84;
    }
    if (ac != 3) {
        my_putstr("USAGE : ./giantman [file] [filetype]\n");
        return 84;
    }
    if (giantman(av[1], my_getnbr(av[2])) == 1)
        return 84;
}
