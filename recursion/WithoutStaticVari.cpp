#include<iostream>
using namespace std;
int func(int n){
    if(n>0){
       return func(n-1)+n;
    }
    return 0;
}
int main(){
    int num = 5;
    cout << func(num);
    return 0;
}

//output --->15