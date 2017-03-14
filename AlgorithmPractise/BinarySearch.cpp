/*
	Binary Search:
	A search algorithm that finds the postion of a target value within a sorted array
*/

#include <iostream>
#include <vector>
using namespace std;

#define MAX_N 1000001


int binarySearch(const int value, const vector<int>& sortedVector,  int left,  int right) {
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (sortedVector[mid] == value)
			return mid;
		else if (sortedVector[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return -1;
}

int main()
{
	vector<int> sortedVector = {1,2,3,4,5,6};
	printf("%d\n", binarySearch(7, sortedVector, 0, sortedVector.size()));
	return 0;
}