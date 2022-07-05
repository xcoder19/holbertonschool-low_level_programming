section .data
    msg db "Hello, World",10
    
section .text
global hi
hi:
	mov rax, 1
	mov rdi, 1 
   	mov rsi, msg
    mov rdx, 13
	syscall