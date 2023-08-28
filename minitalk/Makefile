SRCS	= client.c server.c
OBJS	= $(SRCS:.c=.o)
CC	= gcc
RM	= rm -rf
CFLAGS	= -Wall -Wextra -Werror

NAME	= client
NAMESV	= server

all:	$(NAME) $(NAMESV)

$(NAME):	client.o
$(NAMESV):	server.o

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME) $(NAMESV)

re:	fclean $(NAME) $(NAMESV)

.PHONY:	all clean fclean re