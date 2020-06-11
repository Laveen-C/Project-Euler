#include <iostream>

bool palindromeCheck(long int num)
{
    long int initNum = num;
    int reverse = 0;
    long int remainder = 0;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (initNum == reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    bool isPalindrome;
    long int num;
    for (long int i = 999 * 999; i > (100 * 100) - 1; i--)
    {
        isPalindrome = palindromeCheck(i);
        if (isPalindrome)                              
        {
            num = i;
            for (int j = 999; j > 99; j--) 
            {
                if (num % j == 0)
                {
                    int factor = num / j;
                    if (100 <= factor and factor <= 999)
                    {
                        std::cout << num << std::endl;
                        return 0;
                    }
                }
            }  
        }
    }
    return 0;
}
