#include <iostream>
using namespace std;
int main(){
	int n,k,a;
	int ans=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%k==0)
		ans=ans+1; 
	}
	cout<<ans<<endl;
}
