# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bomber.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/22 19:22:28 by mskaroup          #+#    #+#              #
#    Updated: 2015/10/22 19:24:55 by mskaroup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

if [ $1 ]; then
	cat $1 | grep -i "Nicolas Bomber" | awk '{printf$(NF - 1)}' | grep -
	cat $1 | grep -i "Bomber Nicolas" | awk '{printf$(NF - 1)}' | grep -
fi
