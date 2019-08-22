#include<bits/stdc++.h>
using namespace std;
string prime(int no){
	int flag=0;
//First Method worst o(N)
for(int i=2;i<no;i++){
	if(no%i==0){
		flag=-1;
		break;
	}
}
if(flag==0){
	return "Prime";
}else{
	return "NON-Prime";
}
}
int main(){
int no=20;
string result=prime(no);
cout<<result;
//second Method
//for(int i=2;i<=sqrt(no);i++){
//		if(no%i==0){
//		flag=-1;
//		break;
//	}
//}
//if(flag==0){
//	cout<<"\nPrime";
//}else{
//	cout<<"\nNON-Prime";
//}
return 0;
}


