#include<bits/stdc++.h>
using namespace std;
int main(){
int no = 153;
int sum=0;
string str=to_string(153);
for(int i=0;i<str.length();i++){
	int a=str[i]-'0';
	sum=sum+pow(a,3);
}
cout<<sum;
return 0;
}


