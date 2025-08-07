#include<bits/stdc++.h>
using namespace std;

int main(){

    int N,M,Y;
    cin>>N>>M>>Y;

    vector<int> ans;

    for(int i=0; i<M; i++){
        int pow=1;
        for(int j=0; j<N; j++){
            pow=(pow*i)%M;
        }
        if(pow==Y){
            ans.push_back(i);
        }
    }
    if(ans.empty()){
        cout<<-1<<endl;
    }else{
        for(int i=0; i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
    return 0;
    
     
}