# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shhidrob <shhidrob@student.42london.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/22 23:17:16 by shhidrob          #+#    #+#              #
#    Updated: 2024/12/23 20:47:08 by shhidrob         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a

SRCS:=	ft_strlen.c \
	ft_strlcpy.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_isascii.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_strlcat.c \
	ft_memmove.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strnstr.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_atoi.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_split.c \
	ft_itoa.c

BONUSSRCS:= ft_lstnew.c \
	    ft_lstadd_front.c \
	    ft_lstsize.c \
	    ft_lstlast.c \
	    ft_lstclear.c \
	    ft_lstadd_back.c \
	    ft_lstdelone.c \
	    ft_lstiter.c \
	    ft_lstmap.c

OBJS:= $(SRCS:%.c=%.o)

BONUSOBJS := $(BONUSSRCS:%.c=%.o)

CC:= cc

CFLAGS:= -Wall -Wextra -Werror -g

AR:= ar

ARFLAGS:= -rcs

RM:= rm -f

%.o:		%.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		$(AR) $(ARFLAGS) $@ $^

all:		$(NAME)

bonus:		$(OBJS) $(BONUSOBJS)
		$(AR) $(ARFLAGS) $(NAME) $^

clean:
		$(RM) $(OBJS) $(BONUSOBJS)

fclean: 	clean 
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
