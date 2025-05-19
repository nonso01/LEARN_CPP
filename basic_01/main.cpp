#include <iostream>

using namespace std;

int fizzBuzz(int);

int * big_num = 0;

int main()
{

    fizzBuzz(0x1a);
    // cout << big_num;
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
