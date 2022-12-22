#include<stdio.h>
#include<stdbool.h>

bool CheakEven(int iNo)
{
   if((iNo % 2) == 0)
   {
     return true;
   }
   else
   {
    return false;
   }

}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter one number\n");
    scanf("%d",&iValue);
    
    bRet = CheakEven(iValue);
    
    if (bRet == true)
    {
        printf("It is even number\n");
    }
    else
    {
      printf("It is odd number\n");
    }


    return 0;

}