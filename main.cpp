/**
 * Program to transform degenerate greeting phrases into their correct form.
 * @author David Maier
 * @version 1.0
 */

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fixGreeting(string greeting)
{
    char delimiter = ' ';
    string correctGreeting = "";
    string currentWord;
    stringstream stream(greeting);

    while (getline(stream, currentWord, delimiter))
    {
        correctGreeting.append(currentWord.substr(0, 2));
    }

    printf("The correct form of the greeting phrase is [%s].\n", correctGreeting.c_str());
}

void userInterface(void)
{
    printf("Gumo, this is a program to transform greeting phrases into their correct form.\n");
    printf("Please enter a greeting phrase: ");
    string input;
    getline(cin, input);
    fixGreeting(input);
}

int main(void)
{
    userInterface();
    return 0;
}
