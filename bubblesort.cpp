#include <iostream>
using namespace std;

void bubblesort(int array[], int size){
    int temp = 0;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++)
        if(array[j] > array[j+1]){
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp; 
        }
    }
    for (int i = 0; i < size; i++){
        cout << " " << array[i];
    }
    cout << "\n";
}

int main(){
    int array[] = {12, 10, 1, 22, 76, 4};
    int size = sizeof(array) / sizeof(array[0]);

    bubblesort(array, size);

    return 0;
}