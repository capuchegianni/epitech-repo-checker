/*
** EPITECH PROJECT, 2022
** lib-epitech
** File description:
** my_compute_power_rec
*/

long long my_compute_power_rec(long long nb, long long p)
{
    if (p < 0)
        return 84;
    if (p == 0) {
        return 1;
    } else {
        return nb * my_compute_power_rec(nb, p - 1);
    }
}
