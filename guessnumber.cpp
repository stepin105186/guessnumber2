#include <iostream>
#include<guessnumber.h>
using namespace std;
int Score;
void MainMenu()
{
    char name[20];
    cout<<"Enter your name:";
    cin>>name;
    cout<< "\nHello Welcome to Guessing Game " << name;
    cout<< "\nRULES:\n1. Only 8 chances to guess the randomly generated number."<< endl;
    cout<< "2.You can WIN the game when the number guessed is same as the randomly generated number."<< endl;
    cout<< "3.Hints will be provided during the PLAY."<< endl;
    cout<< "$$$ Good Luck. Start Guessing $$$"<< endl;
    cout<< "\nPick a game from the following:"<< endl;
    cout<< "1.Play Guessing Game.\n2.Print Score.\n3.Quit.\n"<< endl;
}

int GetChoice(int min,int max)
{
    int Choice=0;
    while(Choice < min || Choice > max)
    {
        cout<< "Enter a choice from 1 to 3:\n";
        cin>> Choice;
    }
    return Choice;
}

double guessGame()
{
    int max;
    double InScore;
    int digits;
    int guess=0;
    int random=0;
    int i=0;
    int start = time(0);
    cout<< "\nWhat maximum number would you like to guess?\n";
    cin >> max ;
    digits = NumDigits(max);
    srand(time(0));
    random = rand() % max + 1;
    cout<< "\nNow Guess a number:\n";
    cin>> guess;
    i++;
    while(guess != random)
    {
        if(guess < random)
        {
            cout<< "Your guess is too low.Guess again."<< endl;
        }
        else if(guess > random)
        {
            cout << "Your guess is too high.Guess again."<<endl;
        }
        cin>>guess;
        i++;
    }
    int end = time(0);
    int timespent = end-start;
    cout << "\nYou guessed correctly the number in tries:"<< i;
    cout << "\nYou guessed correctly the number in seconds:"<< timespent<<endl;
    InScore = timespent/(2*digits);
    Score += numPoints(InScore);
    return InScore;
}

void PrintScore()
{
    cout<< "\nYour current score is "<< Score<<endl;
}

void Quit()
{
    cout<< "\nThank you for playing!\n\n"<< endl;
    exit(0);
}

int NumDigits(int number)
{
    int count=0;
    while(number!=0)
    {
        number/=10;
        count++;
    }
    return count;
}
int numPoints(double timesec)
{
    if(timesec < 1)
    {
        return 10;
    }
    else if(timesec < 2)
    {
        return 9;
    }
    else if(timesec < 3)
    {
        return 8;
    }
    else if(timesec < 4)
    {
        return 7;
    }
    else if(timesec < 5)
    {
        return 6;
    }
    else if(timesec < 6)
    {
        return 5;
    }
    else if(timesec < 7)
    {
        return 4;
    }
    else if(timesec < 8)
    {
        return 3;
    }
    else if(timesec < 9)
    {
        return 2;
    }
    else if(timesec <= 10)
    {
        return 1;
    }
    else if(timesec > 10)
    {
        return 0;
    }
}
