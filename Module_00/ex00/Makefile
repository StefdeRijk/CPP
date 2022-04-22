NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
COMPILE = $(CC) $(CFLAGS)

FILES =	megaphone.cpp

OBJS = $(FILES:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -c $<

all: $(NAME)

$(NAME): $(OBJS)
	@$(COMPILE) $(OBJS) -o $(NAME)
	@echo "Creating executable"

clean:
	@rm -rf $(OBJS)
	@echo "Removing object files"

fclean: clean
	@rm -f $(NAME)
	@echo "Removing executable file"

re: fclean | all

.PHONY: all clean fclean re