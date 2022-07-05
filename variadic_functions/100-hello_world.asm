section .data
    msg db "Hello, World",10
    
section .text
global test
test:
	mov rax, 1
	mov rdi, 1 
   	mov rsi, msg
    mov rdx, 13
	syscall