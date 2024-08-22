#include <iostream>
#include <string>

using namespace std;

int main() {
    double number1,number2,number3;
    cout << "Enter three numbers: " << endl;
    cin >> number1 >> number2 >> number3;

    if(number1 == number2 && number2 == number3) {
        cout << "all the same" << endl;
    }else if(number1 != number2 && number2 != number3 && number1 != number3){
        cout << "all different" << endl;
    }else{
        cout << "neither" << endl;
    }
    
    
    return 0;
}