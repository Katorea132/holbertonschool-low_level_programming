section .data
	txt db "Hello, Holberton",10

section .text
	extern printf
	global main

main:
	mov rdi, txt
	mov al,0
	call printf
	ret
