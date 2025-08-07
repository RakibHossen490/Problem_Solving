#include<bits/stdc++.h>
using namespace std;
int main(){
    int Test;
    cin>>Test;

    while(Test--){
        int n;
        cin>>n;

        vector<int> point(n+10);
        for(int i=0; i<n; i++){
            cin>>point[i];
        }
       
        // for(int  i=0; i<n; i++){
        //     if(point[i]-point[i-1]>=point[i-1]){
        //         possible=true;
        //         break;
        //     }
        if(n==2){
            int difference=abs(point[1]-point[0]);
            if(difference>=2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }

    
    }
    return 0;
}
