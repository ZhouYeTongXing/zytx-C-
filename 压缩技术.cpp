#include <iostream>
using namespace std;
int main(){
	int a,b=0,r=0,n;
	cin>>n;
	while(b<n*n){
		cin>>a;
		for(a=a;a>0;a--){
			b=b+1;
			if(b%n==1 && b>1){
				cout<<endl;
			}
			cout<<r%2;
		}
		r=r+1;
	}
	return 0;
}
