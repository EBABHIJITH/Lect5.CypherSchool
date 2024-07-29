#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Input 4 integers a, b, c, and d" << endl;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout << (a > b && c > d) << endl; // Output for logical AND operation
    cout << (a > b || c > d) << endl; // Output for logical OR operation

    return 0;
}
