#include "ft_printf.h"
#include <limits.h>

int main()
{   /*
        f("========= X ======");
        ft_printf"%x\n", 0);
        f("%x\n", 0);
        ft_printf"%x\n", -1);
        f("%x\n", -1);
        ft_printf"%x\n", 1);
        f("%x\n", 1);
        ft_printf"%x\n", 9);
        f("%x\n", 9);
        ft_printf"%x\n", 10);
        f("%x\n", 10);
        ft_printf"%x\n", 11);
        f("%x\n", 11);
        ft_printf"%x\n", 15);
        f(" %x\n", 15);
        ft_printf" %x\n", 16);
        f(" %x\n", 16);
        ft_printf" %x\n", 17);
        f(" %x\n", 17);
        ft_printf" %x\n", 99);
        f(" %x\n", 99);
        ft_printf" %x\n", 100);
        f(" %x\n", 100);
        ft_printf" %x\n", 101);
        f(" %x\n", 101);
        ft_printf" %x\n", -9);
        f(" %x\n", -9);
        ft_printf"%x\n", -10);
        f("%x\n", -10);
        ft_printf"%x\n", -11);
        f("%x\n", -11);
        ft_printf"%x\n", -14);
        f("%x\n", -14);
        ft_printf"%x\n", -15);
        f("%x\n", -15);
        ft_printf"%x\n", -16);
        f("%x\n", -16);
        ft_printf"%x\n", -99);
        f("%x\n", -99);
        ft_printf"%x\n", -100);
        f("%x\n", -100);
        ft_printf" %x\n", -101);
        f(" %x\n", -101);
        ft_printf" %x\n", INT_MAX);
        f(" %x\n", INT_MAX);
        ft_printf" %x\n", INT_MIN);
        f(" %x\n", INT_MIN);
        ft_printf" %x\n", LONG_MAX);
        f(" %x\n", LONG_MAX);
        ft_printf" %x\n", LONG_MIN);
        f(" %x\n", LONG_MIN);
        ft_printf"%x\n", UINT_MAX);
        f("%x\n", UINT_MAX);
        ft_printf"%x\n", ULONG_MAX);
        f(" %x\n", ULONG_MAX);
        ft_printf" %x\n", 9223372036854775807LL);
        f(" %x\n", 9223372036854775807LL);
        ft_printf" %x%x %x%x %x%x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
        f(" %x%x %x%x %x%x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
*/
        //printf("========== P =====\n");
        /*ft_printf("me %p\n", -1);
        printf("he %p\n", -1);
        ft_printf("me %p\n", 1);
        printf("he %p\n", 1);
        ft_printf("me %p\n", 15);
        printf("he %p\n", 15);
        ft_printf("me %p\n", 16);
        printf("he %p\n", 16);
        ft_printf("me %p\n", 17);
        printf("he %p\n", 17);*/
        //ft_printf("me %p%p\n", INT_MIN, INT_MAX);
        //printf("he %p%p\n", INT_MIN, INT_MAX);
        //printf("%d\n", ULONG_MAX);
        //printf("%d\n", -ULONG_MAX);
        ft_printf("me %p h %p\n", ULONG_MAX, -ULONG_MAX);
        printf("he %p h %p\n", ULONG_MAX, -ULONG_MAX);
        ft_printf("me %p h %p\n", 4294967295, -4294967295);
        printf("he %p h %p\n", 4294967295, -4294967295);
        //ft_printf("me %p%p\n", 0, 0);
        //printf("he %p%p\n", 0, 0);
}
/*
me 0x00xffffffff
he 0x80000000000000000x7fffffffffffffff
me 0xffffffff0x1
he 0xffffffffffffffff0x1
me 0x000x00
he 0x00x0
*/