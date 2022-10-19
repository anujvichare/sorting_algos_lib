#include <iostream>
using namespace std;

bool mergeSortedArrays(int mainArr[], int mainLength, int firstArr[], int firstLength, int secondArr[], int secondLength)
{
	int indexMain =0; int indexFirst =0; int indexSecond = 0;

	while(indexFirst < firstLength && indexSecond < secondLength)
	{
		if(indexMain > mainLength)
			return false;

		if(firstArr[indexFirst] < secondArr[indexSecond])
		{
			mainArr[indexMain++] = firstArr[indexFirst++];
		}
		
		else if(firstArr[indexFirst] > secondArr[indexSecond])
		{
			mainArr[indexMain++] = secondArr[indexSecond++];
		}

		else
		{
			mainArr[indexMain++] = firstArr[indexFirst++];
			mainArr[indexMain++] = secondArr[indexSecond++];
		}
	}

	while( indexFirst < firstLength)
	{

		if(indexMain > mainLength)
			return false;
			
		mainArr[indexMain] = firstArr[indexFirst];
		++indexFirst;
		++indexMain;
	}
	while(indexSecond < secondLength)
	{
		if(indexMain > mainLength)
			return false;
		
		mainArr[indexMain] = secondArr[indexSecond];
		++indexSecond;
		++indexMain;
	}
	return true;
}

void MergeSort(int arr[], int startIndex, int endIndex)
{
	
	if(startIndex >=  endIndex)
		return;

	int mid = (endIndex + startIndex) / 2;
	MergeSort(startIndex, mid - 1);
	MergeSort(mid, endIndex);

	MergeSortedArrays(arr, );

}

int main()
{
	int main[10] = {0};
	int a[3] = {1, 3, 4};
	int b[4] = {2,3,4,5};

	cout << merge(main, 10, a, 3, b, 4) << endl;

	for(auto& i : main)
		cout << i << ",";

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
	
	return 0;
}
