#include "guessnumber.h"
int main()
{
    int Choice;
    MainMenu();
    Choice = GetChoice(1,3);
    while(1)
    {
        if(Choice == 1)
        {
            guessGame();
            PrintScore();
        }
        else if (Choice == 2)
        {
            PrintScore();
        }
        else if (Choice == 3)
        {
            Quit();
        }
        MainMenu();
        Choice=GetChoice(1,3);
    }
    return 0;
}
