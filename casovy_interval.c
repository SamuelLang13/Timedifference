#include<stdio.h>

int main(void)
{
    int cas1h;
    int cas1m;
    int cas1s;
    int cas1ms;

    int cas2h;
    int cas2m;
    int cas2s;
    int cas2ms;

    printf("Zadejte cas t1:\n");
    if(scanf(" %d : %d : %d , %d",&cas1h,&cas1m,&cas1s,&cas1ms)==4)
    {
        printf("Spravny vstup.\n");
        return 0;
    }
    else
    {
       printf("Nespravny vstup\n");
       return 1;
    }

    printf("Zadejte cas t2:\n");
    if(scanf(" %d : %d : %d , %d",&cas2h,&cas2m,&cas2s,&cas2ms)==4)
    {
        printf("Spravny vstup.\n");
        return 0;
    }
    else
    {
       printf("Nespravny vstup\n");
       return 1;
    }



    return 0;
}