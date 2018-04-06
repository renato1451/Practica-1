#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int length(char *v)
{
	return (*v) ? 1 + length(v + 1) : 0; 
}
void mostrar(char *v)
{
	for(int i=0;i<length(v);i++)
	{
		cout<<*(v+i);
	}
}

char * invertir_cadena(char *cad)
{char *aux=cad,inter,*inicio=cad;
 while(*aux)
   aux++;
 aux--;
 while(aux>cad)
   {inter=*cad;
    *cad=*aux;
    *aux=inter;
    aux--;
    cad++;
   }
 return inicio;
}
 

void invertidor (char v[])
{
    int n=length(v);
    char inverso[n];

    for (int x=0, y=n-1; x<n && y>=0; x++, --y)
    {
        *(inverso+x)=*(v+y);
    }
    *(inverso+n) = '\0';

    return mostrar(inverso);
}

int main(int argc, char** argv) {
	char a[20];
	char *b=new char[30];
	cout<<"Ingrese cadena: ";
	gets(a);
	cout<<"Ingrese cadena: ";
	gets(b);
	cout<<invertir_cadena(b)<<endl;
	invertidor (a);
	
	return 0;
}
