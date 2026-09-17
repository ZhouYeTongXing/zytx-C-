#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	double d=sqrt(2.0);
	cout<<"精度设置:"<<endl;
	for(int i=0;i<5;i++){
		cout<<setprecision(i)<<d<<endl;//设置不同的精度 
	}
	cout<<"当前精度"
}
