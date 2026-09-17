#include<iostream>
using namespace std;
int main(){
	int t,tm,n,i,ans,tot,cur;
	cin>>t;
	for(tm=1;tm<=t;tm++){
		cin>>n;
		int c[n],k[n],u[n];
		ans=0;
		for(i=0;i<n;i++){
			cin>>c[i]>>k[i];
			u[i]=0;
		}
		cin>>tot;
		while(u[0]<=k[0]){
			cur=0;
			for(i=0;i<n;i++){
				cur=cur+u[i]*c[i];
			}
			if(cur==tot){
				ans=ans+1;
			}
			u[n-1]=u[n-1]+1;
			for(i=n-1;i>0;i--){
				if(u[i]>k[i]){
					u[i]=0;
					u[i-1]++;
				}
			}
		}
		cout<<"CASE "<<tm<<endl;
		if(ans==0){
			cout<<"impossible"<<endl;
		}
		else{
			cout<<ans<<endl;
		}
	}
}

