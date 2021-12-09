.section .data
.type angkas, @object
.size angkas, 8*4

.type angkad. @object
.size angkad, 8*4
.align 4

angkas:
  .int 1,2,3,4,5,6,7,8

angkad:
  .int 5,6,7,8,9,10,11,12

.section .text
.align 8
.global ayam
.type ayam, @function

ayam:
  vmovdqu angkas(%rip), %ymm0
  vmovdqu angkad(%rip), %ymm1

  vaddps %ymm1, %ymm0, %ymm0
  
  # popq %rdi
  vmovdqu %ymm0, (%rdi)
  # movl %ebx, (%rdi)
  ret

.global vectorAdd
.type vectorAdd, @function

# void vectorAdd(int n, int* v1, int* v2, int* res)
vectorAdd:
  pushq %rbx
  movq $0, %rax

loop:
  cmpq %rax, %rdi
  jle end
  
  leaq -8(%rdi), %rbx
  cmpq %rbx, %rax
  jg quad

  vmovdqu (%rsi,%rax,4), %ymm0
  vmovdqu (%rdx,%rax,4), %ymm1
  vaddps %ymm1, %ymm0, %ymm0

  vmovdqu %ymm0, (%rcx,%rax,4)
  
  addq $8, %rax
  jmp loop

quad:
  leaq -4(%rdi), %rbx
  cmpq %rbx, %rax
  jg satusatu

  vmovdqu (%rsi,%rax,4), %xmm0
  vmovdqu (%rdx,%rax,4), %xmm1
  vaddps %ymm1, %ymm0, %ymm0

  vmovdqu %xmm0, (%rcx,%rax,4)
  
  addq $4, %rax
  jmp loop

satusatu:
  movl (%rsi, %rax, 4), %ebx
  addl (%rdx, %rax, 4), %ebx
  movl %ebx, (%rcx, %rax, 4)

  inc %rax
  jmp loop

end:
  popq %rbx
  ret
