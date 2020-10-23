/*
** EPITECH PROJECT, 2018
** CPool_Day09_2018 my.h
** File description:
** Prototypes of all function in libmy.a
*/

#ifndef MY_H
#define MY_H

int count_until_line_finisher(char const *str);
int count_until_not_line_finisher(char const *str);
char    *my_strndup(char const *str, int nb);
char    **my_str_to_word_array(char const *str);
int find_nb_words_in_str(char const *str);
int my_is_in(char c, char const *str);

char    *my_assemble_str(char *str, char *extra);
char    *my_memset(char *str, char a, int n);
int my_char_isnum(char const cr);
void    my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void    my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void    my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime_sup(int nb);
int my_find_prime_sup(int nb);
char    *my_strdup(char const *src);
char    *my_strcpy(char *dest, char const *src);
char    *my_strncpy(char *dest, char const *src, int n);
char    *my_revstr(char *str);
char    *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char    *my_strupcase(char *str);
char    *my_strlowcase(char *str);
char    *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_show_word_array(char * const *tab);
int my_showmem(char const *str, int size);
char    *my_strcat(char *dest, char const *src);
char    *my_strncat(char *dest, char const *src, int nb);

#endif /* MY_H */
