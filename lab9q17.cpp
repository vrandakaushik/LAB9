/*

Strcpy
Strcat
Strlen
Strcmp
Strchr
Strstr

*/

// Importing Libraries


#include <iostream>

using namespace std;
int strlen(char*);

//display string
void display(char *dsp){
	for(int i = 0 ; i<strlen(dsp);i++){
		cout<<*(dsp+i);	
	}
	cout<<endl;
}

//copy strings
void strcpy(char *a1,char *a2){
	
	for (int i =0; i<strlen(a1);i++){
		*(a2+i)=*(a1+i);	
	}
}


void strcat(char *a1,char *a2, char *s3){
	int i;	
	for (i =0; i<strlen(a1)+strlen(a2);i++){
				
		if(i<strlen(a1))
			*(s3+i)=*(a1+i);
				
		else
			*(s3+i)=*(a2+i-strlen(a1));
	}
	*(s3+i)='\0';
}

//compare two strings
bool strcmp(char *a1,char*a2){
	bool b = true; 
	for (int i =0; i<strlen(a1);i++){
				
		if(*(a1+i)!=*(a2+i)){
			b=false;
			break;		
		}	
	}
	return b;
}
//length of string
int strlen(char* str){
	int i =0;
	
	while(*(str+i)!='\0'){
		i++;	
	}
	return i;
}

//search the first occurance of a character in a string
char* strchr(char *str, char c){
	int i = 0;
	
	while(*(str+i)!=c and i < strlen(str))
		i++;
	return str+i;
		
}
//search the first occurance of a character in a string
char* strstr(char *str, char *s){
	int i =0;
	
	int n1 = strlen(str);
	int n2 = strlen(s);
		while(i<n1){
		int j = 0;
		int k = i;
		while(j<n2){
			if(*(str+k)==*(s+j)){
				k++;
			}
			j++;			
		}
		if(k-i==n2)
			break;
		i++;
	}
	return str+i;
}

int main(){
	char a1 []="Hello";
	int n1 = strlen(a1);
	char a2 [n1];
	strcpy(a1,a2);
	display(a1);
	display(a2);
	char s3 [n1+n1];
	strcat(a1,a2,s3);
	display(s3);
	cout << strcmp(a1,a2)<<endl;
	cout << strcmp(a1,"hello")<<endl;
	cout << strlen(a1)<<endl;
	cout << *strchr(a2,'l')<<endl;
	cout << *strstr(a1,"el")<<endl;



	

	return 0;
}









