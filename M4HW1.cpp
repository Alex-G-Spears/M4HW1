// M4HW1
// Multiple table

#include <iostream> 
using namespace std;

int main () {

    // Variables
    int firstNum, secondNum, answer;
    cout << "Enter a number from 1 to 12?" << endl;
    cin >> firstNum;
    secondNum = 1;
    answer = firstNum * secondNum;

    for (firstNum; firstNum < 1 || firstNum > 12;) {
        cout << "Please enter a number from 1 to 12?" << endl;
        cin >> firstNum;
    }

    for (int i=1; i<= 12; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
    }
}