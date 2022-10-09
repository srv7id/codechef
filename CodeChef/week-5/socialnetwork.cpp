#include <bits/stdc++.h>
using namespace std;
struct book{
    int f,p,d=0;
    string s;
}b[1000];

int main() {
	// your code goes here
	int n;
	cin>>n;
	int m;
	cin>>m;
	int sp[n];
	for(int i=0;i<n;i++){
	    cin>>sp[i];
	}
	for(int i=0;i<m;i++){
	    cin>>b[i].f;
	    cin>>b[i].p;
	    cin>>b[i].s;
	}
	for(int i=0;i<m;i++){
	    for(int j=0;j<m;j++){
	        struct book t;
	        if(b[i].p>b[j].p){
	            t=b[i];
	            b[i]=b[j];
	            b[j]=t;
	        }
	    }
	}
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++){
	        if(b[i].f==sp[j]){
	            cout<<b[i].s<<endl;
	            b[i].d=1;
	        }
	    }
	}
	for(int i=0;i<m;i++){
	    if(b[i].d==0){
	        cout<<b[i].s<<endl;
	    }
	}
	return 0;
}
