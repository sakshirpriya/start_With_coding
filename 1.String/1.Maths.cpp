//#include<bits/stdc++.h>
//using namespace std;
//int main(){
////char a='A';
////for(int i=0;i<26;i++){
////	cout<<a++<<" => "<<int(a)<<endl;
////}
////int a=1;
////cout<<int(a+'0');
////char c='7';
////cout<<c-48;
//
//string str;
//getline(cin,str);
////cout<<str;
//int l=str.length();
////cout<<l<<endl;
////cout<<int('?');
//int AsciiSum=0;
//for(int i=0;i<str.length();i++){
//	char x=str[i];
//	if(x>='a' and x<='z' or x>='A' and x<='Z'){
//			AsciiSum+=int(x);
//			cout<<x<<" "<<int(x)<<endl;
//	}
//	else if(x>='0' and x<='9'){
//		AsciiSum+=int(x+'0');
//		cout<<x<<" "<<int(x+'0')<<endl;
//	}else{
//		AsciiSum+=int(x);
//		cout<<x<<" "<<int(x)<<endl;
//	}
//	}
//	cout<<AsciiSum;
//
//return 0;
//}
/*******************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
//char a='A';
//for(int i=0;i<26;i++){
//	cout<<a++<<" => "<<int(a)<<endl;
//}
//int a=1;
//cout<<int(a+'0');
//char c='7';
//cout<<c-48;

string str;
getline(cin,str);
//cout<<str;
int l=str.length();
//cout<<l<<endl;
//cout<<int('?');
int AsciiSum=0;
for(int i=0;i<str.length();i++){
	char x=str[i];
	if(x>='a' and x<='z' or x>='A' and x<='Z' or x>='0' and x<='9'){
			AsciiSum+=int(x);
			cout<<x<<" "<<int(x)<<endl;
	}
	
	}
	cout<<AsciiSum;

return 0;
}




