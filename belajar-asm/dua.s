	.file	"dua.c"
	.text
	.globl	kali
	.type	kali, @function
kali:
.LFB0:
	.cfi_startproc
	endbr64
	movl	%edi, %eax
	imull	%esi, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	kali, .-kali
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