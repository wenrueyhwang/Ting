	.file	"Pvolatile.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Initial value of local %d\n"
.LC1:
	.string	"Modified value of local %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB60:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$8, %esp
	pushl	$10
	pushl	$.LC0
	pushl	$1
	call	__printf_chk
	addl	$12, %esp
	pushl	$100
	pushl	$.LC1
	pushl	$1
	call	__printf_chk
	addl	$16, %esp
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE60:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.5) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
