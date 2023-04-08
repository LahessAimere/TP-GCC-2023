#include "mylib.hpp"

#include <random>

void Exercice3()
{
    int min = 1;
    int max = 100;
    int minTries = 5;
    int maxTries = 10;

    bool play = true;

    while (play)
    {
        int secretNumber = randomInt(min, max);
        int remainingTries = randomInt(minTries, maxTries);
        // Est le nombre proposé par le joueur
        int guess;
        bool victory = false;

        std::cout << "I have a secret number between " << min << " and " << max << std::endl;
        std::cout << "You have " << remainingTries << " tries to guess it" << std::endl;

        while (remainingTries > 0 && !victory)
        {
            std::cout << "Enter your guess: ";
            std::cin >> guess;

            if (guess < min || guess > max)
            {
                std::cout << "Invalid guess. Please enter a number between " << min << " and " << max << std::endl;
            }

            std::cout << "You still have" << remainingTries-- << "tries" << std::endl;

            if (guess == secretNumber)
            {
                victory = true;
            }
            else
            {
                plusOuMoins(guess - secretNumber);
            }
        }

        if (victory)
        {
            std::cout << "Congratulations! You have found the secret number " << secretNumber << " in " 
            << (maxTries - remainingTries) << " attempts" << std::endl;
        }
        else
        {
            std::cout << "Sorry, you did not find the secret number " << secretNumber << std::endl;
        }

        play = playAgain();
    }

    std::cout << "Thank you for playing!" << std::endl;

}

int randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis (gen);
}

void plusOuMoins(int findNumber)
{
    if (findNumber < 0)
    {
        std::cout << "More" << std::endl;
    }
    else
    {
        std::cout << "Less" << std::endl;
    }
}

bool playAgain()
{
    char answer;
    bool validAnswer = false;
     while (!validAnswer) 
     {
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> answer;

        if (answer == 'y' || answer == 'Y') {
            validAnswer = true;
        } 
        if (answer == 'n' || answer == 'N') {
            validAnswer = true;
        } 
        else {
            std::cout << "Invalid answer. Please enter between (y/n):" << std::endl;
        }
    }

    return answer == 'y' || answer == 'Y';
}

void formeCreuse(int x, int y)
{

}

float distanceManhattan(Point2D p1, Point2D p2)
{
    return 0.0f;
}


float distanceEuclidienne(Point2D p1, Point2D p2)
{
    return 0.0f;
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{

}

