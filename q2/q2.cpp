#include <stdio.h>
#include <iostream>

int fib(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else if (num == 1)
    {
        return 2;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}


int main()
{
    int sum = 0;
    int num = 0;
    int i = 0;
    bool finished = false;
    while (not finished)
    {
        num = fib(i);
        i++;
        if (num < 4000000)
        {
            if (num % 2 == 0)
            {
                sum += num;
            }
        }
        else
        {
            finished = true;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}