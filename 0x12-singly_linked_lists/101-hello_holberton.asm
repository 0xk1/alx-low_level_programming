section .data
	msg db "Hello, Holberton",10
	section .text
	global main
main:
	mov rax,1
	mov rdi, msg
	mov rdx, 17
	syscall
