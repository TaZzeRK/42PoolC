# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mskaroup <mskaroup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/22 23:01:31 by mskaroup          #+#    #+#              #
#    Updated: 2015/10/22 23:02:23 by mskaroup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

stat -t %s bomb.txt | cut -d ' ' -f 9 | tr -d '\"' > tmp
echo ' - 1' >> tmp
cat tmp | tr '\n' ' ' | sed "s/ //" | bc
