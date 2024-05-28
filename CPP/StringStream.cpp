#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector <int> parseInts(string str);

int main(void)
{
    string str;
    cin >> str;

    vector <int> integers = parseInts(str);

    for (int i = 0; i < integers.size(); i++)
        std::cout << integers[i] << "\n";

    return 0;
}

vector <int> parseInts(string str)
{
    vector <int> ans;
    stringstream ss(str);
    char ch;
    int num;
    while (ss >> num)
    {
        ans.push_back(num);
        ss >> ch; // Discard comma
    }

    return ans;
}
