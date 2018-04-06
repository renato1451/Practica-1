#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int longitud(char *s)
{
    return (*s) ? 1 + longitud(s + 1) : 0;
}

int tamano(char s[])
{
	int cont=0;
	for(int i=0;s[i]!='\0';i++){	
		cont++;
	}
	return cont;
}

int main(int argc, char** argv) {
	char *p=new char[100];
	char cad[100];
	cout<<"ingrese cadena: "; 
	gets(p);
	cout<<"ingrese cadena: "; 
	gets(cad);
	cout<<longitud(p)<<endl;
	cout<<"el tamano de la cadena "<<tamano(cad)<<endl;
}
