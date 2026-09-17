#include <iostream>
using namespace std;
bool t[10001]={0};
int main(){
	int l,m,b,e;
	int ans=0;
	cin>>l>>m;
	for(int i=0;i<m;i++){
		cin>>b>>e;
		for(int j=b;j<e+1;j++){
			t[j]=1;
		}
	}
	for(int i=0;i<l+1;i++){
		if(t[i]==0)
		ans=ans+1;
	}
	cout<<ans<<endl;
	return 0;
}
