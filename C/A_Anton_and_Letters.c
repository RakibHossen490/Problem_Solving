#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[1000];
    fgets(ch, 1000, stdin);

    int letter[26]={0};
    int unique_count=0;

    for(int i=0; i<strlen(ch); i++){
        if(islower(ch[i])){
            if(letter[ch[i]-'a']==0){
                unique_count++;
                letter[ch[i]-'a']=1;
            }
        }
    }
    printf("%d\n",unique_count);
    return 0;
}