# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 20:25:31 by tlemesle          #+#    #+#              #
#    Updated: 2021/04/15 21:52:48 by tlemesle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global ft_strcmp

ft_strcmp:
	xor		rcx, rcx
	xor		rax, rax

loop:
	mov		al, BYTE[rdi + rcx]
	cmp		al, BYTE[rsi + rcx]
	ja		retinf
	jb		retsup
	cmp		BYTE[rdi + rcx], 0
	jz		return
	cmp		BYTE[rsi + rcx], 0
	jz		return
	inc		rcx
	jmp		loop

retinf:
	mov		rax, 1
	ret
retsup:
	mov		rax, -1

return:
	ret