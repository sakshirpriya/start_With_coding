#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ar[n];
for(int i=0;i<n;i++){
	cin>>ar[i];
}

int key,flag= -1;
cin>>key;

for(int i=0;i<n;i++){
	if(ar[i]==key){
		flag=i;
		break;
	}
}

if(flag>=0){
	cout<<flag<<endl;
}else{
	cout<<flag<<endl;
}

return 0;
}


