# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/22 12:22:08 by mcarter           #+#    #+#              #
#    Updated: 2019/09/26 18:37:54 by mcarter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OFILES = *.o
GCCFLAGS = -Wall -Wextra -Werror
MAKEFLAGS += -j

all: $(NAME)

test: $(NAME) libft.h tests/tests.h tests/*.c
	gcc $(GCCFLAGS) tests/*.c -L. -lft -o test

test2files = tests/tests.c tests/2/main.c tests/2/test_*.c
test2: $(NAME) libft.h tests/tests.h $(test2files)
	gcc $(GCCFLAGS) $(test2files) -L. -lft -o test2

$(NAME): ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
		ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o ft_strlen.o \
		ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
		ft_toupper.o ft_tolower.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
		ft_strncat.o ft_strcmp.o ft_strncmp.o ft_strstr.o ft_strnstr.o \
		ft_memset.o ft_bzero.o ft_strclr.o ft_memalloc.o ft_strnew.o \
		ft_strdup.o ft_strequ.o ft_strnequ.o ft_nbrlen.o ft_itoa.o \
		ft_atoi.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o \
		ft_strlcat.o ft_strchr.o ft_strrchr.o ft_memdel.o ft_strdel.o \
		ft_memcpy.o ft_memmove.o ft_memccpy.o ft_memcmp.o ft_memchr.o \
		ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_lstnew.o \
		ft_lstdel.o ft_lstdelone.o ft_lstadd.o ft_lstiter.o ft_lstmap.o \
		ft_iswhitespace.o ft_atol.o ft_putnbrnl.o ft_strrev.o ft_strclen.o \
		get_tw.o get_th.o debug.o get_next_line.o put_clr.o ft_putunbr.o \
		ft_printf.o ft_puthex.o ft_unbrlen.o ft_strjoin3.o ft_chrcount.o \
		ft_realloc.o ft_parrlen.o
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

so: libft.so
libft.so: *.c
	gcc $(GCCFLAGS) -shared -o libft.so -fPIC *.c

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME) test test2 libft.so

re: fclean
	make all

norm:
	norminette *.c libft.h tests/*.c tests/tests.h $(test2files) 2>/dev/null

# individual functions

ft_memset.o: ft_memset.c
	gcc $(GCCFLAGS) -c ft_memset.c

ft_bzero.o: ft_bzero.c
	gcc $(GCCFLAGS) -c ft_bzero.c

ft_memcpy.o: ft_memcpy.c
	gcc $(GCCFLAGS) -c ft_memcpy.c

ft_memccpy.o: ft_memccpy.c
	gcc $(GCCFLAGS) -c ft_memccpy.c

ft_memmove.o: ft_memmove.c
	gcc $(GCCFLAGS) -c ft_memmove.c

ft_memchr.o: ft_memchr.c
	gcc $(GCCFLAGS) -c ft_memchr.c

ft_memcmp.o: ft_memcmp.c
	gcc $(GCCFLAGS) -c ft_memcmp.c

ft_strlen.o: ft_strlen.c
	gcc $(GCCFLAGS) -c ft_strlen.c

ft_strclen.o: ft_strclen.c
	gcc $(GCCFLAGS) -c ft_strclen.c

ft_strdup.o: ft_strdup.c
	gcc $(GCCFLAGS) -c ft_strdup.c

ft_strcpy.o: ft_strcpy.c
	gcc $(GCCFLAGS) -c ft_strcpy.c

ft_strncpy.o: ft_strncpy.c
	gcc $(GCCFLAGS) -c ft_strncpy.c

ft_strcat.o: ft_strcat.c
	gcc $(GCCFLAGS) -c ft_strcat.c

ft_strncat.o: ft_strncat.c
	gcc $(GCCFLAGS) -c ft_strncat.c

ft_strlcat.o: ft_strlcat.c
	gcc $(GCCFLAGS) -c ft_strlcat.c

ft_strrev.o: ft_strrev.c
	gcc $(GCCFLAGS) -c ft_strrev.c

ft_strchr.o: ft_strchr.c
	gcc $(GCCFLAGS) -c ft_strchr.c

ft_strrchr.o: ft_strrchr.c
	gcc $(GCCFLAGS) -c ft_strrchr.c

ft_strstr.o: ft_strstr.c
	gcc $(GCCFLAGS) -c ft_strstr.c

ft_strnstr.o: ft_strnstr.c
	gcc $(GCCFLAGS) -c ft_strnstr.c

ft_strcmp.o: ft_strcmp.c
	gcc $(GCCFLAGS) -c ft_strcmp.c

ft_strncmp.o: ft_strncmp.c
	gcc $(GCCFLAGS) -c ft_strncmp.c

ft_iswhitespace.o: ft_iswhitespace.c
	gcc $(GCCFLAGS) -c ft_iswhitespace.c

ft_atoi.o: ft_atoi.c
	gcc $(GCCFLAGS) -c ft_atoi.c

ft_atol.o: ft_atol.c
	gcc $(GCCFLAGS) -c ft_atol.c

ft_isalpha.o: ft_isalpha.c
	gcc $(GCCFLAGS) -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	gcc $(GCCFLAGS) -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c
	gcc $(GCCFLAGS) -c ft_isalnum.c

ft_isascii.o: ft_isascii.c
	gcc $(GCCFLAGS) -c ft_isascii.c

ft_isprint.o: ft_isprint.c
	gcc $(GCCFLAGS) -c ft_isprint.c

ft_toupper.o: ft_toupper.c
	gcc $(GCCFLAGS) -c ft_toupper.c

ft_tolower.o: ft_tolower.c
	gcc $(GCCFLAGS) -c ft_tolower.c

ft_memalloc.o: ft_memalloc.c
	gcc $(GCCFLAGS) -c ft_memalloc.c

ft_memdel.o: ft_memdel.c
	gcc $(GCCFLAGS) -c ft_memdel.c

ft_strnew.o: ft_strnew.c
	gcc $(GCCFLAGS) -c ft_strnew.c

ft_strdel.o: ft_strdel.c
	gcc $(GCCFLAGS) -c ft_strdel.c

ft_strclr.o: ft_strclr.c
	gcc $(GCCFLAGS) -c ft_strclr.c

ft_striter.o: ft_striter.c
	gcc $(GCCFLAGS) -c ft_striter.c

ft_striteri.o: ft_striteri.c
	gcc $(GCCFLAGS) -c ft_striteri.c

ft_strmap.o: ft_strmap.c
	gcc $(GCCFLAGS) -c ft_strmap.c

ft_strmapi.o: ft_strmapi.c
	gcc $(GCCFLAGS) -c ft_strmapi.c

ft_strequ.o: ft_strequ.c
	gcc $(GCCFLAGS) -c ft_strequ.c

ft_strnequ.o: ft_strnequ.c
	gcc $(GCCFLAGS) -c ft_strnequ.c

ft_strsub.o: ft_strsub.c
	gcc $(GCCFLAGS) -c ft_strsub.c

ft_strjoin.o: ft_strjoin.c
	gcc $(GCCFLAGS) -c ft_strjoin.c

ft_strtrim.o: ft_strtrim.c
	gcc $(GCCFLAGS) -c ft_strtrim.c

ft_strsplit.o: ft_strsplit.c
	gcc $(GCCFLAGS) -c ft_strsplit.c

ft_nbrlen.o: ft_nbrlen.c
	gcc $(GCCFLAGS) -c ft_nbrlen.c

ft_itoa.o: ft_itoa.c
	gcc $(GCCFLAGS) -c ft_itoa.c

ft_putchar.o: ft_putchar.c
	gcc $(GCCFLAGS) -c ft_putchar.c

ft_putstr.o: ft_putstr.c
	gcc $(GCCFLAGS) -c ft_putstr.c

ft_putendl.o: ft_putendl.c
	gcc $(GCCFLAGS) -c ft_putendl.c

ft_putnbr.o: ft_putnbr.c
	gcc $(GCCFLAGS) -c ft_putnbr.c

ft_putnbrnl.o: ft_putnbrnl.c
	gcc $(GCCFLAGS) -c ft_putnbrnl.c

ft_putchar_fd.o: ft_putchar_fd.c
	gcc $(GCCFLAGS) -c ft_putchar_fd.c

ft_putstr_fd.o: ft_putstr_fd.c
	gcc $(GCCFLAGS) -c ft_putstr_fd.c

ft_putendl_fd.o: ft_putendl_fd.c
	gcc $(GCCFLAGS) -c ft_putendl_fd.c

ft_putnbr_fd.o: ft_putnbr_fd.c
	gcc $(GCCFLAGS) -c ft_putnbr_fd.c

ft_lstnew.o: ft_lstnew.c
	gcc $(GCCFLAGS) -c ft_lstnew.c

ft_lstdelone.o: ft_lstdelone.c
	gcc $(GCCFLAGS) -c ft_lstdelone.c

ft_lstdel.o: ft_lstdel.c
	gcc $(GCCFLAGS) -c ft_lstdel.c

ft_lstadd.o: ft_lstadd.c
	gcc $(GCCFLAGS) -c ft_lstadd.c

ft_lstiter.o: ft_lstiter.c
	gcc $(GCCFLAGS) -c ft_lstiter.c

ft_lstmap.o: ft_lstmap.c
	gcc $(GCCFLAGS) -c ft_lstmap.c

get_tw.o: get_tw.c
	gcc $(GCCFLAGS) -c get_tw.c

get_th.o: get_th.c
	gcc $(GCCFLAGS) -c get_th.c

debug.o: debug.c
	gcc $(GCCFLAGS) -c debug.c

get_next_line.o: get_next_line.c
	gcc $(GCCFLAGS) -c get_next_line.c

put_clr.o: put_clr.c
	gcc $(GCCFLAGS) -c put_clr.c

ft_putunbr.o: ft_putunbr.c
	gcc $(GCCFLAGS) -c ft_putunbr.c

ft_printf.o: ft_printf.c
	gcc $(GCCFLAGS) -c ft_printf.c

ft_puthex.o: ft_puthex.c
	gcc $(GCCFLAGS) -c ft_puthex.c

ft_unbrlen.o: ft_unbrlen.c
	gcc $(GCCFLAGS) -c ft_unbrlen.c

ft_strjoin3.o: ft_strjoin3.c
	gcc $(GCCFLAGS) -c ft_strjoin3.c

ft_chrcount.o: ft_chrcount.c
	gcc $(GCCFLAGS) -c ft_chrcount.c

ft_realloc.o: ft_realloc.c
	gcc $(GCCFLAGS) -c ft_realloc.c

ft_parrlen.o: ft_parrlen.c
	gcc $(GCCFLAGS) -c ft_parrlen.c
