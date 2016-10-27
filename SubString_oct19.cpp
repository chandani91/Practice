#include <iostream>
#include <string>
using namespace std;

bool check_string(string main_string, string sub_string)
{
    int length_mainString = main_string.size();
    int length_subString = sub_string.size();
    int count = 0;

    for(int i = 0; i < length_mainString; i++)
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
            if(count == length_subString - 1)
                return true;
        }
        
    }
    return false;
}

int main()
{
    string main_string, sub_string;

    cout << "Enter a string: " << endl;
    getline(cin, main_string);

    cout << "Enter the substring you want to search: " << endl;
    getline(cin, sub_string);

    if(check_string(main_string, sub_string))
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;

    return 0;
}