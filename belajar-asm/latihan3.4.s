dua:
  movsbl (%rdi), %eax
  movl %eax, (%rsi)

tiga:
  movl (%rdi), %eax
  movl %eax, (%rsi)

empat:
  movl (%rdi), %eax
  movq %rax, (%rsi)

lima:
  movb (%rdi), %al
  movb %al, (%rsi)

enam:
  movsbw (%rdi), %ax
  movw %ax, (%rsi) ; Halaman 217
