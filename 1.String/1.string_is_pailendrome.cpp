#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
getline(cin,str);
cout<<str<<endl;
int l=str.length();
cout<<l;
for(int i=0;i<l;i++){
	cout<<str[i]<<endl;
}
int left=0,right=l-1,flag=0;
while(left<right){
	if(str[left]!=str[right]){
		flag=1;
		break;
	}
	left++;
	right--;
}
if(flag==0){
	cout<<"Palirm";
}else{
	cout<<"not";
}
return 0;
}


