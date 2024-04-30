#include <stdio.h>

int main()
{
//var
int inteiro;
int primo1, primo2;
int divisor1, divisor2;
int icont, jcont;

//inicio

primo1 = 0;
primo2 = 0;
divisor1 = 0;
divisor2 = 0;

scanf ("%d", inteiro);

//for (inteiro = 500; inteiro <= 1000; inteiro += 2)
{
    
    while (primo1 + primo2 != inteiro)
    {
        for (icont = 3; icont < inteiro; icont++)
            for(jcont = 2; jcont <= icont/2; jcont++)
            {
                if (icont%jcont == 0)
                    divisor1++;
                if (divisor1 == 0)
                {
                    primo1 = icont;
                    divisor2 = 0;
                }
            }
            
        for (icont = 3; icont < inteiro; icont++)
            for(jcont = 2; jcont <= icont/2; jcont++)
            {
                if (icont%jcont == 0)
                    divisor2++;
                if (divisor2 == 0)
                {
                    primo2 = icont;
                    divisor2 = 0;
                }
            }
            
    }
    
    printf ("%d = %d + %d", inteiro, primo1, primo2);
}

}
