NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
      ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
      ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
      ft_atoi.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_strrchr.c \
      ft_memcmp.c ft_calloc.c ft_strdup.c ft_strnstr.c ft_substr.c \
      ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
      ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
      ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ && echo "🚀 🔹 Created object file: $@"

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ) && echo "🏆 🔸 Static library $(NAME) successfully created!"

clean:
	@$(RM) $(OBJ) && echo "🧹 ✨ Object files have been cleaned up!"

fclean: clean
	@$(RM) $(NAME) && echo "💥 🗑️ Removed static library: $(NAME)"

re: fclean all
	@echo "🔄 🔧 Project rebuilt successfully!"

.PHONY: all clean fclean re