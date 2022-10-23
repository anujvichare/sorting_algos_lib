#include <iostream>
using namespace std;

bool MergeSortedArrays(int mainArr[], int first, int mid, int last)
{
	int indexMain =0; int indexFirst =0; int indexSecond = mid+1;

	int* temp = new int[20];

	while(indexFirst < mid+1 && indexSecond < last+1)
	{

		if(mainArr[indexFirst] < mainArr[indexSecond])
		{
			temp[indexMain++] = mainArr[indexFirst++];
		}
		
		else if(mainArr[indexFirst] > mainArr[indexSecond])
		{
			temp[indexMain++] = mainArr[indexSecond++];
		}

		else
		{
			temp[indexMain++] = mainArr[indexFirst++];
			temp[indexMain++] = mainArr[indexSecond++];
		}
	}

	while( indexFirst < mid+1)
	{
		temp[indexMain++] = mainArr[indexFirst++];
	}
	while(indexSecond < last+1)
	{
		temp[indexMain++] = mainArr[indexSecond++];
	}

	for(int i = 0;i < last+1 ; i ++)
	{
		mainArr[i] = temp[i];
		cout << mainArr[i] << "-";

	}
	cout <<endl;
	delete[] temp;

	return true;
}


void MergeSort(int arr[], int startIndex, int endIndex)
{
	
	if(startIndex >=  endIndex)
		return;

	int mid = startIndex + (endIndex - startIndex) / 2;
	MergeSort(arr, startIndex, mid);
	MergeSort(arr, mid+1, endIndex);

	MergeSortedArrays(arr, startIndex, mid, endIndex);

}

int main()
{
	int main[8] = {35678, 20000, 9999, 9876, 3554, 500, 14, 1};
	//int main[8] = {100, 2, 660 , 3600, 3, 2500, 0, 1690};

	//cout << MergeSortedArrays(main, 0, 3, 7) << endl;
	 MergeSort(main, 0, 7);

	for(auto& i : main)
		cout << i << ",";
/*
	a = {5, 6, 7};
        b = {2,3,4,1};

	cout << merge(main, 10, a, 3, b, 4) << endl;

	for(auto& i : main)
		cout << i << ",";
	
	a = {1, 3, 4};
	b = {2,3,4,5};

	cout << merge(main, 10, a, 3, b, 4) << endl;

	for(auto& i : main)
		cout << i << ",";
*/	
	return 0;
}
