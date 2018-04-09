 #include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void merge(int a[], int startIndex, int endIndex)
{

int size = (endIndex - startIndex) + 1; //decimos que size es igual al indice final menos el inicial
int *b = new int [size]();  // inicializamos el puntero a entero b con memoria dinamica que seria una matriz de combinacion temporal

int i = startIndex;             // i es para la izquierda
int mid = (startIndex + endIndex)/2; // el medio esta declarado como la suma del (inicio mas el final)/2
int k = 0;              //k es para el array temporal
int j = mid + 1;        // j es para la derecha

while (k < size)
{
    if((i<=mid) && (a[i] < a[j]))
    {
        b[k++] = a[i++];
    }
    else
    {
        b[k++] = a[j++];
    }

}

for(k=0; k < size; k++)
{
    a[startIndex+k] = b[k];
}

delete []b;

}

//The recursive merge sort function
void merge_sort(int iArray[], int startIndex, int endIndex) 
{
int midIndex;

//Check for base case
if (startIndex >= endIndex)
{
    return;
}

//Primero divide el arreglo en 2 partes
midIndex = (startIndex + endIndex)/2;

//Primera llamada recursiva
merge_sort(iArray, startIndex, midIndex); //recorre la izquierda
//segunda llamada recursiva
merge_sort(iArray, midIndex+1, endIndex); // recorre la deracha
//Tercera llamada recursiva
merge(iArray, startIndex, endIndex); 

}

//The main function
int main(int argc, char *argv[])
{
int iArray[10] = {2,5,6,4,7,2,8,3,9,10};

merge_sort(iArray, 0, 9);

//Print the sorted array
for(int i=0; i < 10; i++)
{
    cout << iArray[i] << " ";
}

return 0;
}
