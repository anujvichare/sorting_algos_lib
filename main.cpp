#include <iostream>
#include "sort.h"
using namespace std;


int main()
{
	int main[8] = {35678, 20000, 9999, 9876, 3554, 500, 14, 1};
	//int main[8] = {100, 2, 660 , 3600, 3, 2500, 0, 1690};

	//	cout << MergeSortedArrays(main, 0, 3, 7) << endl;
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
