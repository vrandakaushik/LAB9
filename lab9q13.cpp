#include<iostream>
using namespace std;

/*

 Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 

*/

int main(){
 	int arr[10]={9,8,6,2,3,4,11,2,1,2};
	cout<<"ARRAY PRINTED BY NORMAL INDEX METHOD"<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<",";
	}
	cout <<endl;
	int *p=arr;
	cout<<"ARRAY PRINTED USING POINTER METHOD"<<endl;
	for(int j=0;j<10;j++){
		cout<<*(p+j)<<",";
	}
	cout<<endl;
}
