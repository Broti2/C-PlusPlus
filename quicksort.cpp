#include<iostream>
using namespace std;
void swapnum(int* a,int* b)
{
	int t= *a;
	*a = *b;
	*b =t;
}
int partition(int arr[],int low, int high)
{
	int pivot = arr[high]
	int i=low-1;
	for(int j=low;j<=high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swapnum(&arr[i],&arr[j]);
		}
	}
	swapnum(&arr[i+1],&arr[high]);
		return(i+1);
}
void quicksort(int arr[],int low, int high)
{
if(low<high)
{

	int pi=partition(arr,low,high);


	quicksort(arr,low,pi-1);
	quicksort(arr,pi+1,high);
}
}
int printarr(int arr[],int size)
{
	for(int k=0;k<size;k++)
	{
		cout<<arr[k]<<" ";
	}
	cout<<endl;
	return 0;
}
int main()
{
	int arr[]={9,3,2,5,6,4,1,};
	int n= sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);
	printarr(arr,n);
	return 0;
}