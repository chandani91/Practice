#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &sorted, int vectSize, int num){
	vector<int> subVect;
	int midVal = (vectSize/2);
	if (num == sorted.at(midVal))
		return midVal;
	else if (num > sorted.at(midVal)){
		for(int i = midVal; i < vectSize; i++)
			subVect.push_back(sorted.at(i));
		vectSize = subVect.size();
		binarySearch(subVect,vectSize,num);
	}
	else if (num < sorted.at(midVal)){
		for(int i = 0; i < midVal; i++)
			subVect.push_back(sorted.at(i));
		vectSize = subVect.size();
		binarySearch(subVect,vectSize,num);
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
