bits 64

section .data
    message db 'Hello World !', 10

section .text
    global _start:
    _start
        mov rax, 1                  ; equivalent de l'appel systeme write
        mov rdi, 1                  ; declaration de l'argument, le 1 ici est le stdout
        mov rsi, message            ; autre argument
        mov rdx, 13 + 1             ; taille du 'message' soit 'Hello World !' + null byte
        syscall                     ; fait appel au noyau pour executer
        ; jusqu'ici, on a demande d'afficher le message

        mov rax, 60                 ; se positionner pour faire exit
        mov rdi, 0
        syscall
        ; jusque la, on a appele exit pour quitter le programme