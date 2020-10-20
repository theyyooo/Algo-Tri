void swap(float *a, float *b)
{
	float temp = *a;
	*a = *b;
	*b = temp;
}


void heapify(float *arr, int n, int i, int ascending)
{
	int largest = i;
	int left = (i << 1) + 1;
	int right = (i << 1) + 2;

	if (left < n && (arr[left] > arr[largest]) ^ !ascending)
		largest = left;

	if (right < n && (arr[right] > arr[largest]) ^ !ascending)
		largest = right;

	//while root is not max
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, n, largest, ascending);
	}
}


void heapsort(float *tab, int size, int ascending)
{
	for (int i = size / 2 - 1; i >= 0; i--)
		heapify(tab, size, i, ascending);
	for (int i = size - 1; i >= 0; i--)
	{
		swap(&tab[0], &tab[i]);
		heapify(tab, i, 0,ascending);
	}
}