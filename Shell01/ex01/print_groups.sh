# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print_groups.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oibis <oibis@student.42kocaeli.com.tr      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 20:14:11 by oibis             #+#    #+#              #
#    Updated: 2021/10/05 20:14:19 by oibis            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

id -G -n $FT_USER | tr ' ' ',' | tr -d '\n'
