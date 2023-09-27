#include <iostream>
using namespace std;

int main(){
    int a[5];

    cout << "Enter 5 integer for array\n";
    for (int i = 0; i < 5; i++){
        cout << "Enter " << i + 1 << "th" << " number: ";
        cin >> a[i];
    }
    
    int max = a[0];
    int min = a[0];

    for (int i = 1; i <= 4; i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    cout << "Max: " << max << "\n";
    cout << "Min: " << min << "\n";

    return 0;


}