#include <iostream>
using namespace std;

int factorial(int num){
    int sum = num;
    for (int i = num; i >= 2 ; i--){
        sum = sum * (i - 1);
    }
    //cout << num << "! = " << sum << "\n";
    return sum;
}

int main(){
    int num = 0;
    cout << "Enter factorial number: ";
    cin >> num;

    factorial(num);
    cout << num << "! = " << factorial(num) << "\n";
    return 0;
}