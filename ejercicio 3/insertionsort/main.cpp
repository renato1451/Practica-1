#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void mostrar(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void insertionSort(int arr[],int size)
{
	int j,temp;
	for(int i=0;i<size;i++)
	{
		j=i;
		while(j>0 && arr[j-1]>arr[j])
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
}
void merge(int *arr,int *p,int *q,int sizep,int sizeq)
{
	int i=0,j=0,k=0;
	while(i<sizep && j<sizeq)
	{
		 if(p[i]<=q[j])
		 {
		 	arr[k]=p[i];
		 	k++;
		 	i++;
		 }
		 else
		 {
		 	arr[k]=q[j];
		 	k++;
		 	j++;
		 }
	}
	while(i<sizep)
	{
		arr[k]=p[i];
		k++;i++;
	}
	while(j<sizeq)
	{
		arr[k]=p[j];
		k++;j++;
	}
}
void mergeSort(int *arr,int size)
{
	if(size==1)
	{
		return;
	}
	int inicio=0;
	int final=inicio + size -1 ;
	int medio=(inicio + final)/2;
	int sizep=medio-inicio + 1;
	int sizeq=final-medio;
	int *p=new int[sizep];
	int *q=new int[sizeq];
	for(int i=inicio;i<=medio;i++)
	{
		p[i]=arr[i];
	}
	for(int i=medio + 1;i<=final;i++)
	{
		q[i-medio-1]=arr[i];
	}
	mergeSort(q,sizeq);
	mergeSort(p,sizep);
	merge(arr,p,q,sizep,sizeq);
	
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
	//insertionSort(numeros,size);
	//mostrar(numeros,size);
	mergeSort(numeros,size);
	for(int i=0;i<size;i++)
	{
		cout<<numeros[i]<<" ";
	}
	return 0;
}
