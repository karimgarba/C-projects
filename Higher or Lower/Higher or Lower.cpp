#include <iostream>
#include<cstdlib>
using namespace std;

int main(){
    int attempts = 1;
    int number = 1 + (rand() % 100);
    int guess;
    bool playing = true;

    cout << "Higher or Lower\n";
    cout << "===============\n";
    while (playing == true){
        cout << "Guess a number: \n";
        cin >> guess;

        if(guess == number){
            cout << "That is the correct number\n";
            cout << "It took you " << attempts << " attempt(s)";
            playing = false;
        }

        else if(guess > number){
            cout << "Too high!\n";
            attempts += 1;
        }

        else{
            cout << "Too low!\n";
            attempts += 1;
        }
    }
   
}