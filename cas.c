#include <stdio.h>

int main (void)
{
    int cas1h;
    char casdvojbodka1;
    int cas1m;
    char casdvojbodka2;   
    int cas1s=0;
    char casciarka;
    int cas1ms=0;

    int cas2h=0;
    int cas2m=0;
    int cas2s;
    int cas2ms;

    printf("Zadejte cas t1:\n");
    int cas1=scanf("%d%c%d%c%d%c%d",&cas1h,&casdvojbodka1,&cas1m,&casdvojbodka2,&cas1s,&casciarka,&cas1ms);
    if (cas1==7 && cas1h<24 && casdvojbodka1==':'&& cas1m<60 && casdvojbodka2==':' && cas1s<60 && casciarka==',' && cas1ms<1000)
    {
        if(cas1ms<10)
        {
           cas1ms=cas1ms*100;             
            
        }
        else
        {
            printf("Nothing new");
        }
        

        printf("OK\n");
    }

    else
    {
        printf("Chybny vstup");
        return 0;
    }
    printf("Zadejte cas t2:\n");
    int cas1=scanf("%d%c%d%c%d%c%d",&cas2h,&casdvojbodka1,&cas2m,&casdvojbodka2,&cas2s,&casciarka,&cas2ms);
    if (cas1==7 && cas1h<24 && casdvojbodka1==':'&& cas1m<60 && casdvojbodka2==':' && cas1s<60 && casciarka==',' && cas1ms<1000)
    {
        if(cas2ms<10)
        {
           cas1ms=cas1ms*100;             
            
        }
        else
        {
            printf("Nothing new");
        }
        

        printf("OK\n");
    }

    else
    {
        printf("Chybny vstup");
        return 0;
    }
    

    


    




    return 0;
}