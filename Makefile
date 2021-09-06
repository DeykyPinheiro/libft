NAME =		libft.a

CC =		clang

CFLAGS = -c \
		-Wall\
		-Werror\
		-Wextra

AR		= ar
RM		= rm -f

CFLAGS    = -g -Wall -Wextra -Werror
ARFLAGS    = rc


SRC	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c
SRC	+=	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
SRC	+=	ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c
SRC	+=	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c
SRC	+=	ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_split.c
SRC	+=	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c
SRC	+=	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c
SRC	+=	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c
SRC	+=	ft_tolower.c ft_toupper.c ft_count_digit.c ft_free_ptr.c

SRC_BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c
SRC_BONUS +=	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c
SRC_BONUS +=	ft_lstiter.c ft_lstmap.c

OBJ = $(patsubst %.c,%.o,$(SRC)) #cria os .o

OBJ_BONUS = $(patsubst %.c,%.o,$(SRC_BONUS))


$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

all: $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

bonus: $(NAME) $(OBJ_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(OBJ_BONUS)

re: fclean all

.PHONY: all fclean clean re bonus
