#include <iostream>
using namespace std;

/* Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables.
*/

int main(){
	int a;
	int *A =&a;
	cout<<"size of int: "<<sizeof(a)<<endl;
	cout<<"size of pointer of int:"<<sizeof(A)<<endl;
	float b;
	float *B=&b;
	cout<<"size of float:"<<sizeof(b)<<" and size of its pointer is:"<<sizeof(B)<<endl;
	char f;
	char *F=&f;
	cout<<"size of char:"<<sizeof(f)<<" and size of its pointer:"<<sizeof(F)<<endl;
	bool d;
	bool *D=&d;
	cout<<"size of bool:"<<sizeof(d)<<" and size of its pointer : "<<sizeof(D)<<endl;
}

