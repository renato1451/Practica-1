#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int sumae(int a[],int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return a[n-1]+ sumae(a,--n);
	}
	
}
int sumai(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum + a[i];
	}
	return sum;
}
int main(int argc, char** argv) {
	int n;
	cout<<"ingrese la longitud de la cadena: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"suma recursiva: "<<sumae(a,n)<<endl;
	cout<<"suma iterativa: "<<sumai(a,n)<<endl;
}

