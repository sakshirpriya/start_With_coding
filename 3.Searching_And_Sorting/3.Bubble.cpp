#include<bits/stdc++.h>
using namespace std;
int main(){
int ar[10]={4,5,6,87,1,88,10,2,3,5};
int n=10;
for(int i=0;i<n-1;i++){
	
	for(int j=0;j<n-i-1;j++){
		
		if(ar[j]>ar[j+1]){
			int temp=ar[j];
			ar[j]=ar[j+1];
			ar[j+1]=temp;
		}
	}
}
for(int i=0;i<n;i++){
	cout<<ar[i]<<" ";
}
return 0;
}


