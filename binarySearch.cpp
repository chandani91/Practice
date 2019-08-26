#include <iostream>
using namespace std;

int binarySearch(int a[], int arraySize, int num){
	int subArray[] = {0};
	int midVal = (arraySize/2);
	if (num == a(midVal))
		return midVal;
	else if ((num > a(midVal))){
		midVal = (midVal + 1 + arraySize)/2;
		for(int i = midVal+1; i < arraySize; i++)
			subArray[] = a[i];
		arraySize = subArray.size();
		binarySearch(subArray,num);
	}
	else if ((num < a(midVal))){
		midVal = (midVal + 1 + arraySize)/2;
		for(int i = 0; i < midVal-1; i++)
			subArray[] = a[i];
		arraySize = subArray.size();
		binarySearch(subArray,num);
	}
}

int main(){
	int search;
	int sortedArray[] = {2,6,9,10,12,14,16,17,18,20,23};
	int arraySize = sizeof(sortedArray);
	cout<<"2,6,9,10,12,14,16,17,18,20,23";
	cout<<"Enter value to search in the above array"<<endl;
	cin>>search;
	cout << "The target index is" << binarySearch(sortedArray, arraySize, search)<< endl;
	return 0;
}
