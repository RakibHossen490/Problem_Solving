#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p,q,r;
    for(int i=0; i<n; i++){
        cin>>p>>q>>r;
        if(p==q){
            cout<<r<<endl;
        }
        else if(p==r){
            cout<<q << endl;
        }
        else
        cout<<p <<endl;
    }
    return 0;

}