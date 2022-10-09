#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int s=accumulate(a,a+n,0);
        int s1=0,s2=0;
        s1=accumulate(a,a+k,0);
        for(int i=n-1;i>=;i--){
            s2+=a[i];
        }
        cout(max((accumulate(a)),b)) //incomplete

    }
}