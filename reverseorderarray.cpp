#include <iostream>
using namespace std;

int main(){
    int a[10];
    int b[10];
    
    for (int i = 0; i < 10; i++){
        cout << "enter " << i + 1 << "th number in arrays: ";
        cin >> a[i];
    }
    int j = 0;
    for (int i = 9; i >= 0; i--){
        b[j] = a[i];
        j++;
    }
    cout << "Array B = \n";
    for (int i = 0; i < 10; i++){
        cout << b[i] << " \n";
    }
    return 0;
}