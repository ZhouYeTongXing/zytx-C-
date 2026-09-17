#include <iostream>
using namespace std;
int main(){
	int i,l,k;
	int a[10];
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>l;
	k=0;
	for(i=0;i<10;i++){
		if(l+30>=a[i]){
			k=k+1;
		}
	}
	cout<<k;
	return 0;
} 
