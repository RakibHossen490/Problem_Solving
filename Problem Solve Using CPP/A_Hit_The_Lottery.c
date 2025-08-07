#include<stdio.h>
int main()
{
    int amount,count=0;
    scanf("%d",&amount);
     count +=amount/100;
     amount%=100;

     count+=amount/20;
     amount%=20;

     count+=amount/10;
     amount%=10;

     count+=amount/5;
     amount%=5;

     count+=amount/1;
     amount%=1;

     printf("%d\n",count);
    
    return 0;
}