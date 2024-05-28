#include <iostream>

template <int n>
struct Fibonacci
{
    const static int val = Fibonacci<n - 1>::val + Fibonacci<n - 2>::val;
};

template <>
struct Fibonacci<0>
{
    const static int val = 0;
};

template <>
struct Fibonacci<1>
{
    const static int val = 1;
};

int main()
{
    std::cout<<Fibonacci<6>::val<<std::endl;
    return 0;
}