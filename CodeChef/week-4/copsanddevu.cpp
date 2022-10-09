#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int k=x*y;
        int s=0;
        if(a[0]-1>k) s+=a[0]-k-1;
        if(100-a[n-1]>k) s+=100-a[n-1]-k;
        k*=2;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-1-a[i]>k) s+=a[i+1]-a[i]-k-1;
        }
        cout<<s<<endl;
    }
}