section .data
hello_msg db "Hello, Holberton", 10, 0  ; message to print followed by newline and null terminator

section .text
global main
extern printf

main:
; prepare arguments for printf call
push hello_msg  ; push message address onto stack

; call printf function
mov  rdi, format_msg  ; set format string address to rdi
xor  rax, rax         ; clear rax
call printf           ; call printf with message and format string addresses

; exit program
xor  eax, eax  ; return 0
ret

section .rodata
format_msg db "%s", 10, 0  ; format string with "%s" to print string argument followed by newline and null terminator

