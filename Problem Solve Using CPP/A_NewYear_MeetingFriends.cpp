#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int position[]={a,b,c};
    sort(position,position+3);

    int distance=position[2]-position[0];
    cout<<distance<<endl;
}