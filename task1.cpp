#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0;
    int guess = 0;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "********** NUMBER GUESSING GAME **********\n";

    do
    {
        cout << "Enter your guess between 1 and 100: ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "your guess is high!\n";
        }
        else if (guess < num)
        {
            cout << "your guess is low!\n";
        }
        else
        {
            cout << "congrats! you guessed correctly in '" << tries << "'tries\n";
        }

    } while (guess != num);

    cout << "******************************************";

    return 0;
}