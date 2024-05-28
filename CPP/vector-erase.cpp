#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    int size;
    int x;
    vector <int> arr;

    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        std::cin >> x;
        arr.push_back(x);
    }

    int q1;
    std::cin >> q1;
    
    // erase N element defined by q1
    arr.erase(arr.begin() + q1 - 1);

    int q2, q3;
    std::cin >> q2 >> q3;

    // erase [q2,q3)
    arr.erase(arr.begin() + q2 - 1, arr.begin() + q3 - 1);

    size = arr.size();
    std::cout << size << "\n";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    return 0;
}
