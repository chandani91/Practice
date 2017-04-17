#include <iostream>
using namespace std;

int stairCount(int numStairs, int firstNum, int secondNum)
{
	int thirdNum = firstNum + secondNum;
	firstNum = secondNum;
	secondNum = thirdNum;
	numStairs--;

	if (numStairs >=1)
		stairCount(numStairs, firstNum, secondNum);
	else return thirdNum;
}

int main()
{
	int numStairs;
	cout<<"Enter the number of steps: "<<endl;
	cin>>numStairs;
	cout<< stairCount(numStairs, 0, 1)<<endl;
	return 0;
}

