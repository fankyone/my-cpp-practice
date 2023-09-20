#include <iostream>
#include <climits>
#include <ctime>
#include <cstdlib>
using namespace std;


//void myfirstfunction(string name, int age);


int main(){

    //梯形公式
    /*int a = 0, b = 0;
    int sum = 0;
    cout << "Enter initial number: ";
    cin >> a;
    cout << "Enter end number: ";
    cin >> b;

    for(int i = a; i <= b; i++){
        sum = sum + i;
    }

    cout << "Answer = " << sum;
    */

    //陣列
    /*for (int y = 1; y <= 3; y++){
        for (int x = 1; x <= 3; x++){
            cout << "(" << x << ", " << y << ")";
        }
        cout << "\n";
    }
    */


    //sizeof
    /*cout << "int size " << sizeof(int) << " byte" << "\n";
    cout << "char size " << sizeof(char) << " byte" << "\n";
    cout << "bool size " << sizeof(bool) << " byte" << "\n";
    */



    //Random number, dice rolling
    /*
    srand(time(NULL));
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << "\n";
    cout << num2 << "\n";
    cout << num3 << "\n";
    */


    //random event
    /*srand(time(0));
    int randnum = rand() % 5 + 1;

    switch(randnum){
        case 1:
            cout << "Event 1";
            break;
        case 2:
            cout << "Event 2";
            break;
        case 3:
            cout << "Event 3";
            break;
        case 4:
            cout << "Event 4";
            break;
        case 5:
            cout << "Event 5";
            break;
    }

    return 0;
    */

    //Number guessing game
    /*
    int guess;
    int tries = 0;

    srand(time(NULL));
    int random_num = (rand() % 10) + 1;
    cout << "Enter your guessing number: ";
    cin >> guess;

    while (guess != random_num){
        if(guess > random_num){
            cout << "Too high, Try again: ";
        }
        else if( guess < random_num){
            cout << "Too low, Try again: ";
        }
        tries = tries + 1;
        cin >> guess;
    }

    cout << "Random number: " << random_num << "\n" << "You have guessed for "
    << tries << " times"; 
    return 0;
    */


   //Function
   /*
   string name = "Marvin";
   int age = 31;
   myfirstfunction(name, age);
   */

  //Return Keyword

  
}

void myfirstfunction(string name, int age){
    cout << "My name is " << name << ". I'm " << age << " years old";
}
