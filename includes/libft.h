/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbinet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:33:24 by cbinet            #+#    #+#             */
/*   Updated: 2017/03/16 14:07:27 by cbinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

enum			e_which
{
	FIRST,
	SECOND,
	ALL,
	NONE
};

char **ft_strsplit(char const *s, char c);
char *ft_itoa(int nb);
char *ft_itoabase(unsigned int nb, char *base);
char *ft_litoa(long int nb);
char *ft_litoabase(long unsigned int nb, char *base);
char *ft_llitoa(long long int nb);
char *ft_mitoa(intmax_t nb);
char *ft_strcat(char *s1, const char *s2);
char *ft_strchr(const char *s, int c);
char *ft_strcpy(char *dest, const char *src);
char *ft_strdup(char *src);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strjoinfree(char **s1, char **s2, int which);
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strncat(char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dest, const char *src, size_t len);
char *ft_strnew(size_t size);
char *ft_strnstr(const char *big, const char *little, size_t n);
char *ft_strrchr(const char *s, int c);
char *ft_strrealloc(char *str, int size);
char *ft_strstr(const char *big, const char *little);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s);
char *ft_uitoa(unsigned int nb);
char *ft_ulitoa(unsigned long int nb);
char *ft_umitoa(uintmax_t nb);
int ft_atoi(char *str);
int ft_isalnum(int i);
int ft_isalpha(int i);
int ft_isascii(int i);
int ft_isdigit(int i);
int ft_isprint(int i);
int ft_itoalen(int nb);
int ft_lstlen(t_list *lst);
int ft_memcmp(const void *s1, const void *s2, size_t len);
int ft_sstrlen(wchar_t *str);
int ft_strcmp(char *s1, char *s2);
int ft_strdlen(char *str);
int ft_strequ(char const *s1, char const *s2);
int ft_strlen(char *str);
int ft_strncmp(const char *s1, const char *s2, size_t size);
int ft_strnequ(char const *s1, char const *s2, size_t n);
int ft_tolower(int i);
int ft_toupper(int i);
int ft_witablen(int *str, int precision);
int ft_wtablen(int *str);
size_t ft_strlcat(char *s1, const char *s2, size_t n);
t_list *ft_lstgoto(t_list *lst, int place);
t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list *ft_lstnew(void const *content, size_t content_size);
void *ft_memalloc(size_t size);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void ft_lstadd(t_list **alst, t_list *new);
void ft_lstaddend(t_list **alst, t_list *new);
void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void ft_lstreplace(t_list **lst, t_list *new, int place);
void ft_memdel(void **ap);
void ft_putchar(char c);
void ft_putchar_fd(char c, int fd);
void ft_putendl(char const *s);
void ft_putendl_fd(char const *s, int fd);
void ft_puthexa(unsigned int n);
void ft_putlhexa(unsigned int n);
void ft_putlnbrbase(unsigned long int n, char *base);
void ft_putloctal(unsigned long int n);
void ft_putlunbr(unsigned long int n);
void ft_putnbr(int n);
void ft_putnbr_fd(int n, int fd);
void ft_putnbrbase(unsigned int n, char *base);
void ft_putoctal(unsigned int n);
void ft_putstr(char const *str);
void ft_putstr_fd(char const *str, int fd);
void ft_putunbr(unsigned int n);
void ft_strclr(char *s);
void ft_strdel(char **as);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
