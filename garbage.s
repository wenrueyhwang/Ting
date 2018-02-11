	.file	"garbage.c"
	.section	.rodata
.LC0:
	.string	"%d/%d=%f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ebx
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	subl	$32, %esp
	movl	%ecx, %ebx
	movl	4(%ebx), %eax
	addl	$4, %eax
	movl	(%eax), %eax
	subl	$12, %esp
	pushl	%eax
	call	atoi
	addl	$16, %esp
	movl	%eax, -20(%ebp)
	movl	4(%ebx), %eax
	addl	$8, %eax
	movl	(%eax), %eax
	subl	$12, %esp
	pushl	%eax
	call	atoi
	addl	$16, %esp
	movl	%eax, -16(%ebp)
	movl	-20(%ebp), %eax
	cltd
	idivl	-16(%ebp)
	movl	%eax, -32(%ebp)
	fildl	-32(%ebp)
	fstps	-28(%ebp)
	flds	-28(%ebp)
	fstps	-12(%ebp)
	flds	-12(%ebp)
	subl	$12, %esp
	leal	-8(%esp), %esp
	fstpl	(%esp)
	pushl	-16(%ebp)
	pushl	-20(%ebp)
	pushl	$.LC0
	call	printf
	addl	$32, %esp
	nop
	leal	-8(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.5) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
