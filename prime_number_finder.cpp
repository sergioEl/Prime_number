#include "../std_lib_facilities.h"
/*
Seokho Han 201761541
COMP2510 ass1

Finding first 100 prime numbers and store the numbers in a vector.
*/

/*
As for prime number, if we found that the number has a factor(any one factor) except 1 and the number itself, 
then that number is not prime, so we can reduce time complexity to O(sqrt(n)) from O(n).
This approach is called primality test.
Further it can be optimized in O(1) using Seive of Eratosthenes.
*/
int main()
{
    vector<int> primes;
    int counter, pCount = 0;
    int num = 2;
    while (counter < 100)
    {
        pCount = 0;
        //So we will iterate till sqrt(n), so i<=sqrt(num)  OR   i*i<=num (squaring both sides;
        for (int i = 2; i*i <= num ; i++)                
        {
            if (num % i == 0) //check if it's only divisible by itselt and 1
            {
                pCount = 1;
            }
        }
        if (pCount == 0)
        {
            primes.push_back(num);
            counter ++; //increment counter for finding 100 numbers
        }
        num++;
    }
    for (int i = 0; i < primes.size(); i++) //print out the vector
    {
        cout << primes[i] << "\t";
        if ((i+1) % 10 == 0) //put a newline every 10 numbers
        {
            cout << "\n\n";
        }
    }
    return 0;
}
