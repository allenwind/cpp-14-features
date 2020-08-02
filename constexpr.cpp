#include <iostream>

using namespace std;

// C++11 C++14 is ok
constexpr int fib1(int n)
{
    return (n == 1 || n == 2) ? 1 : fib1(n-1) + fib1(n-2);
}

// C++14支持展开
constexpr int fib2(int n)
{
    int a = 1;
    int b = 1;
    int c = 0;
    for (int i = 0; i < n - 1 ; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return a;
}

// C++14可以复杂的条件
constexpr bool iseven(int n)
{
    if (n % 2 == 0)
        return true;
    return false;
}

int main(int argc, char ** argv)
{
    cout << fib1(13) << endl;
    cout << fib2(13) << endl;

    cout << boolalpha;
    cout << iseven(16) << endl;
    cout << iseven(17) << endl;
    
    return 0;
}