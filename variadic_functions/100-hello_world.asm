section .data
    msg db "Hello, World",10
    len equ $ - msg

section .text
    global _start

_start:
    MOV rdi, 1 
    MOV rsi, msg
    MOV rdx, len
    MOV rax, 1 
    syscall