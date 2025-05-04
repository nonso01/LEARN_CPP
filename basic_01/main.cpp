#include <iostream>

using namespace std;

int main()
{
    int loop(int);

    loop(12);
    //    cout << add << endl;
    return 0;
}

int loop(int num)
{
    for (int i = 0; i < num; i++)
    {
        if (i == 11)
            break;
        cout << i << endl;
    }
    return 0;
}