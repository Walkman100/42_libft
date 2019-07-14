/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:26:26 by mcarter           #+#    #+#             */
/*   Updated: 2019/07/14 20:12:59 by mcarter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# define STR char *
# define BUFF_SIZE 32

# ifdef __SIZEOF_INT128__
#  define MAXNBR __int128
#  define MAXUNBR unsigned __int128
# else
#  define MAXNBR long long
#  define MAXUNBR unsigned long long
# endif

void			ft_putchar_fd(size_t c, int fd);
void			ft_putstr_fd(const STR s, int fd);
void			ft_putendl_fd(const STR s, int fd);
void			ft_putnbr_fd(MAXNBR n, int fd);
void			ft_putchar(size_t c);
void			ft_putstr(const STR s);
void			ft_putendl(const STR s);
void			ft_putnbr(MAXNBR n);
void			ft_putnbrnl(MAXNBR n);
MAXUNBR			ft_strlen(const STR s);
MAXUNBR			ft_strclen(const STR s, int c);
int				ft_isalpha(size_t c);
int				ft_isdigit(size_t c);
int				ft_isalnum(size_t c);
int				ft_isascii(size_t c);
int				ft_isprint(size_t c);
int				ft_toupper(int c);
int				ft_tolower(int c);
STR				ft_strcpy(STR dst, const STR src);
STR				ft_strncpy(STR dst, const STR src, size_t len);
STR				ft_strcat(STR s1, const STR s2);
STR				ft_strncat(STR s1, const STR s2, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
STR				ft_strnew(size_t size);
void			ft_strdel(STR *as);
void			ft_strclr(STR s);
STR				ft_strdup(const STR s);
size_t			ft_strlcat(STR dst, const STR src, size_t size);
STR				ft_strrev(STR s);
STR				ft_strchr(const STR s, int c);
STR				ft_strrchr(const STR s, int c);
STR				ft_strstr(const STR haystack, const STR needle);
STR				ft_strnstr(const STR haystack, const STR needle,
					size_t len);
int				ft_strcmp(const STR s1, const STR s2);
int				ft_strncmp(const STR s1, const STR s2, size_t n);
int				ft_iswhitespace(int c);
int				ft_atoi(const STR s);
MAXNBR			ft_atol(const STR s);
void			ft_striter(STR s, void (*f)(STR));
void			ft_striteri(STR s, void (*f)(unsigned int, STR));
STR				ft_strmap(const STR s, char (*f)(char));
STR				ft_strmapi(const STR s, char (*f)(unsigned int, char));
int				ft_strequ(const STR s1, const STR s2);
int				ft_strnequ(const STR s1, const STR s2, size_t n);
STR				ft_strsub(const STR s, unsigned int start, size_t len);
STR				ft_strjoin(const STR s1, const STR s2);
STR				ft_strtrim(const STR s);
STR				*ft_strsplit(const STR s, char c);
int				ft_nbrlen(MAXNBR n);
STR				ft_itoa(MAXNBR n);

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

typedef struct	s_flist
{
	int				fd;
	STR				buff;
	int				pos;
	int				eof;
	struct s_flist	*next;
}				t_flist;

int				get_next_line(const int fd, STR *line);

size_t			get_tw(void);
size_t			get_th(void);
void			put_clr(STR c);
void			debug_2(STR s, const STR caller_name);
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
# define BBLACK       "\e[1;30m"
# define BRED         "\e[1;31m"
# define BGREEN       "\e[1;32m"
# define BYELLOW      "\e[1;33m"
# define BBLUE        "\e[1;34m"
# define BMAGENTA     "\e[1;35m"
# define BCYAN        "\e[1;36m"
# define BWHITE       "\e[1;37m"
# define BCK_BLACK    "\e[40m"
# define BCK_RED      "\e[41m"
# define BCK_GREEN    "\e[42m"
# define BCK_YELLOW   "\e[43m"
# define BCK_BLUE     "\e[44m"
# define BCK_MAGENTA  "\e[45m"
# define BCK_CYAN     "\e[46m"
# define BCK_WHITE    "\e[47m"
# define BCK_BBLACK   "\e[1;40m"
# define BCK_BRED     "\e[1;41m"
# define BCK_BGREEN   "\e[1;42m"
# define BCK_BYELLOW  "\e[1;43m"
# define BCK_BBLUE    "\e[1;44m"
# define BCK_BMAGENTA "\e[1;45m"
# define BCK_BCYAN    "\e[1;46m"
# define BCK_BWHITE   "\e[1;47m"

#endif
