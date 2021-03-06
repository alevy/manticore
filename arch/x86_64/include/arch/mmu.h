#ifndef ARCH_MMU_H
#define ARCH_MMU_H

#include <kernel/const.h>

#define X86_PE_P	_UL_BIT(0)	/* Present */
#define X86_PE_RW	_UL_BIT(1)	/* Read/write */
#define X86_PE_US	_UL_BIT(2)	/* User/supervisor */
#define X86_PE_PWT	_UL_BIT(3)	/* Page-level write-through */
#define X86_PE_PCD	_UL_BIT(4)	/* Page-level cache disable */
#define X86_PE_A	_UL_BIT(5)	/* Accessed */
#define X86_PE_D	_UL_BIT(6)	/* Dirty */
#define X86_PE_PS	_UL_BIT(7)	/* Page size */
#define X86_PE_G	_UL_BIT(8)	/* Global */
#define X86_PE_XD	_UL_BIT(63)	/* Execute-disable */

#endif
