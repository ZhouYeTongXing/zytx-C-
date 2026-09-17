#include <iostream>
using namespace std;
int main(){
	string c=":";
	int i,a=0,b=0;
	string A;
	cin>>A;
	for(i=0;i<A.length();i++){
		if(A.substr(i,1)=="W"){
		a=a+1;	
		}
		else if(A.substr(i,1)=="L"){
			b=b+1;
		}
		else if(A.substr(i,1)=="E"){
			break;
		}
	}
	cout<<a<<c<<b<<endl;
	return 0;
}
