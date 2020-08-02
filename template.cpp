#include <iostream>

using namespace std;

// 变量模板
template <class T>
constexpr T e = T(2.71828182845904523L);

// 别名模板
template <class T, class U>
struct Node
{
    T t;
    U u;
};

template <class T>
using iNode = Node<T, double>; // 别名

int main(int argc, char ** argv)
{
    cout << e<double> << endl;
    cout << e<float> << endl;
    cout << e<int> << endl;
    
    iNode<double> node = { 1, 2 };
    cout << node.t << endl;
    cout << node.u << endl;

    return 0;
}