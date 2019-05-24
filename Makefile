# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/22 12:22:08 by mcarter           #+#    #+#              #
#    Updated: 2019/05/24 17:36:08 by mcarter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OFILES = *.o

all: $(NAME) main

main: $(NAME) tests/main.c  # tests
	gcc -Wall -Wextra -Werror tests/main.c -L. -lft -o main

$(NAME): ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
         ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o ft_strlen.o \
         ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
         ft_toupper.o ft_tolower.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
		 ft_strncat.o ft_strcmp.o ft_strncmp.o ft_strstr.o ft_strnstr.o \
		 ft_memset.o ft_bzero.o
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f main

re: fclean all

# individual functions

ft_memset.o: ft_memset.c
	gcc -Wall -Wextra -Werror -c ft_memset.c

ft_bzero.o: ft_bzero.c
	gcc -Wall -Wextra -Werror -c ft_bzero.c

ft_memcpy.o: ft_memcpy.c
	gcc -Wall -Wextra -Werror -c ft_memcpy.c

ft_memccpy.o: ft_memccpy.c
	gcc -Wall -Wextra -Werror -c ft_memccpy.c

ft_memmove.o: ft_memmove.c
	gcc -Wall -Wextra -Werror -c ft_memmove.c

ft_memchr.o: ft_memchr.c
	gcc -Wall -Wextra -Werror -c ft_memchr.c

ft_memcmp.o: ft_memcmp.c
	gcc -Wall -Wextra -Werror -c ft_memcmp.c

ft_strlen.o: ft_strlen.c
	gcc -Wall -Wextra -Werror -c ft_strlen.c

ft_strdup.o: ft_strdup.c
	gcc -Wall -Wextra -Werror -c ft_strdup.c

ft_strcpy.o: ft_strcpy.c
	gcc -Wall -Wextra -Werror -c ft_strcpy.c

ft_strncpy.o: ft_strncpy.c
	gcc -Wall -Wextra -Werror -c ft_strncpy.c

ft_strcat.o: ft_strcat.c
	gcc -Wall -Wextra -Werror -c ft_strcat.c

ft_strncat.o: ft_strncat.c
	gcc -Wall -Wextra -Werror -c ft_strncat.c

ft_strlcat.o: ft_strlcat.c
	gcc -Wall -Wextra -Werror -c ft_strlcat.c

ft_strchr.o: ft_strchr.c
	gcc -Wall -Wextra -Werror -c ft_strchr.c

ft_srrchr.o: ft_strrchr.c
	gcc -Wall -Wextra -Werror -c ft_strrchr.c

ft_strstr.o: ft_strstr.c
	gcc -Wall -Wextra -Werror -c ft_strstr.c

ft_strnstr.o: ft_strnstr.c
	gcc -Wall -Wextra -Werror -c ft_strnstr.c

ft_strcmp.o: ft_strcmp.c
	gcc -Wall -Wextra -Werror -c ft_strcmp.c

ft_strncmp.o: ft_strncmp.c
	gcc -Wall -Wextra -Werror -c ft_strncmp.c

ft_atoi.o: ft_atoi.c
	gcc -Wall -Wextra -Werror -c ft_atoi.c

ft_isalpha.o: ft_isalpha.c
	gcc -Wall -Wextra -Werror -c ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	gcc -Wall -Wextra -Werror -c ft_isdigit.c

ft_isalnum.o: ft_isalnum.c
	gcc -Wall -Wextra -Werror -c ft_isalnum.c

ft_isascii.o: ft_isascii.c
	gcc -Wall -Wextra -Werror -c ft_isascii.c

ft_isprint.o: ft_isprint.c
	gcc -Wall -Wextra -Werror -c ft_isprint.c

ft_toupper.o: ft_toupper.c
	gcc -Wall -Wextra -Werror -c ft_toupper.c

ft_tolower.o: ft_tolower.c
	gcc -Wall -Wextra -Werror -c ft_tolower.c

ft_memalloc.o: ft_memalloc.c
	gcc -Wall -Wextra -Werror -c ft_memalloc.c

ft_memdel.o: ft_memdel.c
	gcc -Wall -Wextra -Werror -c ft_memdel.c

ft_strnew.o: ft_strnew.c
	gcc -Wall -Wextra -Werror -c ft_strnew.c

ft_strdel.o: ft_strdel.c
	gcc -Wall -Wextra -Werror -c ft_strdel.c

ft_strclr.o: ft_strclr.c
	gcc -Wall -Wextra -Werror -c ft_strclr.c

ft_striter.o: ft_striter.c
	gcc -Wall -Wextra -Werror -c ft_striter.c

ft_striteri.o: ft_striteri.c
	gcc -Wall -Wextra -Werror -c ft_striteri.c

ft_strmap.o: ft_strmap.c
	gcc -Wall -Wextra -Werror -c ft_strmap.c

ft_strmapi.o: ft_strmapi.c
	gcc -Wall -Wextra -Werror -c ft_strmapi.c

ft_strequ.o: ft_strequ.c
	gcc -Wall -Wextra -Werror -c ft_strequ.c

ft_strnequ.o: ft_strnequ.c
	gcc -Wall -Wextra -Werror -c ft_strnequ.c

ft_strsub.o: ft_strsub.c
	gcc -Wall -Wextra -Werror -c ft_strsub.c

ft_strjoin.o: ft_strjoin.c
	gcc -Wall -Wextra -Werror -c ft_strjoin.c

ft_strtrim.o: ft_strtrim.c
	gcc -Wall -Wextra -Werror -c ft_strtrim.c

ft_strsplit.o: ft_strsplit.c
	gcc -Wall -Wextra -Werror -c ft_strsplit.c

ft_itoa.o: ft_itoa.c
	gcc -Wall -Wextra -Werror -c ft_itoa.c

ft_putchar.o: ft_putchar.c
	gcc -Wall -Wextra -Werror -c ft_putchar.c

ft_putstr.o: ft_putstr.c
	gcc -Wall -Wextra -Werror -c ft_putstr.c

ft_putendl.o: ft_putendl.c
	gcc -Wall -Wextra -Werror -c ft_putendl.c

ft_putnbr.o: ft_putnbr.c
	gcc -Wall -Wextra -Werror -c ft_putnbr.c

ft_putchar_fd.o: ft_putchar_fd.c
	gcc -Wall -Wextra -Werror -c ft_putchar_fd.c

ft_putstr_fd.o: ft_putstr_fd.c
	gcc -Wall -Wextra -Werror -c ft_putstr_fd.c

ft_putendl_fd.o: ft_putendl_fd.c
	gcc -Wall -Wextra -Werror -c ft_putendl_fd.c

ft_putnbr_fd.o: ft_putnbr_fd.c
	gcc -Wall -Wextra -Werror -c ft_putnbr_fd.c

