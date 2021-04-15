# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_read.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 23:07:31 by tlemesle          #+#    #+#              #
#    Updated: 2021/04/15 23:12:50 by tlemesle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global	ft_read
extern	__errno_location

ft_read:
	mov		rax, 0
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
