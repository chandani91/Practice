#include <iostream>
using namespace std;

bool detectCapitalUse(string word) {
	if(word[0] == toupper(word[0]) && word[1] == toupper(word[1])){
		for (int i = 2; i < word.length(); i++){
		 	if(word[i] != toupper(word[i]))
		 		return false;
		 }
	}
	else if(word[0] == toupper(word[0])){
		for (int i = 1; i < word.length(); i++){
		 	if(word[i] == toupper(word[i]))
		 		return false;
		 }
	}
	else if(word[0] == tolower(word[0])){
		for (int i = 1; i < word.length(); i++){
		 	if(word[i] == toupper(word[i]))
		 		return false;
		 }
	}
	return true;
}

int main(){
	string word;
	cout<<"Enter a word "<<endl;
	cin>>word;
	if (detectCapitalUse(word))
    	cout<<"The use of capital is correct"<<endl;
    else
    	cout<<"The use of capital is incorrect"<<endl;
    return 0;
}

