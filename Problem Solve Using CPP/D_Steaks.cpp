#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>> n>> k;


    int side=n*2;
    int MinTime;
    
    if(side%k==0){
        MinTime=side/k;
    }else{
        MinTime=(side/k)+1;
    }
    
    cout<<MinTime<<endl;
}