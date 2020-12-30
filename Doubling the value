#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    long long solve(int n, long long a[], long long b)
    {
        //code here.
        map<long long int ,int> m;
        for(int i=0;i<n;i++){m[a[i]]++;}
        while(1){
            if(m[b]==0){return b;}
            b=b*2;
        }
    }  
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, b; cin >> n >> b;
        long long int a[n];
    	for(int i = 0; i < n; ++i){
    		cin >> a[i];
    	}
    	
    	Solution ob;
    	long long ans = ob.solve(n,a,b*1LL);
    	cout << ans << endl;
    }
