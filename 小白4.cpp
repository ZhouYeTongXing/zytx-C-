#include <iostream>
using namespace std;
int main(){
	int m=8;
	int g;
	char j;
	char a='y';
	cin>>g>>j;
	if(j==a)
	    m=m+5;
    else
	    m=8;
	if(g>1000)
	    if(g%500==0)
	        cout<<m-8+4*(g/500)<<endl;
	    else
	        cout<<m-4+4*(g/500)<<endl;
	else if(g<=1000)
	         cout<<m<<endl;
	return 0;
}
