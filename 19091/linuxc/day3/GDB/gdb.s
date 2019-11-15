	.file	"gdb.c"
	.section	.rodata
.LC0:
	.string	"world"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	movl	$3, 8(%esp)
	movl	$.LC0, 12(%esp)
	call	fun
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC1:
	.string	"malloc fail"
.LC2:
	.string	"hello"
	.text
	.globl	fun
	.type	fun, @function
fun:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$100, (%esp)
	call	malloc
	movl	%eax, -12(%ebp)
	cmpl	$0, -12(%ebp)
	jne	.L3
	movl	$.LC1, (%esp)
	call	puts
.L3:
	movl	$.LC2, %edx
	movl	-12(%ebp), %eax
	movl	(%edx), %ecx
	movl	%ecx, (%eax)
	movzwl	4(%edx), %edx
	movw	%dx, 4(%eax)
	movl	-12(%ebp), %eax
	movl	%eax, (%esp)
	call	puts
	movl	-12(%ebp), %eax
	movl	%eax, (%esp)
	call	free
	movl	$0, -12(%ebp)
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	fun, .-fun
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
