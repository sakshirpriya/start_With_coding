#include<bits/stdc++.h>
using namespace std;
int BS(int ar[],int n,int key){
	int left=0;
	int right=n-1;
	while(left<=right){
		int mid=left + (right-left)/2;
		if(ar[mid]==key){
			return mid;
		}
		if(ar[mid]>key){
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	return -1;
}
int main(){
int ar[7]={1,2,3,4,5,6,7};
cout<<BS(ar,7,5);

return 0;
}


