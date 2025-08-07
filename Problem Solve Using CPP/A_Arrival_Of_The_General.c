#include<stdio.h>
int main()
{
    int n;
    int num[100];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    int max=0,min=0;
    for(int i=0; i<n; i++){
        if(num[i]>num[max]){
            max=i;
        }
        if(num[i]<=num[min]){
           min=i;
        }
        
    }
    int moves=max+(n-1-min);
    if(max>min){
        moves-=1;
    }
    printf("%d ",moves);
    
}