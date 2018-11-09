#include<iostream>
#include<cstring>
using namespace std;

/*

 [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method.

*/


int main(){

	char name [] ="vranda1234";
	for(int i =0; i<sizeof(name)/sizeof(name[0]);i++){
		cout<<name[i]<<"\t";	
	}
	cout << endl;
	for(int i =0; i<sizeof(name)/sizeof(name[0]);i++){
		cout<<*(name+i)<<"\t";	
	}
		
	
	return 0;
}
