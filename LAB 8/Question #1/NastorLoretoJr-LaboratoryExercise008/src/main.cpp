// QUESTION #1:	Write a program that can divide six non-zero integers (two integers per division) from the user and display the result to the user. Create a function that will perform the division operation. Display only the non-decimal part of the quotient.

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int n[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number (" << i + 1 << ") : ";
        cin >> n[i];
    }

    cout << "\nThe entered numbers are " << n[0] << ", " << n[1] << ", " << n[2] << ", " << n[3] << " and " << n[4] << ".";
    cout << endl;


system ("pause");
    return EXIT_SUCCESS;

}