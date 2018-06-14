#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

string morseRepresentations(string temp){
	int pos = 0;
	string search = "";
	string toMorse = "";
	map <string, string> alphaToMorse;
	vector<string>::iterator iter;
	vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; 
	vector<string> alphabets = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};		
		for (int j = 0; j < temp.length(); j++)	
		{
			search = temp[j]; //search holds the current letter from the current word
			iter = find(alphabets.begin(), alphabets.end(), search);
   			pos = iter - alphabets.begin(); // position of letter from the current word in the alphabet set
   			toMorse = toMorse + morse[pos]; // converting the letter to the morse and combining
		}		
	return toMorse;
}

int uniqueMorseRepresentations(vector<string>& words)
{
	string temp = "";
	map<string,int> hashmap; //hash map with morse code as key, and its number as value
	vector<string> morsed; // to store individual words in morse
	int count = 0; //counter for total keys from hash map

	for (int i = 0; i < words.size(); i++)
	{
		temp = words[i]; // temp holds the current word
		morsed.push_back(morseRepresentations(temp)); //adding the morse words to a vecor
	}

	for (int i = 0; i < morsed.size(); i++) 
	{
		string key = morsed[i];
		hashmap[key]++;
	}
	for(auto iter = hashmap.begin(); iter != hashmap.end(); iter++){
		count++;
	}

	return count;	
}


int main(){
	vector<string> words;
	words = {"gin", "zen", "gig", "msg", "msg", "msg"};
	cout << "Total unique rep = " << uniqueMorseRepresentations(words)<<endl;
	return 0;
}


