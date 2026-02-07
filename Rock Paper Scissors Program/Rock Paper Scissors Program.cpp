// Rock Paper Scissors Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>

std::string player;
char PlayerRPS();
char CompRPS();
void WhoWon(char choice, char compchoice);
void result();

int compscore = 0;
int playerscore = 0;


int main()
{
    while (1)
    {
        //Set the value of the player's option based on the function
        char Hum_player = PlayerRPS();

        //Break the loop if Quit is selected
        if (Hum_player == 'q' || Hum_player == 'Q')
        {
            break;
        }

        //Set the value of the computer choice
        char comp = CompRPS();

        //Checks who winds based on the player and computer input
        WhoWon(Hum_player, comp);

    }

    //Shows the result
    result();
}


char PlayerRPS()
{
    char choice = '0';

    //Ensure loop continues to run until an invalid input is given
    while (choice == '0')
    {
        std::cout << "Press R or r for rock" << std::endl;
        std::cout << "Press P or p for paper" << std::endl;
        std::cout << "Press S or s for scissors" << std::endl;
        std::cout << "Press Q or q to quit" << std::endl << std::endl;

        std::cin >> choice;
        //std::cout << choice << std::endl;

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

        else if (choice == 'Q' || choice == 'q')
        {
            player = "Quit";
        }

        //Any invalid inputs set "choice" equal to 0
        else
        {
            choice = '0';
            std::cout << "Please enter a valid value \n";
        }
    }

    std::cout << "You chose " << player << std::endl;
    return choice;
}
char CompRPS()
{
    std::random_device rd("default");

    //Numbers 1-3 will be selected randomly
    std::uniform_int_distribution uid(1, 3);
    char compchoice;

    if (uid(rd) == 1)
    {
        compchoice = 'r';
        std::cout << "The computer chose rock \n";
    }

    else if (uid(rd) == 2)
    {
        compchoice = 'p';
        std::cout << "The computer chose paper \n";
    }

    else
    {
        compchoice = 's';
        std::cout << "The computer chose scissors \n";
    }
    
    return compchoice;

}

void WhoWon(char choice, char compchoice)
{
    

    switch (choice)
    {
        std::cout << "Who won code reached switch statement \n";
        case 'r':  if (compchoice == 'r')
                    {
                        std::cout << "It's a tie!" << std::endl;
                        
                    }

                    if (compchoice == 'p')
                    {
                        std::cout << "Computer wins" << std::endl;
                        compscore++;
                        
                    }

                    if (compchoice == 's')
                    {
                        std::cout << "Player wins" << std::endl;
                        playerscore++;
                     
                    }
                    break;


        case 'p':  if (compchoice == 'r')
                    {
                        std::cout << "Player wins" << std::endl;
                        playerscore++;
                        
                    }

                    if (compchoice == 'p')
                    {

                        std::cout << "It's a tie!" << std::endl;
                        
                    }

                    if (compchoice == 's')
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

                    if (compchoice == 's')
                    {
                        std::cout << "It's a tie!" << std::endl;
                    }
                    break;
    }

    std::cout << std::endl;
}
void result()
{
    std::cout << "The player score is " << playerscore << std::endl;
    std::cout << "The CPU score is " << compscore << std::endl;

    if (playerscore > compscore)
    {
        std::cout << "You win! \n";
    }

    else if (playerscore < compscore)
    {
        std::cout << "CPU wins! \n";
    }

    else
    {
        std::cout << "It's a tie! \n";
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
