#include <iostream>

using namespace std;

void merge(int *arr,int low,int high,int mid)
{
	int i,j,k,*temp;
	temp = new int[high-low+1];
	i=low;
	j = mid+1;
	k=0;

	while(i<=mid && j<=high)
	{
		if(arr[i] < arr[j])
		{
			temp[k] = arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = arr[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		temp[k] = arr[j];
		j++;
		k++;

	}

	for(i=low;i<=high;i++)
	{
		arr[i] = temp[i-low];
	}
}


void mergesort(int *arr,int low,int high)
{
	int mid;
	mid = (low+high)/2;

	if(low<high)
	{
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,high,mid);

	}
}


int main()
{

	int i;

	int arr[10] = {2,12,4,23,5,35,53,9,90,11};

	mergesort(arr,0,9);

	for(i=0;i<10;i++)
	{
		cout << arr[i]<< " ";
	}



}