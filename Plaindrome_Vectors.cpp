#include <iostream>
#include <vector>
using namespace std;

void reverse_vector(string word)
{
	vector<string> Original_Word;
	vector<string> Reversed_Word;

	Original_Word.push_back(word);
	Reversed_Word.push_back(word);

	reverse(Reversed_Word[0].begin(), Reversed_Word[0].end());

	if (Original_Word[0] == Reversed_Word[0])
		cout << "It is a plaindrome" <<endl;
	else
		cout << "It is not plaindrome" <<endl;
}

void reverse_string(string word)
{
	string reverse_word = word;
    reverse(reverse_word.begin(),reverse_word.end());
    if (reverse_word == word)
    	cout << "It is a plaindrome" <<endl;
	else
		cout << "It is not plaindrome" <<endl;
}

int main()
{
	string word;
	cout << "Enter a string to check: " << endl;
	getline (cin,word);
	//reverse_vector(word);
	reverse_string(word);
}