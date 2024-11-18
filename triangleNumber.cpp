#include <iostream>
#include <cassert>
using namespace std;

class TriangleNumberCalculator
{
public:
    int value(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        else
        {
            return n + value(n - 1);
        }
    }

    int add(int n, int m)
    {
        return value(n) + value(m);
    }

    int subtract(int n, int m)
    {
        return value(n) - value(m);
    }
};

int main()
{
    TriangleNumberCalculator calc;

    assert(calc.value(5) == 15);
    assert(calc.value(3) == 6);
    cout << calc.value(131000) << endl;

    assert(calc.add(5, 3) == 21);
    assert(calc.add(4, 2) == 13);
    cout << calc.add(131000,5) << endl;
    
    assert(calc.subtract(5, 3) == 9);
    assert(calc.subtract(6, 2) == 18);
    cout << calc.subtract(131000,10);

    return 0;
}