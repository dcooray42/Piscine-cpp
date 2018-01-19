NAME = array

SRC_PATH = ./srcs/

OBJ_PATH = ./objs/

SRC_NAME = main.cpp

OBJ_NAME = $(SRC_NAME:.cpp=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

FLAGS = -Wall -Werror -Wextra

INCLUDES = -I ./includes

CC = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(INCLUDES) -o $(NAME) $^

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(FLAGS) $(INCLUDES) -o $@ -c $<

clean:
	/bin/rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
