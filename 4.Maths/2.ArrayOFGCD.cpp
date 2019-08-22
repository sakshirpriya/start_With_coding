#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
//given array find gcd of array;
int n=5;
int ar[5]={1,4,8,10,6};
int first=ar[0];
for(int i=1;i<n;i++){
	first=gcd(first,ar[i]);	
}
cout<<first;


return 0;
}


