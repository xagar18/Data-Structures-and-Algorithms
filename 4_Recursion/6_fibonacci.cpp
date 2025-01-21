// Write a recursive function to calculate the nth Fibonacci number. Analyze the time complexity of your implementation and suggest possible optimizations to improve its efficiency.
#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
// Time Complexity: O(2^n), why 2^n? Because for each call, we are making 2 calls, so it is exponential time complexity. it is not exact 2^n, but it is exponential time complexity. so we can say it is O(2^n)

int main()
{
    cout << fibo(5);
    return 0;
}