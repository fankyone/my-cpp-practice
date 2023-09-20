#include <iostream>
using namespace std;

int primenum (int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            cout << "It's not prime number" << "\n";
            break;
        }
    }
    cout << "It's prime number" << "\n";
    return 0;
}

int main(){
    int num = 0;
     cout << "Please enter a number to check if it's prime number: ";
     cin >> num;

     if (num < 2) {
        cout << "<<< Enter your number again >>>";
     }

     primenum(num);
     return 0;
}