# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 13:47:00 by abeaudui          #+#    #+#              #
#    Updated: 2022/11/16 12:58:16 by abeaudui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS= -Wall -Wextra -Werror
SRCS		= 	ft_putchar_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_strtrim.c ft_strjoin.c ft_strlen.c ft_calloc.c ft_substr.c ft_memcmp.c ft_memset.c ft_memchr.c ft_memmove.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_toupper.c ft_tolower.c ft_memcmp.c ft_strncmp.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strnstr.c ft_strdup.c ft_strchr.c ft_isascii.c\

OBJS= $(SRCS:.c=.o)
AR= ar rcs  #ar permet de créer une archive, d'y ajouter ou d'en extraire des fichiers et rcs stand for replace, create and sort
RM= rm -f
NAME= libft.a
INC= ./includes/

all : $(NAME)

${NAME}: ${OBJS}
	 ${AR} ${NAME} ${OBJS}

clean : 
		rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: clean all fclean re