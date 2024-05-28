#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
    int size;
    cin >> size;

    map <string, int> m;

    int type, grade;
    string name;
    map <string, int> :: iterator it;
    for (int i = 0; i < size; i++)
    {
        cin >> type;
        switch (type)
        {
            case 1:
                cin >> name >> grade;
                m[name] += grade;
                break;
            case 2:
                cin >> name;
                m.erase(name);
                break;
            case 3:
                cin >> name;
                cout << "\n";
                cout << m[name] << endl;
        }
    }
    return 0;
}
