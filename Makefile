# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alexandrelecoutre <alexandrelecoutre@st    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/19 14:28:13 by alecoutr          #+#    #+#              #
#    Updated: 2023/02/27 12:23:23 by alexandrele      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 GCC			= gcc -Wall -Wextra -Werror

 all: server client

 server: server.o
 	$(GCC) -o server server.o ft_printf/*.c

 client: client.o
 	$(GCC) -o client client.o ft_printf/*.c

 clean:
 			rm -rf server.o client.o
 			make clean -C ft_printf/

 fclean:	clean
 			rm -rf server client
 			make fclean -C ft_printf/

 re:				fclean all

 .PHONY:         all clean fclean re