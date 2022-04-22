NAME = DiamondTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
COMPILE = $(CC) $(CFLAGS)

FILES =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
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