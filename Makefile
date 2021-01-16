##
## EPITECH PROJECT, 2019
## libmy
## File description:
## Makefile
##

NAME	=	libmy.a

MATH_DIR	=	math/
MATH_SRCS	=	factorial.c		\
				find_prime_sup.c\
				isprime.c		\
				my_pow.c		\
				my_sqrt.c
MATH	=	$(addprefix $(MATH_DIR), $(MATH_SRCS))

STRTYPE_DIR	=	strtype/
STRTYPE_SRCS	=	str_isalnum.c	\
				str_isalpha.c	\
				str_islower.c	\
				str_isnum.c		\
				str_isprint.c	\
				str_isupper.c
STRTYPE	=	$(addprefix $(STRTYPE_DIR), $(STRTYPE_SRCS))

SRCS_DIR	=	src/
SRCS_FILES	=	my_atoi.c		\
				my_memcpy.c		\
				my_memset.c		\
				my_putchar.c	\
				my_strcat.c		\
				my_strcmp.c		\
				my_strcpy.c		\
				my_strdup.c		\
				my_strlen.c		\
				my_strncat.c	\
				my_strncmp.c	\
				my_strncpy.c	\
				my_strstr.c		\
				puterr.c		\
				putnbr.c		\
				putnbr_base.c	\
				putstr.c		\
				revstr.c		\
				showstr.c		\
				$(MATH)			\
				$(STRTYPE)
SRCS	=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS	=	$(SRCS:.c=.o)

CFLAGS =	-Iinclude/

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all re clean fclean
