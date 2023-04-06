#include "mylib.hpp"

#include <random>


int randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis (gen);
}

void Exercice1()
{
    int nbchar =0;
    int nblignes = 0;

    std::cout << "Veuillez entrer le nombre de lignes à afficher: ";
    std::cin >> nblignes;
    std::cout << "Veuillez entrer le nombre de caractères à afficher: ";
    std::cin >> nbchar;

    for (int i = 0; i < nblignes; i++)
    {
        int creuse1 = 0;
        int creuse2 = 0;

        std::cout << "Veuillez entrer la disposition du caractère * pour la ligne " << (i + 1);
        std::string disposition;
        std::cin >> disposition;

  

        formeCreuse(creuse1, creuse2);
    }

    std::cout << std::endl;
}

void formeCreuse(int x, int y)
{

     for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x; j++) {
            if (i == 1 || i == x || j == 1 || j == x) 
            {
                std::cout << "*";
            } else {
                std::cout << "  ";
            }
        }
     }
    

    for (int i = 1; i <= y; i++) {
        for (int j = 1; j <= y; j++) {
            if (i == 1 || i == y || j == 1 || j == y) 
            {
                std::cout << "*";
            } else {
                std::cout << "  ";
            }
        }
    }
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

void plusOuMoins()
{

}