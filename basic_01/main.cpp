#include <iostream>

// using namespace std;

int yourname(std::string name);
int fizzbuzz(int number);

int main()
{
    // std::string name = "";
    // yourname(name);
    int number = 20;
    fizzbuzz(20);
    return 0;
}

int yourname(std::string name)
{
    std::cout << "what is your name\n";
    std::cin >> name;
    std::cout << "Welcome " << name << "\n";

    return 0;
}

int fizzbuzz(int number)
{
    for (int i = 0; i < number; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << "fizz even " << i << "\n";
        }
        else
        {
            std::cout << "buzz odd " << i << "\n";
        }
    }
    return 0;
}