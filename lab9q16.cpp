#include<iostream>
using namespace std;

/*
Contrary to Exercise 5, here, we want to show string repeatedly by shifting top character of string from right to left. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement.
*/
#include <stdio.h>

int main(void)
{
char str[20], *p;

cout << "Input about 10 characters of string\n";
cin >> str;

// Pointer variable refers to address of string 
   p=&str[0];

// Show string by shifting top character of string to right
for(int j=10;j>=0;j--){
	for(int i=0;i<j;i++){
		cout<<*(p+i);
	}
cout<<endl;
}
return (0);
}
