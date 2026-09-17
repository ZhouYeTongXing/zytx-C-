#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m;
	int ans;
	cin>>t;
	for(int i=1;i<t+1;i++){
		cin>>n;
		ans=0;
		for(int j=0;j<n;j++){
			cin>>m;
			if(m%3!=0){
				ans+=1;
			}
		}
		if(ans==0){
				cout<<"Case #"<<i<<": Yes"<<endl;
			}
			else{
				cout<<"Case #"<<i<<": No"<<endl;
			}
	}
	return 0;
} 
