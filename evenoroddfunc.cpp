#include <iostream>
using namespace std;

int evenorodd(int num){
    if (num % 2 == 0){
        cout << "Even Number" << "\n";
    }
    else{
        cout << "Odd number" << "\n";
    }
    return 0;
}


int main(){
    int num = 0;
    cout << "Please enter number: ";
    cin >> num;

    evenorodd(num);
    return 0;
}