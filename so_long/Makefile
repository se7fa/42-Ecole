CC = gcc

NAME = so_long


CFLAGS = -Werror -Wall -Wextra


GNL = $(wildcard gnl/*c)
GNLOBJS = $(GNL:.c=.o)

SRC = 	$(wildcard *c)

OBJS := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(GNLOBJS)
	make -C mlx
	$(CC) $(OBJS) $(GNLOBJS) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -f $(OBJS) $(NAME)
	rm -rf ./gnl/*.o

re: fclean $(NAME)