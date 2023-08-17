#include <iostream>
using namespace std;

string choice;
float num1;
float num2;

float addition(float num1, float num2){
    return num1 + num2;
}
float subtraction(float num1, float num2){
    return num1 - num2;
}
float multiplication(float num1, float num2){
    return num1 * num2;
}
float division(float num1, float num2){
    return num1 / num2;
}

int main(){
    cout << "What calculation do you want to do: \n";
    cout << "1) Addition \n";
    cout << "2) Subtraction \n";
    cout << "3) Multiplication \n";
    cout << "4) Division \n";
    cin >> choice;
    cout << "Type in your first number \n";
    cin >> num1;
    cout << "Type in your second number \n";
    cin >> num2;

    if(choice == "1"){
        std::cout << "The sum of " << num1 << " and " << num2 << " is: " << addition(num1, num2);
    }
    if(choice == "2"){
        std::cout << "The difference of " << num1 << " and " << num2 << " is: " << subtraction(num1, num2);
    }
    if(choice == "3"){
        std::cout << "The product of " << num1 << " and " << num2 << " is: " << multiplication(num1, num2);
    }
    if(choice == "4"){
        std::cout << "The quotient of " << num1 << " and " << num2 << " is: " << division(num1, num2);
    }
    return 0;
}