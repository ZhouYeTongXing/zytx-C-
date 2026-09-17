#include <iostream>
using namespace std;
int main(){
    int a[2][8];
    int l[8];
    for(int i=1;i<=7;i++){
        for(int j=0;j<2;j++)
            cin>>a[j][i];
        l[i]=a[0][i]+a[1][i];
    }
    int day=0;
    for(int i=0;i<=7 ;i++){
        l[0]=8;
		if(l[i]>8 && l[i]>l[day])day=i;
    }
    cout<<day;
    return 0;
}
