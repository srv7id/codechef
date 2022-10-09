#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, big=0, b, len=0, winner;
	    cin>>n;
	    int a[n+1];
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a,a+n);
	    b=a[0],len=1;
	    for(int i=1;i<n+1;i++){
	        if(b==a[i]){
	            len++;
	        }
	        else{
	            if(len>big){
	                big=len;
	                winner=b;
	            }
	            b=a[i];
	            len=1;
	        }
	    }
	    len=0;
	    for(int i=0;i<n;i++){
	        if(a[i]==winner){
	            len++;
	        }
	    }
	    if(len>float(n)/2) cout<<winner<<endl;
	    else cout<<"NOTA"<<endl;
	}
	return 0;
}
/*

1
6
2 2 2 2 2 2

*/
