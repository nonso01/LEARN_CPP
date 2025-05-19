#include <iostream>

using namespace std;

int fizzBuzz(int);
int main()
{

    fizzBuzz(20);
    return 0;
}

int fizzBuzz(int number)
{
    for (int i = 0; i < number; i++)
    {
        if (i % 2 == 0)
        {
            cout << "fizz\n";
        }
        else
        {
            cout << "buzz\n";
        }
    }
    return 0;
}