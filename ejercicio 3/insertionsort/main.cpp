#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void insertionSort(int arr[],int size)
{
	int j,temp;
	for(int i=0;i<size;i++)
	{
		j=i;
		while(j>0 && arr[j-1]>arr[j])// comenzamos desde j=1 y siempre y cuando que arr[j-1]>arr[j] haremos un intercambio
		{
			temp=arr[j];  // guardamos a arr[j]=en temp
			arr[j]=arr[j-1];//le asignamos un nuevo valor a arr[j] que es arr[j-1]
			arr[j-1]=temp;  // y arr[j-1] le asignamos el valor de temp
			j--;           //y disminuye j;
		}
	}
}

int main(int argc, char** argv) {
	int size;
	cin>>size;
	int *numeros=new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>numeros[i];
	}
	cout<<endl;
	insertionSort(numeros,size);
	for(int i=0;i<size;i++)
	{
		cout<<numeros[i]<<" ";
	}
	return 0;
}
