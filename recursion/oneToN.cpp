#include<iostream>
using namespace std;

void fun1(int n){
    if(n>0){
   
    fun1(n - 1); //decreasing order.
    cout << n << " ";
    }
}
int main()
{
    int num=10;
    fun1(num);
    return 0;
}


