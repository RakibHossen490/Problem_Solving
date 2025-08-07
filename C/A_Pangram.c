#include<stdio.h>
int main()
{
    
    int n,upper=0;
    scanf("%d",&n);
    char ch[n];
    for(int i=0; i<n; i++){
        scanf("%c",&ch[i]);
    }
    for(int i=0; i<n; i++){
        if(ch[i]>='A' && ch[i]<='Z')
        {
            upper++;
        }
    }
    if(upper==0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}