#include<bits/stdc++.h>
using namespace std;
string removeSpaces(string str) 
{ 
    int i = 0, j = 0;
	//declare an empty string s 
	string s="";
    while (str[i]) 
    { 
        if (str[i] != ' ') {
	  s+=str[i]; 
}
         

        i++; 
    } 
     
    return s; 
} 
  
// Driver program to test above function 
int main() 
{ 
    string str1 = "nikh i l k umar"; 
str1=removeSpaces(str1) ;
    cout << str1<< endl; 
  
    return 0; 
}
