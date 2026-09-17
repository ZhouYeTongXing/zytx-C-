#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n,a,b,c;
	cin>>n>>b>>c;
	a=n++;
	b*=10;
	c/=10;
	cout<<a<<setw(2)<<b<<setw(2)<<c<<endl;
	return 0;
}
