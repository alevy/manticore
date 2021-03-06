#include <kernel/mmu.h>

#include <kernel/errno.h>

phys_t virt_to_phys(virt_t addr)
{
	return addr;
}

mmu_map_t mmu_current_map(void)
{
	/* Not supported. */
	return 0;
}

int mmu_map_range(mmu_map_t map, virt_t vaddr, phys_t paddr, size_t size, mmu_prot_t prot, mmu_flags_t flags)
{
	/* Not supported. */
	return -EINVAL;
}
