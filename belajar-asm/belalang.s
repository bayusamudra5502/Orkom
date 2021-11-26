	.file	"belalang.c"
	.text
	.globl	mod
	.type	mod, @function
mod:
.LFB0:
	.cfi_startproc
	movl	4(%esp), %eax
	cltd
	idivl	8(%esp)
	movl	%edx, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	mod, .-mod
	.ident	"GCC: (GNU) 11.1.0"
	.section	.note.GNU-stack,"",@progbits
