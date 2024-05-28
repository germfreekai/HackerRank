#include <iostream>
#include <set>
#include <vector>
using namespace std;

void is_present(set <int> *s, int n);

int main(void)
{
    int size;
    cin >> size;

    set <int> s;

    vector <pair <int, int> > v;
    int type, x;
    for (int i = 0; i < size; i++)
    {
        cin >> type >> x;
        v.push_back(make_pair(type, x));
    }

    for (auto pair : v)
    {
        switch(pair.first)
        {
            case 1:
                s.insert(pair.second);
                break;
            case 2:
                s.erase(pair.second);
                break;
            case 3:
                set <int> :: iterator it;
                it = s.find(pair.second);
                if (it != s.end())
                    cout << "Yes\n";
                else
                    cout << "No\n";
                break;
        }
    }

    return 0;

}

