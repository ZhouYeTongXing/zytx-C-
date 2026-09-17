#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int ans=0;
	cin>>n;
	char a[10][10]={0};
	for(int k=0;k<n;k++){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				cin>>a[i][j];
				if(a[i][j]=='X'&&(i=1||i=10||j=1||j=10)){
					ans+=1;
				}
				if(a[i][j]=='X'&&((i==2&&2<=j<=9)||(i==9&&2<=j<=9)||(j==2&&2<=i<=9)||(j==9&&2<=i<=9))){
					ans+=2;
				}
				if(a[i][j]=='X'&&((i==3&&3<=j<=8)||(i==8&&3<=j<=8)||(j==3&&3<=i<=8)||(j==8&&3<=i<=8))){
					ans+=3;
				}
				if(a[i][j]=='X'&&((i==4&&4<=j<=7)||(i==7&&4<=j<=7)||(j==4&&4<=i<=7)||(j==7&&4<=i<=7))){
					ans+=4;
				}
				if(a[i][j]=='X'&&((i==5&&5<=j<=6)||(i==6&&5<=j<=6)||(j==5&&5<=i<=6)||(j==6&&5<=i<=6))){
					ans+=5;
			    }
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
