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
        int a[n];
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max){
                max=a[i];
            }
        }
        cout<<max<<endl;
	}
	return 0;
}
