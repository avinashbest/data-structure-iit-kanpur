#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int n,a,b,d;cin>>n;
	while(n--){
	    cin>>a>>b;
	    int arr[a];
	    map<int,int> m;
	    for(int i=0;i<a;i++){
	        cin>>d;
	        arr[i]=d;
	        m[d]++;
	    }
	    bool gu=true;
	    for(int i=0;i<a;i++){
	        if(m[arr[i]]==b){cout<<arr[i]<<endl;gu=false;break;}
	    }
	    if(gu){cout<<-1<<endl;}
	}
	return 0;
}
