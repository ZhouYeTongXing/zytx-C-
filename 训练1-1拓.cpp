#include<iostream>
using namespace std;
int main(){
	const double pi=3.14159;
	double r,v;
	cout<<"圆的半径为：";
	cin>>r;
	v=1.33333*pi*r*r*r;
	cout<<"圆的体积为："<<v<<endl;
	return 0;
}
