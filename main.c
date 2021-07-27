#include "ft_printf.h"
/*
int main(void)
{
    int     mine;
    int     total;
    void    *blc;
/*
    mine = ft_printf("[c] : %c\n", 'c');
    printf("mine = ==[%d]==\n", mine);
   
   	total = printf("[c] = %c\n", 'c');
    printf("total = ==[%d]==\n", total);
   
   	mine = ft_printf("[s] : %s\n", NULL);
    printf("mine = ==[%d]==\n", mine);
   	total = printf("[s] = %s\n", NULL);
    */
    //printf("total = ==[%d]==\n", total);
   	mine = ft_printf("%p%", 0);
	printf("\n");
    printf("mine = ==[%d]==\n", mine);
    total = printf("%p%", 0);
	printf("\n");
   	printf("total = ==[%d]==\n", total);

    mine = ft_printf("%%%%%", 12345678);
	printf("\n");
    printf("mine = ==[%d]==\n", mine);
    total = printf("%%%%%", 12345678);
	printf("\n");
   	printf("total = ==[%d]==\n", total);
    /*
    mine = ft_printf("[d] : %d\n", 42);
    printf("mine = ==[%d]==\n", mine);
    total = printf("[d] = %d\n", 42);
    printf("total = ==[%d]==\n", total);
    mine = ft_printf("[i] : %i\n", 42);
    printf("mine = ==[%d]==\n", mine);
    total = printf("[i] = %i\n", 42);
    printf("total = ==[%d]==\n", total);
    mine = ft_printf("[u] : %u\n", 789456123);
    printf("mine = ==[%d]==\n", mine);
    total = printf("[u] = %u\n", 789456123);
    printf("total = ==[%d]==\n", total);
    mine = ft_printf("[x] : %x\n", 42);
    printf("mine = ==[%d]==\n", mine);
    total = printf("[x] = %x\n", 42);
    printf("total = ==[%d]==\n", total);
    mine = ft_printf("[X] : %X\n", 42);
    printf("mine = ==[%d]==\n", mine);
    total = printf("[X] = %X\n", 42);
    printf("total = ==[%d]==\n", total);
    mine = ft_printf("[%%] : %%\n");
    printf("mine = ==[%d]==\n", mine);
    total = printf("[%%] = %%\n");
    printf("total = ==[%d]==\n", total);
    //===============================CAS SPECIAUX===================//

    mine = ft_printf("[void p] : %p\n", blc);
    printf("mine = ==[%d]==\n", mine);
    total = printf("[void p] = %p\n", blc);
    printf("total = ==[%d]==\n", total);

    mine = ft_printf("%c %d %%%p\n", 'c', 42, blc);
	printf("mine : %d\n", mine);
	total = ft_printf("%c %d %%%p\n", 'c', 42, blc);
	printf("total : %d\n", total);
    */
}
*/