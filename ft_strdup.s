# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 23:36:13 by tlemesle          #+#    #+#              #
#    Updated: 2021/04/18 15:06:14 by tlemesle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global ft_strdup
extern ft_strlen
extern malloc
extern ft_strcpy
extern	__errno_location

ft_strdup:
	push		rdi
	call		ft_strlen
	inc			rax
	mov			rdi, rax
	call		malloc
	cmp			rax, 0
	jz			error
	pop			rsi
	mov			rdi, rax
	call		ft_strcpy
	ret

error:
	neg		rax
	mov		rdi, rax
	call	__errno_location
	mov		[rax], rdi
	mov		rax, -1
	ret