# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 16:02:32 by rtoast            #+#    #+#              #
#    Updated: 2020/11/16 04:33:49 by rtoast           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_FILE = ft_isalpha.c ft_isprint.c ft_toupper.c ft_atoi.c ft_isascii.c\
ft_isalnum.c ft_isdigit.c ft_strlen.c ft_tolower.c ft_memset.c\
ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_memchr.c ft_memcmp.c ft_putnbr_fd.c\
ft_calloc.c ft_strdup.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_itoa.c\
ft_split.c ft_substr.c ft_strmapi.c ft_strtrim.c ft_strnstr.c ft_strjoin.c\
ft_strlcpy.c ft_strlcat.c

BONUS_C_FILE = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

ifdef COMPILE_BONUS
	O_FILE = $(C_FILE:.c=.o) $(BONUS_C_FILE:.c=.o)
else
	O_FILE = $(C_FILE:.c=.o)
endif

HEDEAR = libft.h

.PHONY = all clean fclean bonus re

all: $(NAME)

$(NAME): $(O_FILE)
	ar -rcs $(NAME) $(O_FILE)

%.o: %.c $(HEDER)
	gcc -Wall -Wextra -Werror -c $< -o $@
bonus:
	$(MAKE) COMPILE_BONUS=1 all
clean:
	rm -f $(C_FILE:.c=.o) $(BONUS_C_FILE:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all
