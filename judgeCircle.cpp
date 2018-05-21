#include <iostream>
using namespace std;

bool judgeCircle(string moves) 
{
	int x = 0, y =0;
	int length = moves.length();
	for(int i=0; i<length; i++)
	{
		if (toupper(moves.at(i))=='R')
			x = x+1;
		else if(toupper(moves.at(i))=='L')
			x = x-1;
		else if(toupper(moves.at(i))=='U')
			y = y+1;
		else if(toupper(moves.at(i))=='D')
			y = y-1;
	}

	if (x == 0 && y == 0)
		return true;
	else
		return false;
}

int main()
{
	string moves;
	cout<<"Enter a sequence of moves"<<endl;
	cin >> moves;
	if (judgeCircle(moves) == true)
		cout<<"The sequence of give moves creates a circle"<<endl;
	if (judgeCircle(moves) == false)
		cout<<"The sequence of give moves does not create a circle"<<endl;

	return 0;
}