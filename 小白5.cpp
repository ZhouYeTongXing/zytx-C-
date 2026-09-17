#include<iostream>
using namespace std;
int main(){
	int n;
	int a=0;
	int ans=0;
	cin>>n;
	for(int i=1;i<200;i++){
		if(2*n>=i*(i+1))
		a=a+1;
	}
	for(int i=0;i<=a;i++){
		ans=ans+i*i;
	}
	ans=ans+(n-a*(a+1)/2)*(a+1);
	cout<<ans<<endl;
	return 0;
}
