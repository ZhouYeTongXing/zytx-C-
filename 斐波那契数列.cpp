#include <iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	long long F[n];
	F[0]=1;
	F[1]=1;
	for(i=2;i<n;i++){
		F[i]=F[i-1]+F[i-2];
	}
	cout<<F[n-1]<<endl;
	return 0;
}
