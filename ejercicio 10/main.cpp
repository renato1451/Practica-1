#include <stdio.h>
#include <iostream>
using namespace std;
int str2int(char *str)
{
    int res = 0; //inicializamos el resultado
    for (int i = 0; str[i] != '\0'; ++i)
        res = res*10 + str[i] - '0'; // hacemos una convercion del string a entero atravez del codigo ascii

    // retornamos el resultado.
    return res;
}

float str2float(char *x)
{
	float total=0, num;
	int df=10,i=0;
	bool decimal=false;
	while(x[i])            // mientras x tenga elementos
	{
		num=x[i]-'0';  // a la diferencia de codigo ascii 
		if(decimal)
		{
			num=num/df;   
			df=df*10;
		}
		else if (!decimal && ( x[i]>='0' && x[i]<='9'))
			total=total*10;

		if(x[i]=='.' || x[i]==',' ) //busca la coma  o el punto para saber si es un numero decimal
			decimal=true;
		else total+=num;

		i++;
	}
return total;
}
bool isDecimal(char *x) //funcion booleana que devuelve true si ecuentra una coma o un punto
{
    bool decimal=false;
    int i=0;
    while (x[i])
    {
        if(x[i]=='.' || x[i]==',' )
			decimal=true;
		i++;
    }
    return decimal;
}
void isIntorFloat(char *x) //hace la conversion de cualquier numero a un numero decimal o a un numero entero
{
   if (isDecimal(x)==true)
   {
       cout<<str2float(x);
   }
   else                         
   {
       cout<<str2int(x);
   }
}

int main()
{
    char str[100];
    cout<<"Ingrese un numero: ";
    cin>>str;
    isIntorFloat(str);
    return 0;
}

