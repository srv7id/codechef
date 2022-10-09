#include <bits/stdc++.h>
using namespace std;
struct Node{
    string s;
    int sol=0;
};
typedef struct Node node;

int main() {
	int t;
	int flag=1;
	cin>>t;
	while(t--){
	    node a[1000];
	    int back=0;
	    int n;
	    cin>>n;
	    n=n*3;
	    string x;
	    int y;
	    for(int i=0;i<n;i++){
	       cin>>x;
	       cin>>y;
	       for(int j=0;j<back;j++){
	           if(a[j].s==x){
	               a[j].sol+=y;
	               flag=0;
	               break;
	           }
	           else{
	               flag=1;
	           }
	       }
	       if(flag==1){
	           a[back].s=x;
	           a[back].sol=y;
	           back++;
	           flag=0;
	       }
	    }
	   // cout<<"Hello world"<<endl;
	    int arr[back];
	    for(int i=0;i<back;i++){
	        arr[i]=a[i].sol;
	    }
	    sort(arr,arr+back);
	    for(int i=0;i<back;i++){
	        cout<<arr[i]<<" ";
	    }
	}
	return 0;
}
