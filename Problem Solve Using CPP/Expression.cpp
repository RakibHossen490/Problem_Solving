#include<bits/stdc++.h>

using namespace std;
int minimumResutlt(int a, int b, int c){
    int r1=a+b+c;
    int r2=a+b-c;
    int r3=a-b+c;
    int r4=a-b-c;
    int r5=a*b+c;
    int r6=a*b-c;
    int r7=a+b*c;
    int r8=a-b*c;
    int r9=a*b*c;

    int minimumResult= min({r1, r2, r3, r4, r5, r6, r7, r8, r9});
    return minimumResult;
}

int main(){
    int a,b,c;
    cin>> a >> b >> c;

    
    cout<<minimumResutlt(a, b, c) <<endl;

}