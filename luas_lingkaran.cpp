#include <iostream>

using namespace std;

float r;
float phi = 3.14159;

void input()
{
    cout << "isikan jari : ";
    cin >> r;
}

float luas(float a)
{
    return phi * a * a;
}

void output()
{
    cout << "luas lingkaran: " << luas(r) << endl;
}

int main()
{
    input();
    output();
}