// CollaborationKhaza2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void fun1(int x, int y)
{
    cout << x * y << endl;
}
void fun2(int a, int b)
{
    cout << a + b << endl;
}
int main()
{
    cout << "Hello World!\n";
    cout << "Apples" << endl;
    cout << "grapes" << endl;
    cout << "Dry fruits" << endl;
    fun1(50, 2);
    fun2(100, 200);
    fun2(500, 500);
    return 0;
}

