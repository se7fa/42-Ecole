SRCS	= $(wildcard *.c)
OBJS	= $(SRCS:.c=.o)
LIBFTSRC = $(wildcard ../libft/*.c)  
LIBFTOBJS = $(LIBFTOBJS:.c=.o)  

CC	= gcc
RM	= rm -f
CFLAGS	= 

NAME	= push_swap

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

clean:	
			$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re