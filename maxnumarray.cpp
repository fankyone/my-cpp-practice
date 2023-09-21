#include <iostream>
using namespace std;

int maxnum(int a, int b, int c, int d, int e){
    int result = a;
    if(b > result){
        result = b;
    }
    if(c > result){
        result = c;
    }
    if(d > result){
        result = d;
    }
    if(e > result){
        result = e;
    }
    cout << "Max number: " << result << "\n";
    return result;
}


int main(){
    int numbers[5];
    
    int n = sizeof(numbers) / sizeof(numbers[0]);
    for(int i = 0; i < n; i++){
        cin >> numbers[i];
        cout << "\n";
    }

    maxnum(numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
    
    return 0;
}