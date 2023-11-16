#include <stdio.h>

void bubbleSort(int arr[], int n);

int main() 
{
	const int size = 10;
	int arr[] = { 64, 34, 25, 12, 22, 11, 90, 88, 45, 73 };

	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");

	bubbleSort(arr, size);

	for (int i = 0; i < size; ++i) 
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
void bubbleSort(int arr[], int n) {
	int swapped;
	for (int pass = 0; pass < n - 1; ++pass) 
	{
		swapped = 0;
		for (int i = 0; i < n - pass - 1; ++i)
		{
			if (arr[i] > arr[i + 1]) 
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = 1;
			}
		}
		if (!swapped) break;
	}
}
