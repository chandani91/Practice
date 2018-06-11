//https://leetcode.com/problems/goat-latin/description/

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

string goatLatin(string str){
	string temp = "";
	string ans = "";
	stringstream ss(str);
	string buffer;
	char delimeter = ' ';
	vector<string> tokens;

	while(getline(ss, buffer, delimeter)) 
		tokens.push_back(buffer);

	vector<char> vowels = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}; // List of vowels


	for(int i = 0; i < tokens.size(); i++){
		temp += "a"; // increasing the repetition of “a” with i
		string currentWord = tokens[i]; // Store the first character of the word
		char ch = currentWord[0];
		// If a word begins with a vowel (a, e, i, o, or u), append "ma" to the end of the word.
		if(find(vowels.begin(),vowels.end(), ch) != vowels.end())
			currentWord += "ma";

		else{ // It will be a consonant otherwise
			currentWord.erase(0, 1);
	        currentWord += ch;
			currentWord += "ma";
		}
		// Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
		currentWord += temp;
		// Store currentWord in “ans” string. 
		if(i == tokens.size() - 1) 
			ans += currentWord; // ans += currentWord is better. 
		else
			ans +=  currentWord + delimeter;
	}
return ans;
}

int main(){
	string str;
	cout<<"Enter a sentence"<<endl;
	getline(cin,str);
	cout << "The output is: "<< goatLatin(str) <<endl;
	return 0;
}
