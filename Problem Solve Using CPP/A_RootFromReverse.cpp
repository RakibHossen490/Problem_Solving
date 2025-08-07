#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<double> number;
    double n;

    while(cin>> n){
       number.push_back(n);
    }
    cout<<fixed<<setprecision(4);

    for(int i =number.size()-1; i>=0; i-- ){
        cout<<sqrt(number[i])<<endl;
    }
     return 0;
}