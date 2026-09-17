#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int n;
	double a=0;
	double b=0;
	double c=0;
	double d=0;
	int f[100]; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>f[i];
		if(f[i]<19)
		a=a+1;
		if(f[i]>=19 && f[i]<36)
		b=b+1;
		if(f[i]>=36 && f[i]<61)
		c=c+1;
		if(f[i]>=61)
		d=d+1;
	}
	a=a*100;
	b=b*100;
	c=c*100;
	d=d*100;
	cout<<fixed<<setprecision(2)<<(static_cast<double>(a)/n)<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<(static_cast<double>(b)/n)<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<(static_cast<double>(c)/n)<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<(static_cast<double>(d)/n)<<"%"<<endl;
    return 0;
}
