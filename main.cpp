/*
 * Author and Programmer: Brett Bernardi
 * November 16, 2019
 */

#include <iostream>
#include <string.h>

using namespace std;



// We can defined the nth Fibonacci Number, Fn, as the following:
//  Fn = Fn-1 + Fn+2
// We also define F1 = 1 and F2 = 2

//recursively defined function to return the nth fibonacci number
int fib(int n)
{
    // checks that n is a positive whole number
    if(n < 0)
    {
        cout << "ERROR" << endl;
        cout << "Must enter positive integers only!" << endl;
        return -1;
    }
    
    else 
    {
        if(n == 1)
        {
            return 1;
        }

        if (n == 2)
        {
            return 1;
        }

        return fib(n-1) + fib(n-2);
        
    }
    
}


int main()
{
    int n = 1;
    
    
    while(n <= 20)
    {
        cout << fib(n) << " ";
        n = n + 1;
    }
     
    
    return 0;
}