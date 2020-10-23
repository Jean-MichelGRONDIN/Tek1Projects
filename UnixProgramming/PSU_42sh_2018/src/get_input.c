/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** get input from user
*/

#include "./../include/minishell.h"

char    *get_input(void)
{
    char    *str = NULL;
    size_t  len = 0;
    int ret = 0;

    print_prompt();
    ret = getline(&str, &len, stdin);
    if (ret < 0 || str == NULL || str[0] == '\0') {
        if (isatty(0))
            my_putstr("exit\n");
        str = free_cleanly_this_str(str);
    } else
        if (str[0] != '\n')
            str[my_strlen(str) - 1] = '\0';
    return (str);
}
