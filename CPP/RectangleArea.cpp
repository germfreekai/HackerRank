/*
 * This example shows inheritance
 */

#include <iostream>
using namespace std;

class Rectangle
{
    protected:
        int width;
        int height;
    public:
        void display()
        {
            std::cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle
{
    public:
        void input()
        {
            std::cin >> width >> height;
        }
        void display()
        {
            int res = width * height;
            std::cout << res << endl;
        }
};

int main()
{
    RectangleArea rectangle;
    rectangle.input();
    rectangle.display();

    return EXIT_SUCCESS;
}
