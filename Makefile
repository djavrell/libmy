NAME_T		=	test
NAME_L		=	libmy.a

CC		=	gcc
LIB		=	ar rc

RM		=	rm -f

COPY		=	src/copy/my_strcpy.c				\
			src/copy/my_strncpy.c				\
			src/copy/my_strcpyn.c				\
			src/copy/my_ev_strcpy.c				\
			src/copy/my_strlcpy.c				\

CAT		=	src/concat/my_ev_strcat.c			\
			src/concat/my_strncat.c				\
			src/concat/my_ev_strncat.c			\
			src/concat/my_ev_strlcat.c			\
			src/concat/my_fcat.c				\

PARSE_STR	=	src/concat/parse_str/my_ext.c			\
			src/concat/parse_str/parse_arg.c		\
			src/concat/parse_str/parse_str.c		\
			src/concat/parse_str/rec_arg.c			\
			src/concat/parse_str/call_func.c		\
			src/concat/parse_str/len_arg.c			\

POTHER		=	src/concat/other/ret_str.c			\
			src/concat/other/ret_char.c			\
			src/concat/other/ret_us_nbr_base.c		\
			src/concat/other/ret_lg_nbr_base.c		\
			src/concat/other/ret_nbr_base.c			\
			src/concat/other/check_len.c			\

PRINT		=	src/print/my_printf.c				\
			src/print/my_fprintf.c				\

UTILS		=	src/utils/my_strlen.c				\
			src/utils/my_strdup.c				\
			src/utils/my_revstr.c				\

CMP		=	src/cmp/my_strcmp.c				\
			src/cmp/my_strncmp.c				\

HOME		=	get_next_line.c					\

SRCS_L		=	$(COPY)						\
			$(CAT)						\
			$(PARSE_STR)					\
			$(POTHER)					\
			$(PRINT)					\
			$(UTILS)					\
			$(CMP)						\
			$(HOME)						\

SRCS_T		=	main.c						\
			$(SRCS_L)					\

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
