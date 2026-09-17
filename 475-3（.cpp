#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
    return a<b;
}
int abss(int n){
    if(n<0){
        return -n;
    }
    return n;
}
int main(){
    int i,n,p=0,l,r;
    long long ans=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            p=p+1;
        }
    }
    sort(a,a+n,cmp);
    if(p==0){
        cout<<a[n-1];
        return 0;
    }
    if(p==n){
        cout<<-a[0];
        return 0;
    }
    if(-a[p-1]>a[p]){
        l=p-1;
        r=p+1;
        ans=ans+a[p];
    }
    else{
        l=p-2;
        r=p;
        ans=ans-a[p-1];
        p=p-1;
    }
    for(i=0;i<n;i++){
        if(l<0){
            cout<<ans-a[0]+a[n-1];
            return 0;
        }
        if(r>=n){
            cout<<ans-a[0]+a[n-1];
            return 0;
        }
        if(a[p]-a[l]>a[r]-a[p]){
            ans=ans+a[r]-a[p];
            p=r;
            r=r+1;
        }
        else{
            ans=ans+a[p]-a[l];
            p=l;
            l=l-1;
        }
    }
    cout<<ans;
    return 0;
}
