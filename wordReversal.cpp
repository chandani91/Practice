#include <iostream>
using namespace std;

string reverseSubString(string s){
	int j=0;
	for (int i = 0; i <s.length(); i++){

	    if (s.at(i) == ' ')
		{
			reverse(s.begin()+j,s.begin()+i);
			j = i+1;
		}

		if (i == s.length()-1)
		{
			reverse(s.begin()+j,s.end());
			j++;
		}	
	}
	return s;
}

int main(){
	string s;
	cout << "Enter a sentence" << endl;
	getline(cin,s);
	cout << "The output is: " << reverseSubString(s) << endl;
	return 0;
}


