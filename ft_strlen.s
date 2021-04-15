# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 19:58:29 by tlemesle          #+#    #+#              #
#    Updated: 2021/04/15 22:24:04 by tlemesle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global ft_strlen

ft_strlen:
    xor rax, rax

loop:
    cmp byte [rdi + rax], 0
    jz  return
    inc rax
    jmp loop

return:
    ret