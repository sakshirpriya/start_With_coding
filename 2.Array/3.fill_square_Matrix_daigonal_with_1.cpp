#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int m[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>m[i][j];
	}
}
for(int i=0;i<n;i++){
		m[i][i]=1;	
}
int k=0;
for(int i=n-1;i>=0;i--){
	m[k][i]=1;
	k++;
}
//print the matrix
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<m[i][j]<<" | ";
	}
	cout<<"\n";
}
return 0;
}


