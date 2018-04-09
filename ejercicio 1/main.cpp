#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int suma1(int n,int&m)//recibe un parametro por paso por valor y otro por paso por referencia
{
	return n+m;
}
void incremento(int &n)//recibe un parametro por paso por referencia
{
	n=n+1;
}

int main(int argc, char** argv) {
	int a=1,b=4,c;
	incremento(b);
	c=suma1(a,b);
	cout<<c;
}

