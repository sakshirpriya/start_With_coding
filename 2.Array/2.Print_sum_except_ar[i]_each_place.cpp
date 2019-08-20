#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ar[n];
int sum=0;
for(int i=0;i<n;i++){
	cin>>ar[i];
	sum+=ar[i];
}
cout<<sum<<endl;
for(int i=0;i<n;i++){
	cout<<sum-ar[i]<<" ";
}
return 0;
}
/*
5
1 2 3 4 5 
out: 14 13 12 11 10

4
3 3 3 3
9 9 9 9

*/

