#include <iostream>
using namespace std;

int findSquareRoot(int x){
	int start = 0;
		while (start <= x ){
			if (start * start  == x)
				return start;
			else if (start * start < x)
			{
				start++;
			}
			else 
				return start-1;
		}
		return -1;
}

int main(){
	int rootX;
	cout<<"Enter the number to find square root of" << endl;
	cin >> rootX;
	if(findSquareRoot(rootX) == -1)
		cout<<"Error"<<endl;
	else
		cout<<"The square root of " << rootX << " is: " << findSquareRoot(rootX) <<endl;
}

