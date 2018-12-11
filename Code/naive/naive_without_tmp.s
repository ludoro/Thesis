	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$112, %rsp
	leaq	L_.str(%rip), %rax
	leaq	L_.str.1(%rip), %rcx
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$1000, -20(%rbp)        ## imm = 0x3E8
	movq	%rax, %rdi
	movq	%rcx, %rsi
	callq	_fopen
	leaq	L_.str.2(%rip), %rdi
	leaq	L_.str.1(%rip), %rsi
	movq	%rax, -32(%rbp)
	callq	_fopen
	movq	%rax, -40(%rbp)
	movslq	-20(%rbp), %rax
	shlq	$3, %rax
	movq	%rax, %rdi
	callq	_malloc
	movq	%rax, -48(%rbp)
	movl	$0, -52(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-52(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_4
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movslq	-20(%rbp), %rax
	shlq	$3, %rax
	movq	%rax, %rdi
	callq	_malloc
	movq	-48(%rbp), %rdi
	movslq	-52(%rbp), %rcx
	movq	%rax, (%rdi,%rcx,8)
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	-52(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -52(%rbp)
	jmp	LBB0_1
LBB0_4:
	movslq	-20(%rbp), %rax
	shlq	$3, %rax
	movq	%rax, %rdi
	callq	_malloc
	movq	%rax, -64(%rbp)
	movslq	-20(%rbp), %rax
	shlq	$3, %rax
	movq	%rax, %rdi
	callq	_malloc
	movq	%rax, -72(%rbp)
	movl	$0, -76(%rbp)
LBB0_5:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_7 Depth 2
	movl	-76(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_12
## %bb.6:                               ##   in Loop: Header=BB0_5 Depth=1
	leaq	L_.str.3(%rip), %rsi
	movq	-40(%rbp), %rdi
	movq	-64(%rbp), %rax
	movslq	-76(%rbp), %rcx
	shlq	$3, %rcx
	addq	%rcx, %rax
	movq	%rax, %rdx
	movb	$0, %al
	callq	_fscanf
	movl	$0, -80(%rbp)
	movl	%eax, -96(%rbp)         ## 4-byte Spill
LBB0_7:                                 ##   Parent Loop BB0_5 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	-80(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_10
## %bb.8:                               ##   in Loop: Header=BB0_7 Depth=2
	leaq	L_.str.3(%rip), %rsi
	movq	-32(%rbp), %rdi
	movq	-48(%rbp), %rax
	movslq	-76(%rbp), %rcx
	movq	(%rax,%rcx,8), %rax
	movslq	-80(%rbp), %rcx
	shlq	$3, %rcx
	addq	%rcx, %rax
	movq	%rax, %rdx
	movb	$0, %al
	callq	_fscanf
	movl	%eax, -100(%rbp)        ## 4-byte Spill
## %bb.9:                               ##   in Loop: Header=BB0_7 Depth=2
	movl	-80(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -80(%rbp)
	jmp	LBB0_7
LBB0_10:                                ##   in Loop: Header=BB0_5 Depth=1
	jmp	LBB0_11
LBB0_11:                                ##   in Loop: Header=BB0_5 Depth=1
	movl	-76(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -76(%rbp)
	jmp	LBB0_5
LBB0_12:
	movq	-32(%rbp), %rdi
	callq	_fclose
	movq	-40(%rbp), %rdi
	movl	%eax, -104(%rbp)        ## 4-byte Spill
	callq	_fclose
	movl	$0, -84(%rbp)
	movl	%eax, -108(%rbp)        ## 4-byte Spill
LBB0_13:                                ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_15 Depth 2
	movl	-84(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_20
## %bb.14:                              ##   in Loop: Header=BB0_13 Depth=1
	xorps	%xmm0, %xmm0
	movq	-72(%rbp), %rax
	movslq	-84(%rbp), %rcx
	movsd	%xmm0, (%rax,%rcx,8)
	movl	$0, -88(%rbp)
LBB0_15:                                ##   Parent Loop BB0_13 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	-88(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_18
## %bb.16:                              ##   in Loop: Header=BB0_15 Depth=2
	movq	-48(%rbp), %rax
	movslq	-84(%rbp), %rcx
	movq	(%rax,%rcx,8), %rax
	movslq	-88(%rbp), %rcx
	movsd	(%rax,%rcx,8), %xmm0    ## xmm0 = mem[0],zero
	movq	-64(%rbp), %rax
	movslq	-88(%rbp), %rcx
	mulsd	(%rax,%rcx,8), %xmm0
	movq	-72(%rbp), %rax
	movslq	-84(%rbp), %rcx
	addsd	(%rax,%rcx,8), %xmm0
	movsd	%xmm0, (%rax,%rcx,8)
## %bb.17:                              ##   in Loop: Header=BB0_15 Depth=2
	movl	-88(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -88(%rbp)
	jmp	LBB0_15
LBB0_18:                                ##   in Loop: Header=BB0_13 Depth=1
	jmp	LBB0_19
LBB0_19:                                ##   in Loop: Header=BB0_13 Depth=1
	movl	-84(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -84(%rbp)
	jmp	LBB0_13
LBB0_20:
	movl	$0, -92(%rbp)
LBB0_21:                                ## =>This Inner Loop Header: Depth=1
	movl	-92(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	LBB0_24
## %bb.22:                              ##   in Loop: Header=BB0_21 Depth=1
	movq	-48(%rbp), %rax
	movslq	-92(%rbp), %rcx
	movq	(%rax,%rcx,8), %rax
	movq	%rax, %rdi
	callq	_free
## %bb.23:                              ##   in Loop: Header=BB0_21 Depth=1
	movl	-92(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -92(%rbp)
	jmp	LBB0_21
LBB0_24:
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	callq	_free
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	callq	_free
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	callq	_free
	xorl	%eax, %eax
	addq	$112, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"matrix_from_matlab.txt"

L_.str.1:                               ## @.str.1
	.asciz	"r"

L_.str.2:                               ## @.str.2
	.asciz	"vector_from_matlab.txt"

L_.str.3:                               ## @.str.3
	.asciz	"%lf"


.subsections_via_symbols
