##
## Makefile for libmy in /home/kevin/Documents/prog/C/libmy
##
## Made by kevin
## Login   <kevin@epitech.net>
##
## Started on  Wed Nov 12 15:45:08 2014 kevin
## Last update Mon Nov 17 10:37:06 2014 kevin
##

NAME_T		=	test
NAME_L		=	libmy.a

CC		=	gcc
LIB		=	ar rc

RM		=	rm -f

CMP		=	src/cmp/my_strcmp.c				\
			src/cmp/my_strncmp.c				\

COPY		=	src/copy/my_strcpy.c				\
			src/copy/my_strncpy.c				\
			src/copy/my_strcpyn.c				\
			src/copy/my_ev_strcpy.c				\
			src/copy/my_strlcpy.c				\

CONCAT		=	src/concat/my_ev_strcat.c			\
			src/concat/my_strncat.c				\
			src/concat/my_ev_strncat.c			\
			src/concat/my_ev_strlcat.c			\
			src/concat/my_fcat.c				\

CHECK_BASE	=	src/other/check_base/check_ag_base.c		\
			src/other/check_base/in_crochet.c	 	\
			src/other/check_base/add.c		 	\
			src/other/check_base/init_elem.c	 	\
			src/other/check_base/let_in_list.c	 	\
			src/other/check_base/validation_base.c 		\
			src/other/check_base/aff_list.c	 		\
			src/other/check_base/free_list.c	 	\

PARSE_STR	=	src/other/parse_str/tab_ext.c			\
			src/other/parse_str/parse_arg.c			\
			src/other/parse_str/parse_str.c			\
			src/other/parse_str/rec_arg.c			\
			src/other/parse_str/call_func.c			\
			src/other/parse_str/len_arg.c			\

RET		=	src/other/ret/ret_str.c				\
			src/other/ret/ret_char.c			\
			src/other/ret/ret_us_nbr_base.c			\
			src/other/ret/ret_lg_nbr_base.c			\
			src/other/ret/ret_nbr_base.c			\
			src/other/ret/check_len.c			\

STR		=	src/other/str/set_born.c			\
			src/other/str/analyse_ret.c			\
			src/other/str/tab_opt_s.c			\
			src/other/str/size_1.c				\
			src/other/str/size_2.c				\
			src/other/str/size_3.c				\

OTHER		=	$(CHECK_BASE)					\
			$(PARSE_STR)					\
			$(RET)						\
			$(STR)						\

PRINT		=	src/print/my_printf.c				\
			src/print/my_fprintf.c				\

UTILS		=	src/utils/my_strlen.c				\
			src/utils/my_strdup.c				\
			src/utils/my_revstr.c				\
			src/utils/len_tab.c				\
			src/utils/my_str_to_wordtab.c			\
			src/utils/my_getnbr.c				\
			src/utils/aff_tab.c				\
			src/utils/is_num.c				\
			src/utils/my_strlowcase.c			\
			src/utils/my_strupcase.c			\

HOME		=	src/get_next_line.c				\

SRCS_L		=	$(CMP)						\
			$(CONCAT)					\
			$(COPY)						\
			$(OTHER)					\
			$(PRINT)					\
			$(UTILS)					\
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

re		:	fclean test

dbg		:	CFLAGS += -g
dbg		:	fclean re
