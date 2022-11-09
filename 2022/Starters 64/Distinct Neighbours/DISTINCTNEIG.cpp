#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        int max1=0;
        int a[n+1]={0};
        for(int i=0;i<2*n;i++){
            int k;
            cin>>k;
            a[k]++;
            max1=max(a[k],max1);
        }
        // sort(v.begin(),v.end());
    
        if(max1<=2*n -n/2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
