#include <bits/stdc++.h>
using namespace std;

int Partition2(int r[],int low,int high){
	int i=low,j=high,pivot=r[low];
	while(i<j){
	    while(i<j&&r[j]>pivot) j--;
	    while(i<j&&r[i]<=pivot) i++;
	    if(i<j)
	    swap(r[i++],r[j--]);
    }
    if(r[i]>pivot){
    	swap(r[i-1],r[low]);
    	return i-1;
    }
    swap(r[i],r[low]);
    return i;
}
