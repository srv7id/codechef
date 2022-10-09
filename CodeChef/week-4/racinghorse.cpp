#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int s=INT_MAX;
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(s>a[i]-a[i-1]) s=a[i]-a[i-1];
        }
        cout<<s<<endl;
    }
}