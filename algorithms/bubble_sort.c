#include <stdio.h>

void bubble_sort(int arr[5], size_t size);

int main(void)
{

	int arr[5] = {6, 5, 7, 9, 1};
	
	bubble_sort(arr, 5);

	return 0;
}

void bubble_sort(int arr[], size_t size)
{
	int trocou;
	int cpy;
	for (int i = 0; i < size - 1; i++) {
		trocou = 0;
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				cpy = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = cpy;
				trocou = 1;
			}
		}
		if (trocou == 0) {
			break;
		}
	}
	for (int i= 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	puts("\n");
}
