// QUESTION #2: Write a program that will accept a short value from 10 to 99 and display them per digit (separated by a space).


#include <cstdlib>
#include <iostream>

using namespace std;

void dgt(short num)
    {string dgt=to_string(num);
    cout << endl<< "Result: ";
for (int x=0; x <dgt.length();x++)
{cout << dgt[x] << " ";}}

int main() {

    short num=0;

    do
    {cout << "Enter a number [10-99]: ";
    cin >> num;}
    while (num<10 and num>99);

    dgt(num);

    cout << endl;
    
    system ("pause");
    return EXIT_SUCCESS;

}