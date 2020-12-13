#ifndef GUESSNUMBER_H
#define GUESSNUMBER_H
#include <iostream>
#include <time.h>
using namespace std;

void MainMenu();
int GetChoice(int min,int max);
double guessGame( );
void PrintScore( );
void Quit();
int NumDigits(int number);
int numPoints(double timesec);
#endif
