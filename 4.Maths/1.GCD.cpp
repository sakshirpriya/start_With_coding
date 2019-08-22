#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	//base 
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
int a=16,b=4;
cout<<__gcd(a,b)<<endl;
cout<<gcd(a,b)<<endl;
// hcf = (a*b)/gcd(a,b);
cout<<(a*b)/gcd(a,b);
return 0;
}


