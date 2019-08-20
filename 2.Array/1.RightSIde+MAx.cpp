//find the maximum right side big no from one particular element and return the max value;
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int  ar[n];
for(int i=0;i<n;i++){
	cin>>ar[i];
}
int max=0;

for(int i=0;i<n;i++){
	int count=0;
	for(int j=i+1;j<n;j++){
		if(ar[i]<ar[j]){
			count++;
		}
	}
	if(max<count){
		max=count;
	}
}
cout<<max;

return 0;
}

/*testcase:
 5
 4 5 3 2 1
out: 1

 3
 1 2 3
out: 2
*/
