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
      unordered_map<int,int>map;
      vector<int>v;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
          if(map[a[i]]==0){
              v.push_back(a[i]);
              
          }
          map[a[i]]++;
      }
      sort(v.begin(),v.end());
      int b=v[0];
      int min1=0;
      for(int i=1;i<v.size();i++){
          if(v[i]%b==0){
              min1+=map[v[i]];
          }
          else{
            min1=INT_MAX;
            break;
          }
        //   cout<<map[v[i]]<<" "<<min1<<endl;
      }
      if(v.size()==1){
          cout<<0<<endl;
      }
      else{
        if(n<=min1 && min1!=0){
            cout<<n<<endl;
        }
        else{
            cout<<min1<<endl;
        }
      }
    //   cout<<min(min1,v.size())<<endl;
	}
	return 0;
}
