.globl kali
.type kali, @function

kali:
  movq %rdi, %rax # Dapetin parameter pertama simpen di variabel
  imulq %rsi # Kaliin parameter kedua terus simpen di variabel
  ret # return nilai %eax

.globl coba
.type coba, @function

coba:
  pushq %rdx
  movl %edx, %eax
  cltd
  movl %eax, (%rdi)
  movl %edx, (%rsi)
  pop %rdx
  ret
