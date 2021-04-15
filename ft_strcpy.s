# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 20:14:58 by tlemesle          #+#    #+#              #
#    Updated: 2021/04/15 22:25:43 by tlemesle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global ft_strcpy

ft_strcpy:
    xor rcx, rcx

loop:
    cmp byte [rsi + rcx], 0
    jz  return
    mov dl, [rsi + rcx]
    mov [rdi + rcx], dl
    inc rcx
    jmp loop

return:
    mov byte [rdi + rcx], 0
    mov rax, rdi
    ret

    