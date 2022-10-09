#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i=0,j=n-1;
        int p=0,f=1;
        while(i<=j){

            if(a[i]!=a[j]){ //palindrome
                f=0;
                break;
            }
            if(!(a[i]==p || a[i]==p+1)){ //diff= 1 or 0 check
                f=0;
                break;
            }
            p=a[i]; //update prev
            i++;
            j--;
        }
        if(count(a,a+n,7)==0) f=0;
        f? cout<<"yes":cout<<"no";
        cout<<endl;
    }
}