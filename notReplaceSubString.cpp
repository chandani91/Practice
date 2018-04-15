#include <iostream>
#include <string>
using namespace std;

string replaceWith(string main_string, string sub_string);

int main()
{
    string main_string, sub_string;

    cout << "Enter a string: " << endl;
    getline(cin, main_string);

    cout << "Enter the substring you want to search: " << endl;
    getline(cin, sub_string);

    cout << replaceWith(main_string, sub_string) << endl;

    return 0;
    
}
    
string replaceWith(string main_string, string sub_string)
{
    int length_subString = sub_string.size();
    int length_mainString = main_string.size();

    string temp;

    for (int i = 0; i < length_mainString; ++i)
    {
        if(main_string[i] != ' ')
            temp = temp + main_string[i];
        else if(main_string[i] == ' ')
        {
            if(sub_string != temp)
            {
                int start_poisition = i - temp.size();
                int end_poisition = i - 1;
                for(int j = start_poisition; j <= end_poisition; j++)
                    main_string[j] = '+';
                temp = "";
            }
            else if(sub_string == temp)
                temp = "";
        }
        if(i == length_mainString - 1 && sub_string != temp)
        {
            int start_poisition = i - temp.size() + 1;
            int end_poisition = i;
            for(int j = start_poisition; j <= end_poisition; j++)
                main_string[j] = '+';
        }
    }
    return main_string;
}
