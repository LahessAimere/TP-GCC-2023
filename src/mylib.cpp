#include "mylib.hpp"
#include <random>


void Exercice1()
{
    int characters = 0;
    int lignes = 0;

    std::cout << "Give the number of charater you want per line" << std::endl;
    std::cin >> characters;
    std::cout << "Give the number of lines" << std::endl;
    std::cin >> lignes;
    formeCreuse(characters, lignes);
}

void formeCreuse(int x, int y)
{
  for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (i == 0 || i == x-1){
                std::cout << '*';
            } else if (j == 0 || j == y-1){
                std::cout << '*';
            } else{
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }
}

void Exercice2()
{
    std::vector<Point2D> points;
    int dist = 100;
    int n = 10;

    // Générer aléatoirement des positions pour les points
    for (int i = 0; i < n; i++) {
        Point2D p;
        p.x = randomInt(0, 99);
        p.y = randomInt(0, 99);
        points.push_back(p);
    }
    
    // Choisir un point P aléatoirement dans le tableau
    Point2D P = points[randomInt(0, n-1)];

    // Trouver les plus proches voisins de P
    plusProcheVoisin(points, P, dist);

    std::cout << "Exemple of point : " << P << std::endl;
    std::cout << "Exemple of point : " << points.at(n) << std::endl;
}

float distanceManhattan(Point2D p1, Point2D p2)
{
    return abs(p2.x-p1.x) + abs(p2.y-p1.y);
}


float distanceEuclidienne(Point2D p1, Point2D p2)
{
     return std::sqrt(std::pow(p2.x-p1.x, 2) + std::pow(p2.y-p1.y, 2));
}

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
{
    //Déclare un vecteur de type Point2D appelé ppv
    std::vector<Point2D> ppv;

    //Parcours chaque point du tableau points
    for (int i = 0; i < points.size(); i++)
    {
        Point2D p = points.at(i);
        if (distanceEuclidienne(p, P) <= dist)
        {
            ppv.push_back(p);
        }
    }

    //Parcours chaque point dans le vecteur ppv
    std::cout << "Les plus proches voisins de P sont : " << std::endl;
    for (int i = 0; i < ppv.size(); i++)
    {
        Point2D p = ppv.at(i);
        std::cout << "(" << p.x << ", " << p.y << ")" << std::endl;
    }
}

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

            std::cout << "You still have " << remainingTries-- << " tries" << std::endl;

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