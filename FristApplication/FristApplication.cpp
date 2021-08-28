
#include <iostream> 
#include <queue> 
#include <stack> 

using namespace std;


void Swap(int& A, int& B)
{
	int t = A;A = B;B = t;
}
void bubbleSort(int a[], int L)
{
	for (int i = L - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (a[j] > a[j + 1])
				Swap(a[j], a[j + 1]);
}
void bubbleSort2(int data[], int size)
{
	bool done = false; 
	int tmp;
	while (!done)
	{
		done = true;
		for (int i = 1; i < size; i++)
			if (data[i - 1] > data[i])
			{
				tmp = data[i - 1];
				data[i - 1] = data[i];
				data[i] = tmp;
				done = false;
			}
	}
}
void selectionSortNR(int data[], int size)
{
	int Min, tmp;
	for (int m = size - 1; m > 0; m--)
	{
		Min = 0;
		for (int i = 1; i <= m; i++){
			if (data[i] > data[Min]){
				Min = i;
			}

		}
				Swap( data[m], data[Min]);
			
	}
}
void selectionSortR(int data[], int m)
{
	
	int pos = 0, tmp;
	for (int i = 1; i <= m; i++)
		if (data[i] > data[pos])
			pos = i;
	//Swap(data[pos], data[m]);
	tmp = data[pos];		// these 3 lines
	data[pos] = data[m];	// are a swap
	data[m] = tmp;	
	
	selectionSortR(data, m - 1);
}
void insertionSort(int data[], int size)
{
	int j, tmp;
	for (int i = 1; i < size; i++)
	{
		j = 0;
		tmp = data[i];


		while ((data[j] < tmp) && (j < i)) {
			j++;
			for (int k = i; k > j; k--)
				data[k] = data[k - 1];
			data[j] = tmp;
		}
	}
	
}


int main()
{
	int a[] = { 2, 6, 3, 1, 5 };


	insertionSort(a, 5);


	for (int i = 0; i < 5; i++)
		cout << a[i] << ' ';


	return 0;
}

