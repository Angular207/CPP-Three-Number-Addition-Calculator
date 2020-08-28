#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c, d;
    cout << "Welcome to the Three Number Addition Calculator!" << endl;
    cout << "What is the first number?" << endl;
    cin >> a;
    cout << "What is the second number?" << endl;
    cin >> b;
    cout << "What is the thrid number?" << endl;
    cin >> c;
    d = a + b + c;
    cout << "The answer is " << d << "." << endl;
    cout << "Thank you for viewing this program!" << endl;
}