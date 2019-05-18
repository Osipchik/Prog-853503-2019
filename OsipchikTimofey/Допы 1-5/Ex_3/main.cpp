#include <iostream>

using namespace std;

string GetSNum(int symbol_count);
string archive(string str);

int main()
{
    string str;
    getline(cin, str);
    cout << archive(str);
    return 0;
}



string archive(string str)
{
    string RLE = "";
    char symbol;

    int str_size = str.length(), count = 0;

    symbol = str[0];
    int symbol_count = 0;

    while (count < str_size + 1)
    {
        if (str[count] == symbol) symbol_count++;
        else
        {
            if (symbol_count > 2)
            {
                RLE += GetSNum(symbol_count);
                RLE += symbol;
            }
            else if (symbol_count == 2)
            {
                RLE += symbol;
                RLE += symbol;
            }
            else if (symbol_count == 1)
            {
                RLE += symbol;
            }
            symbol_count = 0;
            if (symbol != str[count])
            {
                symbol = str[count];
                symbol_count = 1;
            }
        }
        count++;
    }
    return RLE;
}
string GetSNum(int symbol_count)
{
    string num = "\0";
    while (symbol_count)
    {
        num.insert(0, 1, ('0' + symbol_count % 10));
        symbol_count /= 10;
    }
    return num;
}
