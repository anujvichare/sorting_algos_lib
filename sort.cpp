#include "sort.h"

bool MergeSortedArrays(int mainArr[], int first, int mid, int last)
{
	int iTemp =0; int iFirst = first; int iSecond = mid+1;

	int* temp = new int[last-first+1];

	while(iFirst < mid+1 && iSecond < last+1)
	{
		if(mainArr[iFirst] <= mainArr[iSecond])
		{
			temp[iTemp++] = mainArr[iFirst++];
		}
		
		else if(mainArr[iFirst] > mainArr[iSecond])
		{
			temp[iTemp++] = mainArr[iSecond++];
		}
	}

	while( iFirst < mid+1)
	{
		temp[iTemp++] = mainArr[iFirst++];
	}
	while(iSecond < last+1)
	{
		temp[iTemp++] = mainArr[iSecond++];
	}

	iFirst = first;
	for(int i = 0; iFirst < last+1 ; i++, iFirst++)
		mainArr[iFirst] = temp[i];

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
