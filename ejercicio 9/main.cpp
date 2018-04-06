#include<iostream>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
char* palindroma(char*s)
{
	char *t=new char[10];
	int tam=strlen(s);
	for(int i=0;i<tam;i++){
		*(t+i)=*(s+tam-1-i);
	}
	*(t+tam)='\0';
	if (strcmp(t,s)==0)
		cout<<t<<" es palindroma";
	else
		cout<<"no es palindroma";
		*(t+tam)='\0';
}
int main(int argc, char** argv) {
	char *cad=new char[10];
	cout<<"Inserte la cadena: ";
	gets(cad);
	cout<<palindroma(cad);
}

