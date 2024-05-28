#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void get_index(int size, vector <int> v, int k);

int main(void)
{
    int size;
    vector <int> v;
    int queries;
    vector <int> q;

    int x;
    std::cin >> size;
    for (int i = 0; i < size; i++)
    {
        std::cin >> x;
        v.push_back(x);
    }

    std::cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        std::cin >> x;
        q.push_back(x);
    }

    for (int i = 0; i < queries; i++)
    {
        get_index(size, v, q[i]);
    }

    return 0;
}

void get_index(int size, vector <int> v, int k)
{
    vector <int> :: iterator low = lower_bound(v.begin(), v.end(), k);

    if (v[low - v.begin()] == k)
    {
        fprintf(stdout, "Yes %d\n", (low - v.begin()) + 1);
        return;
    }
    else
    {
        fprintf(stdout, "No %d\n", (low - v.begin() + 1));
        return;
    }
}

