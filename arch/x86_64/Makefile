CFLAGS += -mno-sse -mno-red-zone -mcmodel=kernel
LDFLAGS += -n

includes += -Iarch/x86_64/include

objs += arch/x86_64/apic.o
objs += arch/x86_64/cpu.o
objs += arch/x86_64/boot.o
objs += arch/x86_64/entry.o
objs += arch/x86_64/exceptions.o
objs += arch/x86_64/i8259.o
objs += arch/x86_64/ioport.o
objs += arch/x86_64/ioremap.o
objs += arch/x86_64/irq.o
objs += arch/x86_64/memory.o
objs += arch/x86_64/mmio.o
objs += arch/x86_64/mmu.o
objs += arch/x86_64/multiboot_header.o
objs += arch/x86_64/pci.o
objs += arch/x86_64/setup.o
objs += arch/x86_64/syscall.o
objs += arch/x86_64/thread.o
objs += arch/x86_64/task.o
objs += drivers/uart/8250.o

all: kernel.iso

kernel.iso: kernel.elf
	$(E) "  MKISO   " $@
	$(Q) ./scripts/mkiso $@

archclean:
	$(Q) rm -f kernel.iso

.PHONY: archclean
