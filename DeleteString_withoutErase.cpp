#include <iostream>
#include <string>
using namespace std;

string check_string(string main_string, string sub_string)
{
    int length_mainString = main_string.size();
    int length_subString = sub_string.size();
    int count = 0, i;
    char new_string[length_mainString - length_subString];

    // Checking  if the characters of the main string matches the sub string.
    for(i = 0; i < length_mainString; i++)
    {
        if(sub_string[0] == main_string[i])
        {
            for(int j = 1; j < length_subString; j++)
            {
                if(sub_string[j] == main_string[i+1])
                {
                    count++;
                    i++;
                }   
                else
                {
                    i++;
                    break;
                }
            }

            // If the sub string is found
            // Instert all the characters except the substring in a new string 
            if (count == length_subString - 1)     
            {
                for(int k = 0; k <= i - length_subString; k++)
                    new_string[k] = main_string[k];
                for(int l = i + 1; l <= length_mainString; l++)
                    new_string[l - length_subString] = main_string[l];
                return new_string;
            }
        }
    }
    return main_string;
}
       
int main()
{
    string main_string, sub_string;

    cout << "Enter a string: " << endl;
    getline(cin, main_string);

    cout << "Enter the substring you want to search: " << endl;
    getline(cin, sub_string);
    
    cout << "String is: " << check_string(main_string, sub_string) << endl;

    return 0;
}