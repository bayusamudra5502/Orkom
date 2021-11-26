	.file	"switch.c"
	.text
	.globl	cabang
	.type	cabang, @function
cabang:
.LFB0:
	.cfi_startproc
	endbr64
	cmpl	$40, %edi
	je	.L6
	cmpl	$40, %edi
	jg	.L3
	movl	$15, %eax
	cmpl	$10, %edi
	je	.L1
	cmpl	$20, %edi
	jne	.L5
	movl	$8, %eax
.L1:
	ret
.L3:
	cmpl	$50, %edi
	jne	.L5
.L2:
	leal	1(%rdi), %eax
	ret
.L6:
	movl	$13, %edi
	jmp	.L2
.L5:
	leal	10(%rdi), %eax
	ret
	.cfi_endproc
.LFE0:
	.size	cabang, .-cabang
	.ident	"GCC: (Ubuntu 10.3.0-1ubuntu1) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
