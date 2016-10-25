#include <iostream>
#include <string>
using namespace std;

bool check_string(string sentence, string sentenceSubstr)
{
    int length = sentence.size(), length_string = sentenceSubstr.size();
    bool flag = false;
    
    for(int i = 0, j = 0; i < length; i++)
    {
        if (j >= length_string)
            break;
        if (sentenceSubstr[j] == sentence[i])
        {    
            j++;
            flag = true;
        }      
        else
            flag = false;
    } 
    
    return flag;
}
    

int main()
{
    string sentence, sentenceSubstr;
  
    cout << "Enter the Sentence: " << endl;
    getline (cin, sentence);
    cout << "Enter the substring you want to find: " << endl;
    getline (cin, sentenceSubstr);
    
    if (check_string(sentence, sentenceSubstr) == true)
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
}
