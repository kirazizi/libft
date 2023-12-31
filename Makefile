# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 18:24:52 by sbzizal           #+#    #+#              #
#    Updated: 2022/11/12 14:04:29 by sbzizal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS  = ft_isdigit.c ft_memset.c ft_isprint.c ft_strlcat.c\
        ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c\
        ft_toupper.c ft_memchr.c ft_isalnum.c ft_strncmp.c ft_isalpha.c\
		ft_strchr.c ft_strnstr.c ft_isascii.c ft_memmove.c ft_strrchr.c\
        ft_memcpy.c ft_calloc.c ft_strdup.c ft_atoi.c ft_memcmp.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c \
		ft_putendl_fd.c ft_split.c ft_itoa.c ft_striteri.c ft_strmapi.c\

OBJS = ${SRCS:.c=.o}

bSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c\
		ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c\

bOBJS = ${bSRCS:.c=.o}

CC = cc

FLAGS = -Wall -Wextra -Werror

all : ${NAME}

$(NAME): $(OBJS)
	@ar r $(NAME) $(OBJS)
	
bonus: $(bOBJS)
	@ar r $(NAME) $(bOBJS)
	
clean:
	rm -f $(OBJS) ${bOBJS}
	
%.o : %.c libft.h
	$(CC) $(FLAGS) -c $<

fclean: clean
	rm -f ${NAME}

re:	fclean all