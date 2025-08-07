#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>ratings(n);
        long long sum=0;
        long long maxRating=0;

        for(int i=0; i<n; i++){ 
            cin>>ratings[i];

            sum+=ratings[i];
            maxRating=max(maxRating,ratings[i]);
           
        }
        cout<<sum-2*ratings[n-2]<<endl;
    }
   
}