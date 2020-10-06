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
    
    int sum1;
    int sum2;

    printf("Zadejte cas t1:\n");
    int cas1=scanf("%d%c%d%c%d%c%d",&cas1h,&casdvojbodka1,&cas1m,&casdvojbodka2,&cas1s,&casciarka,&cas1ms);
    if (cas1==7 && cas1h<24 && casdvojbodka1==':'&& cas1m<60 && casdvojbodka2==':' && cas1s<60 && casciarka==',' && cas1ms<1000)
    {
        if(cas1ms<10)
        {
           cas1ms=cas1ms*100;             
            
        }


        
        sum1=cas1h*3600000+cas1m*60000+cas1m*1000+cas1ms;

    }

    else
    {
        printf("Chybny vstup");
        return 1;
    }
    printf("Zadejte cas t2:\n");
    int cas2=scanf("%d%c%d%c%d%c%d",&cas2h,&casdvojbodka1,&cas2m,&casdvojbodka2,&cas2s,&casciarka,&cas2ms);
    if (cas2==7 && cas2h<24 && casdvojbodka1==':'&& cas2m<60 && casdvojbodka2==':' && cas2s<60 && casciarka==',' && cas2ms<1000)
    {
        if(cas2ms<10)
        {
           cas2ms=cas2ms*100;             
            
        }

        sum2=cas2h*3600000+cas2m*60000+cas2m*1000+cas2ms;

    }
    else
    {
        printf("Chybny vstup");
        return 1;
    }

    if(sum1>sum2)
    {
        printf("Chybny vstup");
        return 1;
    }
    else
    {
        printf("OK");
    }
    
    
    return 0;
}