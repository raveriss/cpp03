# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 12:14:55 by raveriss          #+#    #+#              #
#    Updated: 2024/04/08 19:33:21 by raveriss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OBJS = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -O0

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
