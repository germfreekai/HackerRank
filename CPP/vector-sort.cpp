#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)
{
    vector <int> arr;
    int size;
    std::cin >> size;

    int x;
    for (int i = 0; i < size; i++)
    {
        std::cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    std::cout << endl;

    return 0;
}
