#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);

    char polyherons[20];
    for(int i=0; i<n; i++){
        scanf("%s",polyherons);

        if(strcmp(polyherons,"Tetrahedron")==0){
            sum+=4;
        }
        else if(strcmp(polyherons,"Cube")==0){
            sum+=6;
        }
        else if(strcmp(polyherons,"Octahedron")==0){
            sum+=8;
        }
        else if(strcmp(polyherons,"Dodecahedron")==0){
            sum+=12;
        }
        else if(strcmp(polyherons,"Icosahedron")==0){
            sum+=20;
        }

    }
    printf("%d\n ",sum);
    return 0;

}