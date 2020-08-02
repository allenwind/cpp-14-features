#include <iostream>

using namespace std;
/*
如果使用C++11：
auto.cpp:5:1: error: ‘sum’ function uses ‘auto’ type specifier without trailing return type
    5 | auto sum(int a, int b)
      | ^~~~
auto.cpp:5:1: note: deduced return type only available with ‘-std=c++14’ or ‘-std=gnu++14’
*/

// 函数中可以用返回值类型推导
// 返回不支持初始化列表
// 函数是虚函数，不能使用返回值类型推导
auto sum(int a, int b)
{
    int c;
    c = a + b;
    // 有多个return语句，它们必须返回相同的类型
    return c;
}

auto fib(int n)
{   
    // 在递归函数中至少一个返回语句作为先导
    if (n == 1 || n == 2)
        return 1;
    return fib(n-1) + fib(n-2);
}

// 模板中可以用返回值类型推导
template <class T, class U>
auto tadd(T t, U u)
{
    return t + u;
}

int main(int argc, char ** argv)
{
    cout << sum(1, 1) << endl;
    cout << fib(10) << endl;
    cout << tadd<double, double>(1.1, 1.1) << endl;

    // lambda参数支持auto
    auto mul = [](auto a, auto b) { return a * b; };
    cout << mul(15, 16) << endl;

    return 0;
}