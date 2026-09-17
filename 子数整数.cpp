#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	int d=0;
	int w[5];
	int n;
	cin>>n;
	for(int i=10000;i<30001;i++){
		w[0]=i/10000;
		w[1]=(i%10000)/1000;
		w[2]=(i%1000)/100;
		w[3]=(i%100)/10;
		w[4]=i%10;
		a=w[0]*100+w[1]*10+w[2];
		b=w[1]*100+w[2]*10+w[3];
		c=w[2]*100+w[3]*10+w[4];
		if(a%n==0&&b%n==0&&c%n==0){
			cout<<i<<endl;
			d+=1;
		}
		}
		if(d==0){
			cout<<"No"<<endl;
		}
		return 0;
}
