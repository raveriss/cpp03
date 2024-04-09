# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 12:14:55 by raveriss          #+#    #+#              #
#    Updated: 2024/04/09 19:26:04 by raveriss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = ClapTrap.cpp DiamondTrap.cpp FragTrap.cpp main.cpp ScavTrap.cpp  
OBJS = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -O0

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
