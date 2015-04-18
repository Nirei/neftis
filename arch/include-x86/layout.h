#ifndef _ASM_LAYOUT_H
#define _ASM_LAYOUT_H

#define USER_MSGQ_VREMAP_START   0x00001000
#define USER_MSGQ_VREMAP_SIZE    0x00100000
#define USER_ABI_VDSO            0xa0000000

#define KERNEL_BASE              0xd0000000
#define KERNEL_VREMAP_AREA_START 0xe0000000
#define KERNEL_VREMAP_AREA_SIZE  0x00100000
#define KERNEL_MSGQ_VREMAP_START (KERNEL_VREMAP_AREA_START + KERNEL_VREMAP_AREA_SIZE)
#define KERNEL_MSGQ_VREMAP_SIZE  0x00100000

#endif /* _ASM_LAYOUT_H */