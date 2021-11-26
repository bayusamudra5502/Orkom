.globl haha
.type haha, @function

haha:
  movb (%rdi), %al
  movb %al, (%rsi)
  ret
