#include <iostream>
using namespace std;
int main(){
	double k;
	double sum=0.0;
	cin>>k;
	for(int i=1;i<4000000;i++){
		sum+=1.0/i;
		if(k-sum<0){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
