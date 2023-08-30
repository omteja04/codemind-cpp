#include<bits/stdc++.h>
using namespace std;
int digi(int n){
    if (n==0) return 1;
    return log10(abs(n))+1;
    
    
}
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(auto &k:vec){
        k=digi(k);
    }
    for(auto k:vec){
        cout<<k<<" ";
    }
    
    
}