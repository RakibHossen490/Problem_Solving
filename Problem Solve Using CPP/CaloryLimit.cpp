#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int k,a;
        cin>>k>>a;
        vector<int> sweets(k);
        for(int i=0; i<k; i++){
            cin>>sweets[i];
        }
        int calories=0,count=0;

        for(int i=0; i<k; i++){
            if(calories+sweets[i]<=a){
                calories+=sweets[i];
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;

    }
