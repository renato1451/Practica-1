 #include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int length(char *s)
{
    return (*s) ? 1 + length(s + 1) : 0; //retorna el tamaño de una cadena
}
void mostrar(char v[])
{
	for(int j=0;j<(length(v));j++)
	{
		cout<<*(v+j);
	}
}
void concatenar(char *v,char *m)
{
	int d=length(v);
	for(int i=0;i<(length(v)+length(m));i++)      //recorre en el rango de la suma de los dos tamaños de las cadenas dadas
	{
		*(v+i+d)=*(m+i);                    // concatena en la ultima posicion de v a todos los character de m
	}
	return mostrar(v);
}
char* concatenar1(char *v,const char *m)
{
	const char *p;
	char *q;
	for(q=v;*q;q++);                  // con este for hacemos que vaya hasta su ultima posicion
	for(p=m;*p;p++,q++) *q=*p;       //concatenamos apartir de una ultima posicion
	*q='\0';                      //asignamos a *q el character vacio para cerrar el array
	return v;
}
int main(int argc, char** argv) {
	char *a=new char[80];
	char *b=new char[80];
	char x[50],y[50];
	cout<<"Ingrese la cadena: ";
	gets(a);
	cout<<"Ingrese la cadena: ";
	gets(b);
	cout<<"resultado con solo punteros: ";
	cout<<concatenar1(a,b)<<endl;
	cout<<"Ingrese la cadena: ";
	gets(x);
	cout<<"Ingrese la cadena: ";
	gets(y);
	cout<<"resultado con arreglos: ";
	concatenar(x,y);
}
