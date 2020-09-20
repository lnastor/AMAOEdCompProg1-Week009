// QUESTION #3:	Write a program that will ascendingly sort six (6) integers from the user. Use only four (4) variables (including the array).

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "_pause.h"

using namespace std;

int fibonacci (int x) {
    int f[x + 2];
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= x; i++) {
        f[i] = f[i - 1] + f [i - 2];
    }
    return f[x];
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "The " << "th number in the fibonacci sequence is " << fibonacci (n) << ".";
    cout << endl;
0
    system ("pause");
    return EXIT_SUCCESS;
}
