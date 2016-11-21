#include <iostream>
#include <string>
using namespace std;
        
string Reverse_string(string Sentence, int length)
    {
        int count = 0;   
        
        for(int i = length-1; i >= length/2 ; i--)
        {
            swap(Sentence[i], Sentence[count]);
            count++;
        }
        return Sentence;
    } 
    
void Palindrome_check(string Sentence, int length)
{
        int count = 0;
        
         for(int i = length-1; i >= length/2 ; i--)
         {
           if(Sentence[i] != Sentence[count])
           {
            i = 0;
            cout<<"Not a palindrome"<<endl;
           }
           else
          count++;
        }    
        
        if (count >= length/2)
        cout<<"It's a palindrome"<<endl;
 }
    
int main ()
{
        string Sentence;     
        cout<<"Enter a sentence or a word:"<<endl;
        getline(cin, Sentence);    
        int length = Sentence.length();
        cout<<endl<<"The Reverse is: "<<Reverse_string(Sentence,length)<<endl;
        Palindrome_check(Sentence, length);
        return 0;    
}       
