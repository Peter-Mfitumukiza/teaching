#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int main(){
    int num1;
    int num2;
    cout<<"Enter your first number: ";
    cin>>num1;

    cout<<"Enter your second number: ";
    cin>>num2;

    int sum = add(num1, num2);

    cout<<"The sum of your numbers is "<< sum <<endl;
}