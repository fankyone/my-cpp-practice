#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int a[10];
    for (int i = 0; i < 10; i++){
        cout << "Enter number: ";
        cin >> a[i];
    }
    
    cout << "Give a number to see if it's presenting in the array:  " << "\n";
    cin >> num;
    for (int i = 0; i < 10; i++){
        if (a[i] == num){
            cout << "Yes. The number is existing in the array";
        }
    }
    cout << "It's not in the array" << "\n";
    
    return 0;

}