#include <iostream>
using namespace std;

void sumtotal(int a[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum + a[i];
    }
    cout << "Sum: " << sum << "\n";
}

void producttotal(int a[], int size){
    int product = 1;
    for (int i = 0; i < size; i++){
        product = product * a[i];
    }
    cout << "Product: " << product << "\n";
}

int main(){
    int a[10];
    for(int i = 0; i < 10; i++){
        cout << "Enter " << i + 1 << "th" << " number: ";
        cin >> a[i];
    }
    sumtotal(a,10);
    producttotal(a,10);
    return 0;
}