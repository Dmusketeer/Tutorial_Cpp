#include <iostream>
using namespace std;
int func(int n)
{
    static int x=0;  // only intialize at once in code section.
    if (n > 0)
    {   x++;
        return func(n - 1) + x;
        // note : activation record of functions and normal variable is intialize in stack memory while static variable is initialized in the code section.
    }
    return 0;
}
int main()
{
    int num = 5;
    cout << func(num);
    return 0;
}

//output--->25
