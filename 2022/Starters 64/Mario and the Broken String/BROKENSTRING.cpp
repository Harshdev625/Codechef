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
        string s;
        cin>>s;
        string t,u;
        for(int i=0;i<s.size();i++){
            if(i<=s.size()/2-1){
                t+=s[i];
            }
            else{
                u+=s[i];
            }
        }
        if(t==u){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
