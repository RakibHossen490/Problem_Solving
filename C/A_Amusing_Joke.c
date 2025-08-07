#include<stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
    char firstName[101],secondName[101],randomeName[201];
    scanf("%s %s",firstName,secondName);

    scanf("%s",randomeName);

    char combined[201];
    strcpy(combined, firstName);
    strcat(combined, secondName);

    int lenCombine=strlen(combined);
    int lenRandome=strlen(randomeName);

    if(lenCombine != lenRandome){
        printf("NO\n");
        return 0;
    }
    int countCombine[26]={0};
    int countRandome[26]={0};

    for(int i=0; i<lenCombine; i++){
        countCombine[combined[i]-'A']++;
    }
    for(int i=0; i<lenCombine; i++){
        countRandome[randomeName[i]-'A']++;
    }
    for(int i=0; i<26; i++){
        if(countCombine[i]!=countRandome[i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;

    return 0;
}