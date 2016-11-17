#include <iostream>
#include <string>
using namespace std;


void counter(int i, string sentence)
{
	sentence = sentence.insert (14+i, "o");
	if(i < 10)	
	{
		i++;
		cout << i << sentence << endl;
		counter(i, sentence);
	}
}


int main() 
{	
	int i = 0;
	string sentence = ". I like you s very much Faiz.";
	cout << endl << "Because my likeness for you increases everyday <3 <3 <3" << endl;
	counter(i, sentence);
	cout << endl;
	return 0;
}