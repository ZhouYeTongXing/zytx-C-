#include <iostream>
using namespace std;
long long power(int a,int n){
	int ans=1;
	for(n=n;n>0;n--){
		ans=ans*a;
	}
	return ans;
}
int main(){
	int i,j,p,m,n;
	int dig[10];
	for(i=0;i<10;i++){
		dig[i]=0;
	}
	cin>>m>>n;
	for(i=m;i<=n;i++){
		for(p=0;power(10,p)<=i;p++);
		for(j=0;j<p;j++){
			dig[(i%power(10,j+1)-i%power(10,j))/power(10,j)]++;
		}
	}
	for(i=0;i<10;i++){
		cout<<dig[i]<<" ";
	}
	return 0;
}
