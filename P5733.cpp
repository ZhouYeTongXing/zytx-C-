#include <bits/stdc++.h>
using namespace std;
int main(){
	char s[110];
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
		if('a'<=s[i]&&s[i]<='z'){
			s[i]-='a'-'A';
		}
	}
	cout<<s<<endl;
	return 0;
}
