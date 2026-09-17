#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n,k;
	for(int i=0;i<t;i++){
		cin>>n>>k;
        if(n<=k){
        	if(k%n==0){
        		cout<<k/n<<endl;
			}
			else{
				cout<<k/n+1<<endl;
			}
		}
		if(n>k){
			if(n%k==0){
				cout<<1<<endl;
			}
			else{
				k*=n/k+1;
				cout<<k/n+1<<endl;
			}
		}
	}
	return 0;
}
