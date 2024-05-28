#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    std::cin >> a;
    std::cin >> b;

    std::cout << a.length() << " " << b.length() << "\n";
    std::cout << a << b << "\n";
    
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    
    std::cout << a << " " << b << "\n";
      
    return 0;
}
