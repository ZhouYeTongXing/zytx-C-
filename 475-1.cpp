#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,s,l;
	cin>>n>>s>>l;
	s=s+1;
	vector<long long> a(n-1);
	int ans=1;
	unsigned long long p=0;
	for(int i=0;i<n-1;i++){
		cin>>a[i];
	}
	a.insert(a.begin(),1e30);
	a.insert(a.end(),1e30);
	while(a.size()>2){
		if(s-1<0) s=1;
		if(s>=(long long)a.size()) s=a.size()-1;
		if(a[s-1]<=a[s]){
			p+=a[s-1];
			a[s-1]=a[s-1]+a[s];
			a.erase(a.begin() + s);
			s=s-1;
			ans+=1;
		}
		else{
			p+=a[s];
			a[s-1]=a[s-1]+a[s];
			a.erase(a.begin() + s);
			ans+=1;
		}
		if(p>l){
			cout<<ans-1<<endl;
			return 0;
		}
	}
	cout<<ans<<endl;
    return 0;
}
