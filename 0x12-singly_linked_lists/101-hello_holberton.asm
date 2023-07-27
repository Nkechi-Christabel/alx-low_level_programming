section .data
    hello db "Hello, Holberton", 0x0A, 0
    format db "%s", 0x0A, 0

section .text
    global main

extern printf
extern exit

main:
    ; Prepare the stack frame
    push rbp
    mov rbp, rsp

    ; Call printf function
    mov rdi, format
    mov rsi, hello
    call printf

    ; Clean up and exit
    xor edi, edi  ; Return code 0
    call exit

section .bss
    resb 8  ; Reserve 8 bytes for exit's return value
