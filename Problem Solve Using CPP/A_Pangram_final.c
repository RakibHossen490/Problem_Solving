#include<stdio.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d",&n);

    char str[100];
    scanf("%s",str);

    int alphabet[26]={0};
    for(int i=0; i<n; i++){
        char c=tolower(str[i]);
        alphabet[c-'a']=1;
    }
    for(int i=0; i<26; i++){
        if(alphabet[i]==0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}