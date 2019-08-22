//https://practice.geeksforgeeks.org/problems/number-of-occurrence/0
#include<bits/stdc++.h>
using namespace std;
int main(){
int n=10;
int ar[n]={1,1,2,2,2,3,3,3,3,4};
int ar1[5]={};
for(int i=0;i<n;i++){
	int temp=ar[i];
	ar1[temp]++;
}
for(int i=1;i<=5;i++){
	cout<<ar1[i]<<" ";
}
int min,max;
int x=2;
for(int i=0;i<n;i++){
	if(ar[i]==x){
		min=i;
		break;
	}
}
for(int i=9;i>=0;i--){
	if(ar[i]==x){
		max=i;
		break;
	}
}
//cout<<max-min+1;
return 0;
}


