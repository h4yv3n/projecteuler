#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 0;
    unsigned long long int total = 0;

    while (a <= 4000000 || b <= 4000000 || c <= 4000000)
    {
        c = a + b;
        if (c < 4000000 && c % 2 == 0)
        {
            total += c;
        }
        a = c + b;
        if (a < 4000000 && a % 2 == 0)
        {
            total += a;
        }
        b = a + c;
        if (b < 4000000 && b % 2 == 0)
        {
            total += b;
        }
    }
    total += 2;
    std::cout << total;
    return 0;
}
