
CC = gcc -Wall -Wextra -Werror 
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
TARGET = libft.a

all:
		$(CC) -c $(SRC)
		ar rc $(TARGET) $(OBJECT) 
		ranlib $(TARGET)

re: fclean all


clean:
		rm -rf *.o

fclean:
		rm -rf *.o $(TARGET)