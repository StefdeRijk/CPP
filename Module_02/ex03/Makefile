NAME = BSP

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
COMPILE = $(CC) $(CFLAGS)

FILES =	main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp Fixed.hpp Point.hpp
	@$(COMPILE) -c $<

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean | all

.PHONY: all clean fclean re