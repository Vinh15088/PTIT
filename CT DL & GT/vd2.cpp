#include<iostream>

void test(int n)
{
    std::cout << n % 10;
    if (n/10 == 0)
        return ;

    return test(n/10);
}
int main()
{
    int n = 12345;
    test(n);
}