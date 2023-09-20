#include <iostream>
using namespace std;

int max(int a, int b, int c){
    int result = a;
    if (b > result){
        result = b;
    }
    if (c > result){
        result = c;
    }

    cout << "max: " << result << "\n";
    return result;
}

int min(int a, int b, int c){
    int result = a;
    if (b < result){
        result = b;
    }
    if (c < result){
        result = c;
    }

    cout << "min: " << result << "\n";
    return result;
}

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    cout << "Third number: ";
    cin >> c;

    max(a, b, c);
    min(a, b, c);
}