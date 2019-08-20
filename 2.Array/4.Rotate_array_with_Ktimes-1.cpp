#include<bits/stdc++.h>
using namespace std;
int main(){
int n=7;
int ar[n]={1,2,3,4,5,6,7};
int d=3;
int temp1[d];
int temp2[n-d];
int j=0;
for(int i=0;i<n;i++){
	if(i<3){
		temp1[i]=ar[i];
	}else{
		temp2[j]=ar[i];
		j++;
	}
}
j=0;
for(int i=0;i<n;i++){
	if(i<(n-d)){
		ar[i]=temp2[i];
	}else{
		ar[i]=temp1[j];
		j++;
	}
}

for(int i=0;i<n;i++){
	cout<<ar[i]<<" ";
}
return 0;
}
/*

7
2
1 2 3 4 5 6 7
out:3 4 5 6 7 1 2

5 
3
4 5 6 3 2
3 2 4 5 6
*/


