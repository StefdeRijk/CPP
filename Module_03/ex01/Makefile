NAME = ScavTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
COMPILE = $(CC) $(CFLAGS)

FILES =	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp
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