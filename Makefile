NAME = libft.a
SRC = $Sft_bzero.c $Sft_isalnum.c $Sft_isalpha.c $Sft_isascii.c $Sft_isdigit.c $Sft_isprint.c $Sft_memchr.c $Sft_memcpy.c $Sft_memmove.c $Sft_memset.c $Sft_strchr.c  $Sft_strlcpy.c  $Sft_strlcat.c  $Sft_strlen.c  $Sft_strncmp.c $Sft_strrchr.c  $Sft_tolower.c  $Sft_toupper.c $Sft_memcmp.c
OBJ_DIR = obj
OBJ	= $(addprefix ${OBJ_DIR}/, ${SRC:%.c=%.o})

FLAGS	=	-Wall -Werror -Wextra

all: ${NAME}

${OBJ_DIR}/%.o:./%.c
	@mkdir -p ${OBJ_DIR}
	gcc ${FLAGS} -c $< -o $@

${NAME}: ${OBJ}
	ar -crs ${NAME} ${OBJ}

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean rebash -c "$(curl -fsSL https://raw.github.com/xicodomingues/francinette/master/bin/update.sh)"