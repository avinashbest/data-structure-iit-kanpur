#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,N,M;cin>>t;
	while(t--){
	    cin>>N>>M;
	    int a,b,k,arr[N]={0};
	    while(M--){
	        cin>>a>>b>>k;
	        for(int i=a;i<=b;i++){
	            arr[i] += k;
	        }
	    }
	    cout<<*max_element(arr,arr+N)<<endl;
	}
	return 0;
}
