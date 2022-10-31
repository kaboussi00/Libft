NAME = libft.a

CC = cc

INC = libft.h

SRCS = ft_atoi.c\
        ft_isalpha.c\
        ft_memmove.c\
        ft_strdup.c\
        ft_strlcpy.c\
        ft_strnstr.c\
        ft_tolower.c\
        ft_bzero.c\
        ft_isascii.c\
        ft_memchr.c\
        ft_memset.c\
        ft_strlen.c\
        ft_strrchr.c\
        ft_toupper.c\
        ft_calloc.c\
        ft_isdigit.c\
        ft_memcmp.c\
        ft_strjoin.c\
        ft_isalnum.c\
        ft_isprint.c\
        ft_memcpy.c\
        ft_strchr.c\
        ft_strlcat.c\
        ft_strncmp.c\
        ft_substr.c\
        ft_strtrim.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

AR = ar -rsc

all:$(NAME)
$(NAME):$(OBJS)
	$(AR) $@ $^

.o:.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all