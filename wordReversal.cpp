#include <iostream>
using namespace std;

string reverseSubString(string s){
	int count = 0;
	int j;
	string reversedWord;
	string reversedSentence;

	for (int i = 0; i <s.length(); i++){

	    if (s.at(i) == ' ')
		{
			for (int j = i - 1; j >= i - count; j--)
				reversedWord = reversedWord+ s.at(j);

			count = 0;
			reversedSentence = reversedSentence + reversedWord ;
			reversedWord  = ' ';
		}

		else if (i == s.length()-1)
		{
			for (j = i; j >= i - count; j--){
				reversedWord = reversedWord+ s.at(j);
			}
			reversedSentence = reversedSentence + reversedWord;
		}	

		else if (s.at(i) != ' ')
			count ++;	
	}
	return reversedSentence ;
}

int main(){
	string s;
	cout << "Enter a sentence" << endl;
	getline(cin,s);
	cout << "The output is: " << reverseSubString(s) << endl;
	return 0;
}


