/*
1.find the sum of all integers present in string.
2. where any integers present replace with '*'
3. then make all '*' in starting and integers after *.
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(){
string str="12sd65d88d99";
char a='a';
int sum=0;
/**************************************/

for(int i=0;i<str.length();i++){
	if(str[i]>='0' and str[i]<='9'){
		sum=sum+str[i]-'0';
	}
}
cout<<sum<<endl;

/*****************************************/
for(int i=0;i<str.length();i++){
	if(str[i]>='0' and str[i]<='9'){
		str[i]='*';
	}
}
cout<<str<<endl;

/*****************************************/
string s="";
string s1="";
for(int i=0;i<str.length();i++){
	if(str[i]=='*'){
		s1+=str[i];
	}else{
		s=s+str[i];
	}
}
cout<<s1<<endl<<s<<endl;
str=s1+s;
cout<<str;

return 0;
}


