#include <iostream>
#include <math.h>
using namespace std;
int to_int(string str)
{
	int num = 0,size=str.size();
 
	for (int i=0,j=size; i<size; i++)
	{
		num+=(str[--j]-'0')*pow(10,i);
	}
 
	return num;
} 

int main ()
{
	string s;
	cout<<"Ingrese el numero: ";
	cin>>s;
	int num=to_int(s);
	cout<<num;
}
