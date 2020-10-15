
phase3_code.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <.text>:
   0:	48 8b 44 24 f0       	mov    -0x10(%rsp),%rax
   5:	48 89 84 24 78 ff ff 	mov    %rax,-0x88(%rsp)
   c:	ff 
   d:	48 8d bc 24 78 ff ff 	lea    -0x88(%rsp),%rdi
  14:	ff 
  15:	68 fa 18 40 00       	pushq  $0x4018fa
  1a:	c3                   	retq   
