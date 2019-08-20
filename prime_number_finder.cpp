#include "../std_lib_facilities.h"
/*
Seokho Han 201761541
COMP2510 ass1

Find 100 prime numbers and stroe the numbers in a vector.
*/
int main()
{
    vector<int> primes;
    int counter, pCount = 0;
    int num = 2;
    while (counter < 100)
    {
        pCount = 0;
        for (int i = 2; i <= num/2 ; i++)
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
