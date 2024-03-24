section .data
    helloMessage db 'Hello, World', 10 ; 'Hello, World' with a newline character at the end
    len equ $ - helloMessage             ; Calculate the length of the helloMessage string

section .text
    global _start

_start:
    ; Write system call
    mov rax, 1              ; system call number for write
    mov rdi, 1              ; file descriptor 1 is stdout
    mov rsi, helloMessage  ; address of the string to output
    mov rdx, len            ; number of bytes to write
    syscall                ; invoke system call

    ; Exit system call
    mov rax, 60             ; system call number for exit
    xor rdi, rdi            ; status 0
    syscall                ; invoke system call
