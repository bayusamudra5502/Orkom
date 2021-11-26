	.file	"latihan.323.c"
	.text
	.globl	dw_loop
	.type	dw_loop, @function
dw_loop:
.LFB0:
	.cfi_startproc
	endbr64
	movswl	%di, %edx
	imull	$7282, %edx, %edx
	shrl	$16, %edx
	movl	%edi, %eax
	sarw	$15, %ax
	subl	%eax, %edx
	leal	0(,%rdi,4), %ecx
	movl	%ecx, %eax
.L2:
	subl	$2, %eax
	testw	%ax, %ax
	jg	.L2
	subl	$1, %ecx
	movl	%ecx, %eax
	shrw	%ax
	testw	%cx, %cx
	movl	$0, %ecx
	cmovs	%ecx, %eax
	leal	5(%rdx), %ecx
	imull	%ecx, %eax
	addl	%edi, %edx
	leal	5(%rax,%rdx), %eax
	ret
	.cfi_endproc
.LFE0:
	.size	dw_loop, .-dw_loop
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
