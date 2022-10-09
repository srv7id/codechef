#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n;
	    priority_queue<int>a;
	    int b[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>x;
	        a.emplace(x);
	        auto it = find(a.begin(), a.end(), x);
            int k=it;
            b[i]=n-1-k;
            cout<<b[i]<<"\n";
	    }
	}
	return 0;
}
