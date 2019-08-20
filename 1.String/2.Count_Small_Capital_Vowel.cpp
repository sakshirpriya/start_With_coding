#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
getline(cin,str);
int Cap=0,small=0,Con=0,Vow=0;
for(int i=0;i<str.length();i++){
	if(str[i]>='a' and str[i]<='z'){
		small++;
		if(str[i]=='a' or str[i]=='i' or str[i]=='o' or str[i]=='e' or str[i]=='u'){
			Vow++;
		}
	}
		if(str[i]>='A' and str[i]<='Z'){
		Cap++;
		if(str[i]=='A' or str[i]=='I' or str[i]=='O' or str[i]=='E' or str[i]=='U'){
			Vow++;
		}
	}
}
Con=Cap+small;
cout<<Cap<<" "<<small<<" "<<Con<<" "<<Vow;
return 0;
}


