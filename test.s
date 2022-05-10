	.file	"test.cpp"
	.text
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
	.section	.text$_ZStanSt13_Ios_FmtflagsS_,"x"
	.linkonce discard
	.globl	__ZStanSt13_Ios_FmtflagsS_
	.def	__ZStanSt13_Ios_FmtflagsS_;	.scl	2;	.type	32;	.endef
__ZStanSt13_Ios_FmtflagsS_:
LFB1385:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	andl	12(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1385:
	.section	.text$_ZStorSt13_Ios_FmtflagsS_,"x"
	.linkonce discard
	.globl	__ZStorSt13_Ios_FmtflagsS_
	.def	__ZStorSt13_Ios_FmtflagsS_;	.scl	2;	.type	32;	.endef
__ZStorSt13_Ios_FmtflagsS_:
LFB1386:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	orl	12(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1386:
	.section	.text$_ZStcoSt13_Ios_Fmtflags,"x"
	.linkonce discard
	.globl	__ZStcoSt13_Ios_Fmtflags
	.def	__ZStcoSt13_Ios_Fmtflags;	.scl	2;	.type	32;	.endef
__ZStcoSt13_Ios_Fmtflags:
LFB1388:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	notl	%eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1388:
	.section	.text$_ZStoRRSt13_Ios_FmtflagsS_,"x"
	.linkonce discard
	.globl	__ZStoRRSt13_Ios_FmtflagsS_
	.def	__ZStoRRSt13_Ios_FmtflagsS_;	.scl	2;	.type	32;	.endef
__ZStoRRSt13_Ios_FmtflagsS_:
LFB1389:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStorSt13_Ios_FmtflagsS_
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1389:
	.section	.text$_ZStaNRSt13_Ios_FmtflagsS_,"x"
	.linkonce discard
	.globl	__ZStaNRSt13_Ios_FmtflagsS_
	.def	__ZStaNRSt13_Ios_FmtflagsS_;	.scl	2;	.type	32;	.endef
__ZStaNRSt13_Ios_FmtflagsS_:
LFB1390:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStanSt13_Ios_FmtflagsS_
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1390:
	.section	.text$_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	.def	__ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_;	.scl	2;	.type	32;	.endef
__ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_:
LFB1419:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	12(%eax), %eax
	movl	%eax, -12(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZStcoSt13_Ios_Fmtflags
	movl	%eax, %edx
	movl	-28(%ebp), %eax
	addl	$12, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStaNRSt13_Ios_FmtflagsS_
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZStanSt13_Ios_FmtflagsS_
	movl	%eax, %edx
	movl	-28(%ebp), %eax
	addl	$12, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStoRRSt13_Ios_FmtflagsS_
	movl	-12(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE1419:
	.section	.text$_ZSt5fixedRSt8ios_base,"x"
	.linkonce discard
	.globl	__ZSt5fixedRSt8ios_base
	.def	__ZSt5fixedRSt8ios_base;	.scl	2;	.type	32;	.endef
__ZSt5fixedRSt8ios_base:
LFB1449:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$260, 4(%esp)
	movl	$4, (%esp)
	movl	8(%ebp), %ecx
	call	__ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	subl	$8, %esp
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1449:
	.section .rdata,"dr"
__ZStL13allocator_arg:
	.space 1
__ZStL6ignore:
	.space 1
	.section	.text$_ZSt12setprecisioni,"x"
	.linkonce discard
	.globl	__ZSt12setprecisioni
	.def	__ZSt12setprecisioni;	.scl	2;	.type	32;	.endef
__ZSt12setprecisioni:
LFB3594:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE3594:
.lcomm __ZStL8__ioinit,1,1
	.section .rdata,"dr"
	.align 4
__ZN9__gnu_cxxL21__default_lock_policyE:
	.long	2
__ZStL10defer_lock:
	.space 1
__ZStL11try_to_lock:
	.space 1
__ZStL10adopt_lock:
	.space 1
	.align 4
__ZNSt15regex_constantsL5icaseE:
	.long	1
	.align 4
__ZNSt15regex_constantsL6nosubsE:
	.long	2
	.align 4
__ZNSt15regex_constantsL8optimizeE:
	.long	4
	.align 4
__ZNSt15regex_constantsL7collateE:
	.long	8
	.align 4
__ZNSt15regex_constantsL10ECMAScriptE:
	.long	16
	.align 4
__ZNSt15regex_constantsL5basicE:
	.long	32
	.align 4
__ZNSt15regex_constantsL8extendedE:
	.long	64
	.align 4
__ZNSt15regex_constantsL3awkE:
	.long	128
	.align 4
__ZNSt15regex_constantsL4grepE:
	.long	256
	.align 4
__ZNSt15regex_constantsL5egrepE:
	.long	512
	.align 4
__ZNSt15regex_constantsL12__polynomialE:
	.long	1024
	.align 4
__ZNSt15regex_constantsL13match_defaultE:
	.space 4
	.align 4
__ZNSt15regex_constantsL13match_not_bolE:
	.long	1
	.align 4
__ZNSt15regex_constantsL13match_not_eolE:
	.long	2
	.align 4
__ZNSt15regex_constantsL13match_not_bowE:
	.long	4
	.align 4
__ZNSt15regex_constantsL13match_not_eowE:
	.long	8
	.align 4
__ZNSt15regex_constantsL9match_anyE:
	.long	16
	.align 4
__ZNSt15regex_constantsL14match_not_nullE:
	.long	32
	.align 4
__ZNSt15regex_constantsL16match_continuousE:
	.long	64
	.align 4
__ZNSt15regex_constantsL16match_prev_availE:
	.long	128
	.align 4
__ZNSt15regex_constantsL14format_defaultE:
	.space 4
	.align 4
__ZNSt15regex_constantsL10format_sedE:
	.long	256
	.align 4
__ZNSt15regex_constantsL14format_no_copyE:
	.long	512
	.align 4
__ZNSt15regex_constantsL17format_first_onlyE:
	.long	1024
	.align 4
__ZNSt15regex_constantsL13error_collateE:
	.space 4
	.align 4
__ZNSt15regex_constantsL11error_ctypeE:
	.long	1
	.align 4
__ZNSt15regex_constantsL12error_escapeE:
	.long	2
	.align 4
__ZNSt15regex_constantsL13error_backrefE:
	.long	3
	.align 4
__ZNSt15regex_constantsL11error_brackE:
	.long	4
	.align 4
__ZNSt15regex_constantsL11error_parenE:
	.long	5
	.align 4
__ZNSt15regex_constantsL11error_braceE:
	.long	6
	.align 4
__ZNSt15regex_constantsL14error_badbraceE:
	.long	7
	.align 4
__ZNSt15regex_constantsL11error_rangeE:
	.long	8
	.align 4
__ZNSt15regex_constantsL11error_spaceE:
	.long	9
	.align 4
__ZNSt15regex_constantsL15error_badrepeatE:
	.long	10
	.align 4
__ZNSt15regex_constantsL16error_complexityE:
	.long	11
	.align 4
__ZNSt15regex_constantsL11error_stackE:
	.long	12
	.align 4
__ZNSt8__detailL19_S_invalid_state_idE:
	.long	-1
	.globl	_n
	.bss
	.align 8
_n:
	.space 8
	.globl	_k
	.align 8
_k:
	.space 8
	.globl	_z
	.align 8
_z:
	.space 8
	.globl	_dp
	.align 32
_dp:
	.space 4800096
	.text
	.globl	__Z2okRSt6vectorIxSaIxEEiii
	.def	__Z2okRSt6vectorIxSaIxEEiii;	.scl	2;	.type	32;	.endef
__Z2okRSt6vectorIxSaIxEEiii:
LFB8215:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%esi
	pushl	%ebx
	subl	$64, %esp
	.cfi_offset 6, -12
	.cfi_offset 3, -16
	cmpl	$0, 16(%ebp)
	je	L18
	movl	12(%ebp), %eax
	movl	%eax, %ebx
	movl	%eax, %esi
	sarl	$31, %esi
	movl	_n, %eax
	movl	_n+4, %edx
	cmpl	%eax, %ebx
	sbbl	%edx, %esi
	jge	L18
	cmpl	$0, 12(%ebp)
	jns	L19
L18:
	movl	$0, %eax
	movl	$0, %edx
	jmp	L24
L19:
	movl	12(%ebp), %ebx
	movl	%ebx, %eax
	addl	%eax, %eax
	addl	%ebx, %eax
	addl	%eax, %eax
	movl	20(%ebp), %ebx
	addl	%ebx, %eax
	movl	_dp(,%eax,8), %ebx
	movl	_dp+4(,%eax,8), %esi
	movl	%ebx, %eax
	xorl	$-1, %eax
	movl	%eax, -48(%ebp)
	movl	%esi, %eax
	xorl	$-1, %eax
	movl	%eax, -44(%ebp)
	movl	-44(%ebp), %eax
	orl	-48(%ebp), %eax
	testl	%eax, %eax
	je	L21
	movl	12(%ebp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	20(%ebp), %edx
	addl	%edx, %eax
	movl	_dp+4(,%eax,8), %edx
	movl	_dp(,%eax,8), %eax
	jmp	L24
L21:
	movl	$0, -32(%ebp)
	movl	$0, -28(%ebp)
	movl	12(%ebp), %eax
	cltd
	movl	_n, %ecx
	movl	_n+4, %ebx
	cmpl	%ecx, %eax
	movl	%edx, %eax
	sbbl	%ebx, %eax
	jge	L22
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZNSt6vectorIxSaIxEEixEj
	subl	$4, %esp
	movl	(%eax), %ebx
	movl	4(%eax), %esi
	movl	16(%ebp), %eax
	leal	-1(%eax), %ecx
	movl	12(%ebp), %eax
	leal	1(%eax), %edx
	movl	20(%ebp), %eax
	movl	%eax, 12(%esp)
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__Z2okRSt6vectorIxSaIxEEiii
	addl	%ebx, %eax
	adcl	%esi, %edx
	movl	%eax, -24(%ebp)
	movl	%edx, -20(%ebp)
	leal	-24(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-32(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt3maxIxERKT_S2_S2_
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
L22:
	cmpl	$0, 12(%ebp)
	js	L23
	cmpl	$0, 20(%ebp)
	jle	L23
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZNSt6vectorIxSaIxEEixEj
	subl	$4, %esp
	movl	(%eax), %ebx
	movl	4(%eax), %esi
	movl	20(%ebp), %eax
	leal	-1(%eax), %ecx
	movl	16(%ebp), %eax
	leal	-1(%eax), %edx
	movl	12(%ebp), %eax
	subl	$1, %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__Z2okRSt6vectorIxSaIxEEiii
	addl	%ebx, %eax
	adcl	%esi, %edx
	movl	%eax, -16(%ebp)
	movl	%edx, -12(%ebp)
	leal	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-32(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt3maxIxERKT_S2_S2_
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, -32(%ebp)
	movl	%edx, -28(%ebp)
L23:
	movl	-32(%ebp), %edx
	movl	-28(%ebp), %ecx
	movl	12(%ebp), %ebx
	movl	%ebx, %eax
	addl	%eax, %eax
	addl	%ebx, %eax
	addl	%eax, %eax
	movl	20(%ebp), %ebx
	addl	%ebx, %eax
	movl	%edx, _dp(,%eax,8)
	movl	%ecx, _dp+4(,%eax,8)
	movl	12(%ebp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	20(%ebp), %edx
	addl	%edx, %eax
	movl	_dp+4(,%eax,8), %edx
	movl	_dp(,%eax,8), %eax
L24:
	leal	-8(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8215:
	.section .rdata,"dr"
LC0:
	.ascii "\12\0"
	.text
	.globl	__Z5solvev
	.def	__Z5solvev;	.scl	2;	.type	32;	.endef
__Z5solvev:
LFB8216:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA8216
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%esi
	pushl	%ebx
	subl	$48, %esp
	.cfi_offset 6, -12
	.cfi_offset 3, -16
	movl	$_n, (%esp)
	movl	$__ZSt3cin, %ecx
LEHB0:
	call	__ZNSirsERx
	subl	$4, %esp
	movl	$_k, (%esp)
	movl	%eax, %ecx
	call	__ZNSirsERx
	subl	$4, %esp
	movl	$_z, (%esp)
	movl	%eax, %ecx
	call	__ZNSirsERx
LEHE0:
	subl	$4, %esp
	leal	-25(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIxEC1Ev
	movl	_n, %eax
	movl	_n+4, %edx
	movl	%eax, %ecx
	leal	-40(%ebp), %eax
	leal	-25(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%ecx, (%esp)
	movl	%eax, %ecx
LEHB1:
	call	__ZNSt6vectorIxSaIxEEC1EjRKS0_
LEHE1:
	subl	$8, %esp
	leal	-25(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIxED1Ev
	movl	$0, -12(%ebp)
L27:
	movl	-12(%ebp), %eax
	cltd
	movl	_n, %ecx
	movl	_n+4, %ebx
	cmpl	%ecx, %eax
	movl	%edx, %eax
	sbbl	%ebx, %eax
	jge	L26
	movl	-12(%ebp), %edx
	leal	-40(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIxSaIxEEixEj
	subl	$4, %esp
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
LEHB2:
	call	__ZNSirsERx
	subl	$4, %esp
	addl	$1, -12(%ebp)
	jmp	L27
L26:
	movl	$4800096, 8(%esp)
	movl	$-1, 4(%esp)
	movl	$_dp, (%esp)
	call	_memset
	movl	_z, %eax
	movl	_z+4, %edx
	movl	%eax, %ecx
	movl	_k, %eax
	movl	_k+4, %edx
	movl	%ecx, 12(%esp)
	movl	%eax, 8(%esp)
	movl	$1, 4(%esp)
	leal	-40(%ebp), %eax
	movl	%eax, (%esp)
	call	__Z2okRSt6vectorIxSaIxEEiii
	movl	%eax, %ebx
	movl	%edx, %esi
	leal	-40(%ebp), %eax
	movl	$0, (%esp)
	movl	%eax, %ecx
	call	__ZNSt6vectorIxSaIxEEixEj
	subl	$4, %esp
	movl	4(%eax), %edx
	movl	(%eax), %eax
	addl	%ebx, %eax
	adcl	%esi, %edx
	movl	%eax, -24(%ebp)
	movl	%edx, -20(%ebp)
	movl	-24(%ebp), %eax
	movl	-20(%ebp), %edx
	movl	%eax, (%esp)
	movl	%edx, 4(%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEx
	subl	$8, %esp
	movl	$LC0, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
LEHE2:
	leal	-40(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt6vectorIxSaIxEED1Ev
	jmp	L32
L30:
	movl	%eax, %ebx
	leal	-25(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIxED1Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB3:
	call	__Unwind_Resume
L31:
	movl	%eax, %ebx
	leal	-40(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt6vectorIxSaIxEED1Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
	call	__Unwind_Resume
LEHE3:
L32:
	leal	-8(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8216:
	.def	___gxx_personality_v0;	.scl	2;	.type	32;	.endef
	.section	.gcc_except_table,"w"
LLSDA8216:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE8216-LLSDACSB8216
LLSDACSB8216:
	.uleb128 LEHB0-LFB8216
	.uleb128 LEHE0-LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 LEHB1-LFB8216
	.uleb128 LEHE1-LEHB1
	.uleb128 L30-LFB8216
	.uleb128 0
	.uleb128 LEHB2-LFB8216
	.uleb128 LEHE2-LEHB2
	.uleb128 L31-LFB8216
	.uleb128 0
	.uleb128 LEHB3-LFB8216
	.uleb128 LEHE3-LEHB3
	.uleb128 0
	.uleb128 0
LLSDACSE8216:
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB8217:
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
	subl	$36, %esp
	call	___main
	movl	$0, (%esp)
	call	__ZNSt8ios_base15sync_with_stdioEb
	movl	$0, (%esp)
	movl	$__ZSt3cin+8, %ecx
	call	__ZNSt9basic_iosIcSt11char_traitsIcEE3tieEPSo
	subl	$4, %esp
	movl	$0, (%esp)
	movl	$__ZSt4cout+4, %ecx
	call	__ZNSt9basic_iosIcSt11char_traitsIcEE3tieEPSo
	subl	$4, %esp
	movl	$__ZSt5fixedRSt8ios_base, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEPFRSt8ios_baseS0_E
	subl	$4, %esp
	movl	$10, (%esp)
	call	__ZSt12setprecisioni
	movl	%eax, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
	movl	$1, -16(%ebp)
	leal	-16(%ebp), %eax
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
	call	__ZNSirsERi
	subl	$4, %esp
	movl	$1, -12(%ebp)
L35:
	movl	-16(%ebp), %eax
	cmpl	%eax, -12(%ebp)
	jg	L34
	call	__Z5solvev
	addl	$1, -12(%ebp)
	jmp	L35
L34:
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8217:
	.section	.text$_ZNSt6vectorIxSaIxEEixEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIxSaIxEEixEj
	.def	__ZNSt6vectorIxSaIxEEixEj;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIxSaIxEEixEj:
LFB8770:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	(%eax), %eax
	movl	8(%ebp), %edx
	sall	$3, %edx
	addl	%edx, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE8770:
	.section	.text$_ZSt3maxIxERKT_S2_S2_,"x"
	.linkonce discard
	.globl	__ZSt3maxIxERKT_S2_S2_
	.def	__ZSt3maxIxERKT_S2_S2_;	.scl	2;	.type	32;	.endef
__ZSt3maxIxERKT_S2_S2_:
LFB8771:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	.cfi_offset 3, -12
	movl	8(%ebp), %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	12(%ebp), %ecx
	movl	4(%ecx), %ebx
	movl	(%ecx), %ecx
	cmpl	%ecx, %eax
	movl	%edx, %eax
	sbbl	%ebx, %eax
	jge	L40
	movl	12(%ebp), %eax
	jmp	L41
L40:
	movl	8(%ebp), %eax
L41:
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8771:
	.section	.text$_ZNSaIxEC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIxEC1Ev
	.def	__ZNSaIxEC1Ev;	.scl	2;	.type	32;	.endef
__ZNSaIxEC1Ev:
LFB8775:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxEC2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8775:
	.section	.text$_ZNSaIxED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIxED2Ev
	.def	__ZNSaIxED2Ev;	.scl	2;	.type	32;	.endef
__ZNSaIxED2Ev:
LFB8777:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8777:
	.section	.text$_ZNSaIxED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIxED1Ev
	.def	__ZNSaIxED1Ev;	.scl	2;	.type	32;	.endef
__ZNSaIxED1Ev:
LFB8778:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8778:
	.section	.text$_ZNSt6vectorIxSaIxEEC1EjRKS0_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIxSaIxEEC1EjRKS0_
	.def	__ZNSt6vectorIxSaIxEEC1EjRKS0_;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIxSaIxEEC1EjRKS0_:
LFB8781:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA8781
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
LEHB4:
	call	__ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_
LEHE4:
	subl	$8, %esp
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
LEHB5:
	call	__ZNSt6vectorIxSaIxEE21_M_default_initializeEj
LEHE5:
	subl	$4, %esp
	jmp	L48
L47:
	movl	%eax, %ebx
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEED2Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB6:
	call	__Unwind_Resume
LEHE6:
L48:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE8781:
	.section	.gcc_except_table,"w"
LLSDA8781:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE8781-LLSDACSB8781
LLSDACSB8781:
	.uleb128 LEHB4-LFB8781
	.uleb128 LEHE4-LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 LEHB5-LFB8781
	.uleb128 LEHE5-LEHB5
	.uleb128 L47-LFB8781
	.uleb128 0
	.uleb128 LEHB6-LFB8781
	.uleb128 LEHE6-LEHB6
	.uleb128 0
	.uleb128 0
LLSDACSE8781:
	.section	.text$_ZNSt6vectorIxSaIxEEC1EjRKS0_,"x"
	.linkonce discard
	.section	.text$_ZNSt6vectorIxSaIxEED1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIxSaIxEED1Ev
	.def	__ZNSt6vectorIxSaIxEED1Ev;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIxSaIxEED1Ev:
LFB8784:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA8784
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	movl	%eax, %ecx
	movl	-12(%ebp), %eax
	movl	4(%eax), %edx
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZSt8_DestroyIPxxEvT_S1_RSaIT0_E
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE8784:
	.section	.gcc_except_table,"w"
LLSDA8784:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE8784-LLSDACSB8784
LLSDACSB8784:
LLSDACSE8784:
	.section	.text$_ZNSt6vectorIxSaIxEED1Ev,"x"
	.linkonce discard
	.section	.text$_ZN9__gnu_cxx13new_allocatorIxEC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIxEC2Ev
	.def	__ZN9__gnu_cxx13new_allocatorIxEC2Ev;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIxEC2Ev:
LFB9073:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9073:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIxED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIxED2Ev
	.def	__ZN9__gnu_cxx13new_allocatorIxED2Ev;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIxED2Ev:
LFB9076:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9076:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
	.def	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev:
LFB9081:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSaIxED2Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9081:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_
	.def	__ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_:
LFB9082:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA9082
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
LEHB7:
	call	__ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj
LEHE7:
	subl	$4, %esp
	jmp	L56
L55:
	movl	%eax, %ebx
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB8:
	call	__Unwind_Resume
LEHE8:
L56:
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE9082:
	.section	.gcc_except_table,"w"
LLSDA9082:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE9082-LLSDACSB9082
LLSDACSB9082:
	.uleb128 LEHB7-LFB9082
	.uleb128 LEHE7-LEHB7
	.uleb128 L55-LFB9082
	.uleb128 0
	.uleb128 LEHB8-LFB9082
	.uleb128 LEHE8-LEHB8
	.uleb128 0
	.uleb128 0
LLSDACSE9082:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEEC2EjRKS0_,"x"
	.linkonce discard
	.section	.text$_ZNSt12_Vector_baseIxSaIxEED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEED2Ev
	.def	__ZNSt12_Vector_baseIxSaIxEED2Ev;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEED2Ev:
LFB9085:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA9085
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%eax), %edx
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sarl	$3, %eax
	movl	%eax, %ecx
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%ecx, 4(%esp)
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj
	subl	$8, %esp
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implD1Ev
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9085:
	.section	.gcc_except_table,"w"
LLSDA9085:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE9085-LLSDACSB9085
LLSDACSB9085:
LLSDACSE9085:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEED2Ev,"x"
	.linkonce discard
	.section	.text$_ZNSt6vectorIxSaIxEE21_M_default_initializeEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt6vectorIxSaIxEE21_M_default_initializeEj
	.def	__ZNSt6vectorIxSaIxEE21_M_default_initializeEj;	.scl	2;	.type	32;	.endef
__ZNSt6vectorIxSaIxEE21_M_default_initializeEj:
LFB9087:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	movl	%edx, 8(%esp)
	movl	8(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZSt27__uninitialized_default_n_aIPxjxET_S1_T0_RSaIT1_E
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%edx, 4(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE9087:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv
	.def	__ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE19_M_get_Tp_allocatorEv:
LFB9088:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9088:
	.section	.text$_ZSt8_DestroyIPxxEvT_S1_RSaIT0_E,"x"
	.linkonce discard
	.globl	__ZSt8_DestroyIPxxEvT_S1_RSaIT0_E
	.def	__ZSt8_DestroyIPxxEvT_S1_RSaIT0_E;	.scl	2;	.type	32;	.endef
__ZSt8_DestroyIPxxEvT_S1_RSaIT0_E:
LFB9089:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt8_DestroyIPxEvT_S1_
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9089:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_
	.def	__ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE12_Vector_implC1ERKS0_:
LFB9235:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSaIxEC2ERKS_
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	$0, (%eax)
	movl	-12(%ebp), %eax
	movl	$0, 4(%eax)
	movl	-12(%ebp), %eax
	movl	$0, 8(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE9235:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj
	.def	__ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE17_M_create_storageEj:
LFB9236:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj
	subl	$4, %esp
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%eax)
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%edx, 4(%eax)
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	movl	8(%ebp), %edx
	sall	$3, %edx
	addl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	%edx, 8(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE9236:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj
	.def	__ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE13_M_deallocateEPxj:
LFB9237:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	cmpl	$0, 8(%ebp)
	je	L66
	movl	-12(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, 8(%esp)
	movl	8(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj
L66:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE9237:
	.section	.text$_ZSt27__uninitialized_default_n_aIPxjxET_S1_T0_RSaIT1_E,"x"
	.linkonce discard
	.globl	__ZSt27__uninitialized_default_n_aIPxjxET_S1_T0_RSaIT1_E
	.def	__ZSt27__uninitialized_default_n_aIPxjxET_S1_T0_RSaIT1_E;	.scl	2;	.type	32;	.endef
__ZSt27__uninitialized_default_n_aIPxjxET_S1_T0_RSaIT1_E:
LFB9238:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt25__uninitialized_default_nIPxjET_S1_T0_
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9238:
	.section	.text$_ZSt8_DestroyIPxEvT_S1_,"x"
	.linkonce discard
	.globl	__ZSt8_DestroyIPxEvT_S1_
	.def	__ZSt8_DestroyIPxEvT_S1_;	.scl	2;	.type	32;	.endef
__ZSt8_DestroyIPxEvT_S1_:
LFB9239:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9239:
	.section	.text$_ZNSaIxEC2ERKS_,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSaIxEC2ERKS_
	.def	__ZNSaIxEC2ERKS_;	.scl	2;	.type	32;	.endef
__ZNSaIxEC2ERKS_:
LFB9336:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_
	subl	$4, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE9336:
	.section	.text$_ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj,"x"
	.linkonce discard
	.align 2
	.globl	__ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj
	.def	__ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj;	.scl	2;	.type	32;	.endef
__ZNSt12_Vector_baseIxSaIxEE11_M_allocateEj:
LFB9338:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	cmpl	$0, 8(%ebp)
	je	L72
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZNSt16allocator_traitsISaIxEE8allocateERS0_j
	jmp	L74
L72:
	movl	$0, %eax
L74:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE9338:
	.section	.text$_ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj,"x"
	.linkonce discard
	.globl	__ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj
	.def	__ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj;	.scl	2;	.type	32;	.endef
__ZNSt16allocator_traitsISaIxEE10deallocateERS0_Pxj:
LFB9339:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj
	subl	$8, %esp
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9339:
	.section	.text$_ZSt25__uninitialized_default_nIPxjET_S1_T0_,"x"
	.linkonce discard
	.globl	__ZSt25__uninitialized_default_nIPxjET_S1_T0_
	.def	__ZSt25__uninitialized_default_nIPxjET_S1_T0_;	.scl	2;	.type	32;	.endef
__ZSt25__uninitialized_default_nIPxjET_S1_T0_:
LFB9340:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movb	$1, -9(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxjEET_S3_T0_
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9340:
	.section	.text$_ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_,"x"
	.linkonce discard
	.globl	__ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_
	.def	__ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_;	.scl	2;	.type	32;	.endef
__ZNSt12_Destroy_auxILb1EE9__destroyIPxEEvT_S3_:
LFB9341:
	.cfi_startproc
	nop
	ret
	.cfi_endproc
LFE9341:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_
	.def	__ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIxEC2ERKS1_:
LFB9410:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$4
	.cfi_endproc
LFE9410:
	.section	.text$_ZNSt16allocator_traitsISaIxEE8allocateERS0_j,"x"
	.linkonce discard
	.globl	__ZNSt16allocator_traitsISaIxEE8allocateERS0_j
	.def	__ZNSt16allocator_traitsISaIxEE8allocateERS0_j;	.scl	2;	.type	32;	.endef
__ZNSt16allocator_traitsISaIxEE8allocateERS0_j:
LFB9412:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$0, 4(%esp)
	movl	12(%ebp), %eax
	movl	%eax, (%esp)
	movl	8(%ebp), %ecx
	call	__ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv
	subl	$8, %esp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9412:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj
	.def	__ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIxE10deallocateEPxj:
LFB9413:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZdlPv
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE9413:
	.section	.text$_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxjEET_S3_T0_,"x"
	.linkonce discard
	.globl	__ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxjEET_S3_T0_
	.def	__ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxjEET_S3_T0_;	.scl	2;	.type	32;	.endef
__ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPxjEET_S3_T0_:
LFB9414:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -16(%ebp)
	movl	$0, -12(%ebp)
	leal	-16(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt6fill_nIPxjxET_S1_T0_RKT1_
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9414:
	.section	.text$_ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv
	.def	__ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv;	.scl	2;	.type	32;	.endef
__ZN9__gnu_cxx13new_allocatorIxE8allocateEjPKv:
LFB9506:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv
	cmpl	%eax, 8(%ebp)
	seta	%al
	testb	%al, %al
	je	L86
	call	__ZSt17__throw_bad_allocv
L86:
	movl	8(%ebp), %eax
	sall	$3, %eax
	movl	%eax, (%esp)
	call	__Znwj
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8
	.cfi_endproc
LFE9506:
	.section	.text$_ZSt6fill_nIPxjxET_S1_T0_RKT1_,"x"
	.linkonce discard
	.globl	__ZSt6fill_nIPxjxET_S1_T0_RKT1_
	.def	__ZSt6fill_nIPxjxET_S1_T0_RKT1_;	.scl	2;	.type	32;	.endef
__ZSt6fill_nIPxjxET_S1_T0_RKT1_:
LFB9507:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__ZSt12__niter_baseIPxET_S1_
	movl	%eax, %edx
	movl	16(%ebp), %eax
	movl	%eax, 8(%esp)
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	__ZSt10__fill_n_aIPxjxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9507:
	.section	.text$_ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv
	.def	__ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv;	.scl	2;	.type	32;	.endef
__ZNK9__gnu_cxx13new_allocatorIxE8max_sizeEv:
LFB9565:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	$536870911, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9565:
	.section	.text$_ZSt12__niter_baseIPxET_S1_,"x"
	.linkonce discard
	.globl	__ZSt12__niter_baseIPxET_S1_
	.def	__ZSt12__niter_baseIPxET_S1_;	.scl	2;	.type	32;	.endef
__ZSt12__niter_baseIPxET_S1_:
LFB9566:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9566:
	.section	.text$_ZSt10__fill_n_aIPxjxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_,"x"
	.linkonce discard
	.globl	__ZSt10__fill_n_aIPxjxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_
	.def	__ZSt10__fill_n_aIPxjxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_;	.scl	2;	.type	32;	.endef
__ZSt10__fill_n_aIPxjxEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT1_E7__valueET_E6__typeES6_T0_RKS4_:
LFB9567:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	16(%ebp), %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, -16(%ebp)
	movl	%edx, -12(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -4(%ebp)
L96:
	cmpl	$0, -4(%ebp)
	je	L95
	movl	8(%ebp), %ecx
	movl	-16(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	%eax, (%ecx)
	movl	%edx, 4(%ecx)
	subl	$1, -4(%ebp)
	addl	$8, 8(%ebp)
	jmp	L96
L95:
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9567:
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB9616:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9616:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB9615:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L101
	cmpl	$65535, 12(%ebp)
	jne	L101
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L101:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9615:
	.def	__GLOBAL__sub_I_n;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_n:
LFB9639:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE9639:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_n
	.ident	"GCC: (i686-posix-dwarf-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	__ZNSirsERx;	.scl	2;	.type	32;	.endef
	.def	_memset;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEx;	.scl	2;	.type	32;	.endef
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base15sync_with_stdioEb;	.scl	2;	.type	32;	.endef
	.def	__ZNSt9basic_iosIcSt11char_traitsIcEE3tieEPSo;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSt8ios_baseS0_E;	.scl	2;	.type	32;	.endef
	.def	__ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision;	.scl	2;	.type	32;	.endef
	.def	__ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	__ZdlPv;	.scl	2;	.type	32;	.endef
	.def	__ZSt17__throw_bad_allocv;	.scl	2;	.type	32;	.endef
	.def	__Znwj;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
