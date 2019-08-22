#include<bits/stdc++.h>
using namespace std;
void call(int no){
	while(no%2==0){
		cout<<2<<" ";
		no/=2;//n=n/2;
	}
	for(int i=3;i<=sqrt(no);i=i+2){
		while(no%i==0){
			cout<<i<<" ";
			no/=i;
		}
	}
	if(no>2){
		cout<<no<<" ";
	}
}
int main(){
//find prime factors of given no
// 16 = 2 2 2 2
// 25 5 5 
// 63 3 3 7
int no;
no=2310;
call(no);

return 0;
}


