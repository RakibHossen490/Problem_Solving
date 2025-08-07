#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n; 
        scanf("%d",&n);

        int roundNumber[5];
        int count=0;
        int mult=1;

        while (n>0)
        {
            int digits=n%10;
            if(digits!=0){
                roundNumber[count++]=digits*mult;
            }
            n/=10;
            mult*=10;
        }
        printf("%d \n",count);
        for(int i=0; i<count; i++){
            printf("%d ",roundNumber[i]);
        }
        printf("\n");
        
    }
    return 0;

}  