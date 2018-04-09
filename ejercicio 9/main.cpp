#include<iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int length(char *v)
{
    return (*v) ? 1 + length(v + 1) : 0; //retorna el tamaño de una cadena
}
int comparar(const char* s1, const char* s2)
{
    while(*s1 && (*s1==*s2))
        s1++,s2++;
    return *(const unsigned char*)s1-*(const unsigned char*)s2;  //devuelve 1 cuando las cadenas no son iguales
								// devuelve 0 cuando las cadenas son iguales
}
char* palindroma(char*s) //verifica si una palabra es palindroma o no 
{
	char *t=new char[10];
	int tam=length(s);
	for(int i=0;i<tam;i++){
		*(t+i)=*(s+tam-1-i);
	}
	*(t+tam)='\0';
	if (comparar(t,s)==0)
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
