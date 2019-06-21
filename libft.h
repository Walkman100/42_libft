/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:26:26 by mcarter           #+#    #+#             */
/*   Updated: 2019/06/14 11:45:52 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

void			ft_putchar_fd(size_t c, int fd);
void			ft_putstr_fd(const char *s, int fd);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putnbr_fd(long n, int fd);
void			ft_putchar(size_t c);
void			ft_putstr(const char *s);
void			ft_putendl(const char *s);
void			ft_putnbr(long n);
void			ft_putnbrnl(long n);
size_t			ft_strlen(const char *s);
size_t			ft_strclen(const char *s, int c);
int				ft_isalpha(size_t c);
int				ft_isdigit(size_t c);
int				ft_isalnum(size_t c);
int				ft_isascii(size_t c);
int				ft_isprint(size_t c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
char			*ft_strdup(const char *s);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strrev(char *str);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_iswhitespace(int c);
int				ft_atoi(const char *str);
long			ft_atol(const char *str);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(const char *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int				ft_strequ(const char *s1, const char *s2);
int				ft_strnequ(const char *s1, const char *s2, size_t n);
char			*ft_strsub(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s);
char			**ft_strsplit(const char *s, char c);
int				ft_intlen(long n);
char			*ft_itoa(int n);

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

size_t			get_tw(void);
size_t			get_th(void);
void			debug_2(char *str, const char *caller_name);
# define DEBUG(x) debug_2(x, __func__)

# define RESET        "\e[0m"
# define BLACK        "\e[30m"
# define RED          "\e[31m"
# define GREEN        "\e[32m"
# define YELLOW       "\e[33m"
# define BLUE         "\e[34m"
# define MAGENTA      "\e[35m"
# define CYAN         "\e[36m"
# define WHITE        "\e[37m"
# define BCK_BLACK    "\e[31m"
# define BCK_RED      "\e[41m"
# define BCK_GREEN    "\e[42m"
# define BCK_YELLOW   "\e[43m"
# define BCK_BLUE     "\e[44m"
# define BCK_MAGENTA  "\e[45m"
# define BCK_CYAN     "\e[46m"
# define BCK_WHITE    "\e[47m"
# define BBLACK       "\e[1;30m"
# define BRED         "\e[1;31m"
# define BGREEN       "\e[1;32m"
# define BYELLOW      "\e[1;33m"
# define BBLUE        "\e[1;34m"
# define BMAGENTA     "\e[1;35m"
# define BCYAN        "\e[1;36m"
# define BWHITE       "\e[1;37m"
# define BCK_BBLACK   "\e[1;31m"
# define BCK_BRED     "\e[1;41m"
# define BCK_BGREEN   "\e[1;42m"
# define BCK_BYELLOW  "\e[1;43m"
# define BCK_BBLUE    "\e[1;44m"
# define BCK_BMAGENTA "\e[1;45m"
# define BCK_BCYAN    "\e[1;46m"
# define BCK_BWHITE   "\e[1;47m"

#endif
