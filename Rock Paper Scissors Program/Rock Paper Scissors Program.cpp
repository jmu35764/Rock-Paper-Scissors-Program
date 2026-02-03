// Rock Paper Scissors Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string player;

//string player;

int main()
{
    char choice = '0';
    while (choice == '0')
    {
        std::cout << "Press R or r for rock" << std::endl;
        std::cout << "Press P or p for paper" << std::endl;
        std::cout << "Press S or s for scissors" << std::endl;

        std::cin >> choice;
        std::cout << choice;

        if (choice == 'R' || choice == 'r')
        {
            player = "rock";
        }

        else if (choice == 'P' || choice == 'p')
        {
            player = "Paper";
        }

        else if (choice == 'S' || choice == 's')
        {
            player = "Scissors";
        }

        else
        {
            choice = '0';
            std::cout << "Please enter a valid value \n";
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
