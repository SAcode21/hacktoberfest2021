#include <bits/stdc++.h>
using namespace std;
 
// function to check whether a number is prime or not

bool isPrime(int n)
{
    
    if (n <= 1)
        return false;
 
   
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main()
{
    isPrime(7) ? cout << " true\n" : cout << " false\n";
    return 0;
}
