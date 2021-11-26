.text
.globl test
.type test, @function

test:
  movq $0, %rax
  testl %edi, %edi
  setl %al
  ret

