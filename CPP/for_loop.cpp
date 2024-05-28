#include <iostream>
using namespace std;

void printNumberName(int num);
void odd_or_even(int num);

int main(void)
{
    int a, b;
    std::cin >> a;
    std::cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (i < 10)
            printNumberName(i);
        else
            odd_or_even(i);
    }

    return EXIT_SUCCESS;
}

void printNumberName(int num)
{
    switch(num)
    {
        case 1:
            fprintf(stdout, "one\n");
            break;
        case 2:
            fprintf(stdout, "two\n");
            break;
        case 3:
            fprintf(stdout, "three\n");
            break;
        case 4:
            fprintf(stdout, "four\n");
            break;
        case 5:
            fprintf(stdout, "five\n");
            break;
        case 6:
            fprintf(stdout, "six\n");
            break;
        case 7:
            fprintf(stdout, "seven\n");
            break;
        case 8:
            fprintf(stdout, "eight\n");
            break;
        case 9:
            fprintf(stdout, "nine\n");
            break;
    }
}

void odd_or_even(int num)
{
    if (num % 2 == 0)
        fprintf(stdout, "even\n");
    else
        fprintf(stdout, "odd\n");
}
