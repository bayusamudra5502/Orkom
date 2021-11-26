.text
.globl ayam
.type ayam, @function

ayam:
  pushq %rbx
  movq %rdi, %rax
  addq $10, %rax
  movq %rax, %rbx
  leaq (%rbx, %rbx, 9), %rbx
  leaq 5(%rsi, %rbx), %rax
  popq %rbx
  ret

