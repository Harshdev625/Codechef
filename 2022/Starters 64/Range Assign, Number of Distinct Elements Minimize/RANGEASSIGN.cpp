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
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(v.size()==0){
                v.push_back(a[i]);
            }
            else{
                if(a[i]!=v[v.size()-1]){
                    v.push_back(a[i]);
                }
            }
        }
        if(v.size()<=2){
            cout<<"YES"<<endl;
        }
        else if((v[0]==v[v.size()-1])||(v[0]==v[v.size()-2])||(v[1]==v[v.size()-1])){
            cout<<"YES"<<endl;
        }
        else{
            int flag=0;
            for(int i=1;i<v.size();i++){
                if(v[i]==v[0]&&v[i+1]==v[v.size()-1]){
                    flag=1;
                    break;
                }
            }
            for(int i=v.size()-1;i>=0;i--){
                if(v[i]==v[v.size()-1] && v[i-1]==v[0]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
            cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
	}
	return 0;
}
