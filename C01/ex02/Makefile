NAME = Brain

SRC = 	./main.cpp

FLAGS = -Werror -Wall -Wextra -std=c++98

CC = c++ $(FLAGS)

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@printf "\n\e[36msuccessfully\e[0m_\e[33m compiled \e[92mis ready !\e[0m\e[?25h\n"

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@printf "\e[?25l\e[JCreated \e[92m$(notdir $@)\e[0m\r"

clean:
	@$(RM) -f $(OBJ)
	@printf "All object files [\033[31mX\033[0m]\n"

fclean: clean
	@$(RM) -f $(NAME)
	@printf "$(NAME) [\033[31mX\033[0m]\n"

re : fclean all

.PHONY: all re clean fclean 