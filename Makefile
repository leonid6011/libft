NAME = libft.a

SRC =   ft_strlen.c     ft_isdigit.c    ft_isalnum.c\
        ft_isascii.c	ft_isprint.c	ft_memset.c\
        ft_bzero.c		ft_strlen.c		ft_strchr.c\
		ft_strrchr.c	ft_strncmp.c	ft_memchr.c\
		ft_memcmp.c		ft_atoi.c		ft_memcpy.c\
		ft_memmove.c	ft_calloc.c		ft_strdup.c\
		ft_strjoin.c	ft_isalpha.c	ft_itoa.c\
		ft_substr.c		ft_putchar_fd.c	ft_putstr_fd.c\
		ft_putendl_fd.c	ft_strtrim.c	ft_strmapi.c\
		ft_strlcat.c	ft_strlcpy.c	ft_strnstr.c\
		ft_putnbr_fd.c	ft_toupper.c	ft_tolower.c\
		ft_split.c		ft_striteri.c



OBJ = $(patsubst %.c,%.o,$(SRC))

D_FILES = $(patsubst %.c,%.d,$(SRC))

OPTFLAGS = -O2
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?
	
%.o : %.c
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ -MD
include $(wildcard $(D_FILES))

clean:
	rm	-f	$(OBJ)	$(D_FILES)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re