#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	int ans=0;
	cin>>n>>k;
	ans+=n+n/k;
	while((n%k+n/k)>=k){
		n=n%k+n/k;
		ans+=n/k;
	}
	cout<<ans<<endl;
	return 0;
}
