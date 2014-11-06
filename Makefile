NAME_T		=	test
NAME_L		=	libmy.a

CC		=	gcc
LIB		=	ar rc

RM		=	rm -f

COPY		=	copy/my_strcpy.c		\
			copy/my_strncpy.c		\

CAT		=	concat/my_ev_strcat.c		\
			concat/my_strncat.c		\
			concat/my_ev_strncat.c		\
			concat/my_ev_strlcat.c		\
			concat/my_fcat.c		\

PARSE_STR	=	concat/parse_str/my_ext.c	\
			concat/parse_str/parse_arg.c	\
			concat/parse_str/parse_str.c	\
			concat/parse_str/rec_arg.c	\
			concat/parse_str/call_func.c	\
			concat/parse_str/len_arg.c	\

PRINT		=	print/my_printf.c		\
			print/my_fprintf.c		\

UTILS		=	utils/check_len.c		\
			utils/my_strlen.c		\
			utils/my_strdup.c		\
			utils/my_revstr.c		\
			utils/ret_nbr_base.c		\
			utils/ret_str.c			\
			utils/ret_char.c		\
			utils/ret_us_nbr_base.c		\
			utils/ret_lg_nbr_base.c		\

CMP		=	cmp/my_strcmp.c			\
			cmp/my_strncmp.c		\

SRCS_L		=	$(COPY)				\
			$(CAT)				\
			$(PARSE_STR)			\
			$(PRINT)			\
			$(UTILS)			\
			$(CMP)				\

SRCS_T		=	main.c				\
			$(SRCS_L)			\

OBJS_T		=	$(SRCS_T:.c=.o)
OBJS_L		=	$(SRCS_L:.c=.o)

INC		=	-I include/

CFLAGS		=	$(INC)

all		:	$(NAME_T)

test		:	$(OBJS_T)
			$(CC) $(CFLAGS) $(OBJS_T) -o $(NAME_T)

lib		:	$(OBJS_L)
			$(LIB) $(NAME_L) $(OBJS_L)

tmp		:
			find './' -name '*~' -exec rm '{}' ;
			find './' -name '*#' -exec rm '{}' ;

clean		:
			$(RM) $(OBJS_T)

fclean		:	clean
			$(RM) $(NAME_T) $(NAME_L)

re		:	fclean all

dbg		:	CFLAGS += -g
dbg		:	fclean re
