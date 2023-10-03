#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/version.h>
#if(LINUX_VERSION_CODE >= KERNEL_VERSION(4,14,0))
#include <linux/sched/mm.h>
#endif

phys_addr_t translate_linear_address(struct mm_struct* mm, uintptr_t va);

bool read_physical_address(phys_addr_t pa, void* buffer, size_t size);

bool write_physical_address(phys_addr_t pa, void* buffer, size_t size);

bool read_process_memory(pid_t pid, uintptr_t addr, void* buffer, size_t size);

bool write_process_memory(pid_t pid, uintptr_t addr, void* buffer, size_t size);
