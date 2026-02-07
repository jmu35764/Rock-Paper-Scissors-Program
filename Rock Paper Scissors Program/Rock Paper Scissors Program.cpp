// Rock Paper Scissors Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>

std::string player;

//string player;
int compscore = 0;
int playerscore = 0;

char PlayerRPS()
{
    char choice = '0';
    while (choice == '0')
    {
        std::cout << "Press R or r for rock" << std::endl;
        std::cout << "Press P or p for paper" << std::endl;
        std::cout << "Press S or s for scissors" << std::endl;

        std::cin >> choice;
        std::cout << choice << std::endl;

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

    std::cout << player;
    return 0;
}
char CompRPS()
{
    std::random_device rd("default");
    std::uniform_int_distribution uid(1, 3);
    char compchoice;

    if (uid(rd) == 1)
    {
        compchoice = 'r';
        std::cout << "rock \n";
    }

    else if (uid(rd) == 2)
    {
        compchoice = 'p';
        std::cout << "paper \n";
    }

    else
    {
        compchoice = 's';
        std::cout << "scissors \n";
    }

    return compchoice;

}

void WhoWon(char choice, char compchoice)
{
    switch (choice)
    {
        case 'r':  if (compchoice == 'r')
                    {
                        std::cout << "It's a tie!" << std::endl;
                        
                    }

                    if (compchoice == 'p')
                    {
                        std::cout << "Computer wins" << std::endl;
                        compscore++;
                        
                    }

                    else
                    {
                        std::cout << "Player winns" << std::endl;
                        playerscore++;
                     
                    }
                    break;


        case 'p':  if (compchoice == 'r')
                    {
                        std::cout << "Player winns" << std::endl;
                        playerscore++;
                        
                    }

                    if (compchoice == 'p')
                    {

                        std::cout << "It's a tie!" << std::endl;
                        
                    }

                    else
                    {
                        std::cout << "Computer wins" << std::endl;
                        compscore++;
                        
                    }
                    break;

        case 's':  if (compchoice == 'r')
                    {
                        std::cout << "Computer wins" << std::endl;
                        compscore++;
                    }

                    if (compchoice == 'p')
                    {
                        std::cout << "Player wins" << std::endl;
                        playerscore++;
                    }

                    else
                    {
                        std::cout << "It's a tie!" << std::endl;
                    }
                    break;
    }
}

int main()
{
    //char choice = '0';
    //char comp

    PlayerRPS();
    std::cout << player;

    CompRPS();
    WhoWon(char choice, char compchoice);


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
