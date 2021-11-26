.text
.globl halo
.type halo, @function

halo:
  movl %edi, %eax
  testl %eax, %eax
  cmove (%rsi), %al
  ret

