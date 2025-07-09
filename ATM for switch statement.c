# include <stdio.h>
int main()
{
    int pin,i,x = 4743;
    printf("pin must be correct");
    for (i = 1; i<= 3; i ++)
    {
      printf ("\n Enter your ATM pin \t");
      scanf ("%d",& pin);
      if (pin == x)
      { 
         printf ("\n collect your cash");
         break;
      }
      else if (i == 3)
      { 
          printf ("\n ATM has been blocked");
      }
      else
       if(x != pin)
      { 
        printf ("\n Incorrect pin please try after 24bhours");
      }
    }
    return 0;
}