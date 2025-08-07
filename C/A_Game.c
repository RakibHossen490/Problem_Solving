
#include<stdio.h>
int main()
{
    int gameNumber;
    
    scanf("%d",&gameNumber);
    int homeJersey[gameNumber],awayJersey[gameNumber],count=0;

    for(int i=0; i<gameNumber; i++){
        scanf("%d %d",&homeJersey[i],&awayJersey[i]);
    }

    for(int i=0; i<gameNumber; i++){
        for(int j=0; j<gameNumber; j++){

            if(homeJersey[i]==awayJersey[j]){
            count++;

            }

        }
       
    }
    printf("%d \n",count);
    return 0;
}