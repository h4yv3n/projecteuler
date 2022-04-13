#include <iostream>

int makePalindrome(int x)
{
    int result = x * 1000;
    result += x / 100;
    result += ((x / 10) % 10) * 10;
    result += (x % 10) * 100;
    return result;
}

int main()
{


    return 0;
}
