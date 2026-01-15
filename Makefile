NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_strlen.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_toupper.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strncmp.c \

OBJS = $(SRCS:.c=.o)

RM = rm -f
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) *.o

re: fclean all

.PHONY: all clean fclean re
