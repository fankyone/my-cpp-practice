#include <iostream>
using namespace std;

int main(){
    int a[5];
    int pnum = 0;
    int nnum = 0;
    int odd = 0;
    int even = 0;
    int zero = 0;

    for (int i = 1; i <= 5; i++){
        cout << "Enter " << i << "th number: ";
        cin >> a[i];
    }

    for (int i = 1; i <= 5; i++){
        if (a[i] > 0){
            pnum++;
        }
        else if (a[i] < 0){
            nnum++;
        }
        else {
            zero++;
        }
        if (a[i] % 2 == 0){
            even++;
        }
        else if(a[i] % 2 != 0){
            odd++;
        }
    }
    cout << "number of positive numbers: " << pnum << "\n";
    cout << "number of negative numbers: " << nnum << "\n";
    cout << "number of odd numbers: " << odd << "\n";
    cout << "number of even numbers: " << even << "\n";
    cout << "number of zero numbers: " << zero << "\n";

    return 0;
}