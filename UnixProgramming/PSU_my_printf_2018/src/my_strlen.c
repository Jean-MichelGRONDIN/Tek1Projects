/*
** EPITECH PROJECT, 2018
** my_strlen_c
** File description:
** display the number of characteres found in the string
*/

#include "./../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
