#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int length(char *v)
{
	return (*v) ? 1 + length(v + 1) : 0; //retorna el tamaño de una cadena
}
void mostrar(char *v) //funcion que muestra el array
{
	for(int i=0;i<length(v);i++) 
	{
		cout<<*(v+i);
	}
}

char * invertir_cadena(char *cad)
{char *aux=cad,inter,*inicio=cad;
 while(*aux)          //hacemos avanzar al puntero aux a su ultima posicion
   aux++;
 aux--;              //hacemos disminuir en una posicion
 while(aux>cad)     //hacemos que aux sea copiado en cad de forma inversa
   {inter=*cad;     
    *cad=*aux;     
    *aux=inter;
    aux--;
    cad++;
   }
 return inicio;     //retornamos la cadena en forma inversa
}
 

void invertidor (char v[])
{
    int n=length(v);
    char inverso[n];

    for (int x=0, y=n-1; x<n && y>=0; x++, --y) 
    {
        *(inverso+x)=*(v+y);     // hacemos que inverso[i] copee de forma inversa el contenido de v[y] 
    }				// hasta que y sea  0
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
