#include <iostream>
#include <vector>


int main()
{
    unsigned long long int number = 600851475143;

    bool isPrime = 1;

    int lastPrime = 2;

    for (int i = lastPrime; i < number; i++)
    {
        std::cout << number << std::endl;
        std::cout << i << std::endl;
        isPrime = 1;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
            }
        }

        if (isPrime && (number % i == 0))
        {
            lastPrime = i;
            number = number / i;
        }
    }

    std::cout << number;

    return 0;
}
