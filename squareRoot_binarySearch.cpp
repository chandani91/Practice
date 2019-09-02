#include <iostream>
using namespace std;

int findSquareRoot(int x){
	int start = 1;
    int end = x/2;
    int temp = -1;
    if (x == 0 || x == 1 )
        return x;
    while (start <= end){
        double midVal = (start +end) / 2;
        if (midVal * midVal == x)
            return midVal;
        if (midVal * midVal < x){
            start = midVal + 1;
            temp = midVal;
        }
        else
            end = midVal - 1;
            
        } 
        return temp;    
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

