#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main (void)
{
    vector <string> v;
    v.push_back("cir");
    v.push_back("car");
    // v.push_back("fligth");

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << "\n";
    }

    int max_size = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].size() > max_size)
            max_size = v[i].size();
    }

    string prefix = "";
    char c;
    int all_equal = 1;
    for (int i = 0; i < v[0].size(); i++)
    {
        c = v[0][i];
        for (int j = 1; j < v.size(); j++)
        {
            if (v[j][i] != c)
                all_equal = 0;
        }
        if (all_equal)
            prefix += c;
        else
            break;
    }

    std::cout << prefix << "\n";
    std::cout << endl;

    return EXIT_SUCCESS;
}
