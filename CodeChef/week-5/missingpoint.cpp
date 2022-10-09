#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    n=4*n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n-1;i++){
	        cin>>a[i]>>b[i];
	    }
	    sort(a,a+(n-1));
	    sort(b,b+(n-1));
	    int x,y;
	    for(int i=0;i<n-1;i+=2){
	        if(a[i]!=a[i+1]){
	            x=a[i];
	            break;
	        }
	    }
	    for(int i=0;i<n-1;i+=2){
	        if(b[i]!=b[i+1]){
	            y=b[i];
	            break;
	        }
	    }
	    cout<<x<<" "<<y<<endl;
	}
	return 0;
}
