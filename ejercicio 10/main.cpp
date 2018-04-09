#include <stdio.h>
#include <iostream>
using namespace std;
int str2int(char *str)
{
    int res = 0; //inicializamos el resultado
    for (int i = 0; str[i] != '\0'; ++i)
        res = res*10 + str[i] - '0';

    // return result.
    return res;
}

float str2float(char *x)
{
	float total=0, num;
	int df=10,i=0;
	bool decimal=false;
	while(x[i])
	{
		num=x[i]-'0';
		if(decimal)
		{
			num=num/df;
			df=df*10;
		}
		else if (!decimal && ( x[i]>='0' && x[i]<='9'))
			total=total*10;

		if(x[i]=='.' || x[i]==',' )
			decimal=true;
		else total+=num;

		i++;
	}
return total;
}
bool isDecimal(char *x)
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
void isIntorFloat(char *x)
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
// Driver program to test above function
int main()
{
    char str[100];
    cout<<"Ingrese un numero: ";
    cin>>str;
    isIntorFloat(str);
    return 0;
}

