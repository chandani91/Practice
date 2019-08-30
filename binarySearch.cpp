#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &sorted, int vectSize, int num){
	int start = 0;
	int end = vectSize - 1;
	int midVal = (start+end)/2;
	while (start <= end){
		if (num == sorted.at(midVal))
			return midVal;
		else if (num < sorted.at(midVal))
			end = midVal-1;
		else if (num > sorted.at(midVal))
			start = midVal+1;
		midVal = (start+end)/2;
	}	
	return 0;
}

int main(){
	int search;
	vector<int> sorted{2,6,9,10,12,14};
	int vectSize = sorted.size();
	cout<<"2,6,9,10,12,14"<<endl;
	cout<<"Enter value to search in the above array"<<endl;
	cin>>search;
	cout << "The target index is " << binarySearch(sorted, vectSize,search)<< endl;
	return 0;
}
