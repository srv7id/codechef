#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int big=0;
        for(int i=1;i<=k;i++){
            if(big<n%i) big=n%i;
        }
        cout<<big<<endl;
    }
}