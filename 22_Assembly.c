/* From arch/arm/include/asm/swab.h in Linux kernel version 4.6.4 */
#if __LINUX_ARM_ARCH__ >= 6

static inline __attribute_const__ __u32 __arch_swahb32(__u32 x)
{
    __asm__("rev16 %0, %1"
            : "=r"(x)
            : "r"(x));
    return x;
}

#define __arch_swahb32 __arch_swahb32
#define __arch_swab16(x) ((__u16)__arch_swahb32(x))

static inline __attribute_const__ __u32 __arch_swab32(__u32 x)
{
    __asm__("rev %0, %1"
            : "=r"(x)
            : "r"(x));
    return x;
}

#define __arch_swab32 __arch_swab32
#endif
