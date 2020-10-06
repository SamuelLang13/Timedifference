#include<stdio.h>

int main(void)
{
    int cas1h;
    int cas1m;
    int cas1s;
    int cas1ms;
    int sum1;

    int cas2h;
    int cas2m;
    int cas2s;
    int cas2ms;
    int sum2;

    int diffms;
    int diffs;
    int diffm;
    int diffh;

    int totalms;
    int totals;
    int totalm;
    int totalh;

    printf("Zadejte cas t1:\n");
    if(scanf(" %d : %d : %d , %d",&cas1h,&cas1m,&cas1s,&cas1ms)==4)
    {
        if(cas1h>=0 && cas1h<24 && cas1m>=0 && cas1m<60 && cas1s>=0 && cas1s<60 && cas1ms>=0 && cas1ms<1000)
        {
            
            sum1=cas1h*3600000+cas1m*60000+cas1s*1000+cas1ms;
            printf("Spravny vstup.\n");
            printf("Zadejte cas t2:\n");
            if(scanf(" %d : %d : %d , %d",&cas2h,&cas2m,&cas2s,&cas2ms)==4)
            {
                if(cas2h>=0 && cas2h<24 && cas2m>=0 && cas2m<60 && cas2s>=0 && cas2s<60 && cas2ms>=0 && cas2ms<1000)
                {
                    sum2=cas2h*3600000+cas2m*60000+cas2s*1000+cas2ms;
                    printf("Spravny vstup.\n");
                    if(sum1>sum2)
                    {
                        printf("Nespravny vstup\n");
                        return 1;
                    }
                    else
                    {
                        if(cas1ms<10 || cas1ms<10)
                        {
                            cas1ms=cas1ms*100;
                            cas2ms=cas2ms*100;
                        }    
                        
                    }
                    
                }
                else
                {
                    printf("Nespravny vstup\n");
                    return 1;
                }
            }
            else
            {
                printf("Nespravny vstup\n");
                return 1;
            }
               

        }
        else
        {
            printf("Nespravny vstup\n");
            return 1;
        }
            
    }
    else
    {
        printf("Nespravny vstup\n");
        return 1;
    }
    

    



    return 0;
}