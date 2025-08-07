#include<bits/stdc++.h>
using namespace std;
int countTest(int n, int k){
    int operations=0;
        if(k==1){
            return n;
        }
        while(n>0){
            operations+=n%k;
            n/=k;
        }
        return operations;
  
}
int main(){
    int testCase;
    cin>>testCase;

    while(testCase--){
        int n,k;
        cin>>n>>k;

        cout<<countTest(n,k)<<endl;
    }
    return 0;
}