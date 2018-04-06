#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int length(char *v)
{
    return (*v) ? 1 + length(v + 1) : 0;
}
void mostrar(char v[])
{
	for(int j=0;j<(length(v));j++)
	{
		cout<<*(v+j);
	}
}
void copiar(char v[],char m[])
{
	int d=length(v);
	for(int i=0;i<(length(v)+length(m));i++)
	{
		*(v+i)=*(m+i);
	}
	return mostrar(v);
}
char* copy(char *v,const char *m)
{
	const char *p;
	char *q;
	for(p=m;*p;p++,q++) *q=*p;
	*q='\0';
	return v;
}
int main(int argc, char** argv) {
	char *a=new char[40];
	char *b=new char[40];
	char x[40],y[40];
	cout<<"ingrese cadena: ";
	gets(a);
	cout<<"ingrese cadena: ";
	gets(b);
	cout<<"ingrese cadena: ";
	gets(x);
	cout<<"ingrese cadena: ";
	gets(y);
	cout<<copy(a,b);
	copiar(x,y);
	
	return 0;
}
