#include<bits/stdc++.h>
using namespace std;
bool prime(int no){
	int flag=0;
//First Method worst o(N)
for(int i=2;i<no;i++){
	if(no%i==0){
		flag=-1;
		break;
	}
}
if(flag==0){
	return true;
}else{
	return false;
}
}
int main(){
int no=100;
for(int i=0;i<=100;i++){
	if(prime(i)){
		cout<<i<<" ";
	}
}

return 0;
}


