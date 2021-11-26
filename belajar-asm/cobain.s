	.file	"cobain.c"
	.text
	.globl	hasil
	.type	hasil, @function
hasil:
.LFB0:
	.cfi_startproc
	endbr64
	movq	%rdx, %rax
	leaq	(%rsi,%rsi,4), %rdx
	leaq	(%rax,%rdx,2), %rdx
	imulq	%rax, %rsi
	leaq	(%rdx,%rsi), %rax
	ret
	.cfi_endproc
.LFE0:
	.size	hasil, .-hasil
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
