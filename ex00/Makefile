# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrherna <adrherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/02 11:07:19 by adrherna          #+#    #+#              #
#    Updated: 2025/01/04 09:59:31 by adrherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX = g++

CXXFLAGS = -Werror -Wall -Wextra -std=c++11

TARGET = main

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean $(TARGET)

.PHONY: clean fclean re%