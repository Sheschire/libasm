# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 22:10:29 by tlemesle          #+#    #+#              #
#    Updated: 2021/04/15 23:03:05 by tlemesle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	ft_write
extern	__errno_location

ft_write:
	mov		rax, 1
	syscall
	cmp		rax, 0
	jl		error
	ret

error:
	neg		rax
	mov		rdi, rax
	call	__errno_location
	mov		[rax], rdi
	mov		rax, -1
	ret
