#ifndef _MYLIB_HPP_
#define _MYLIB_HPP_

#include <iostream>
#include <vector>
#include <string>

#include "Point2D.hpp"


void Exercice3();

/**
 * @fn int randomInt(int min, int max)
 * @brief Génère un nombre d'entier aléatoire et une structure
 * @param int min et max, donne une valeur aléatoire entre min et max
*/
int randomInt(int min, int max);

/**
 * @fn void plusOuMoins()
 * @brief Permet de vérifier si le nombre secret est plus grand ou plus petit
 * @param int Le nombre que l'utilisateur donne pour trouver le nombre secret
*/
void plusOuMoins(int findNumber);

/**
 * @fn bool playAgain()
 * @brief Demande à l'utilisateur si il veut rejouer ou non
 * @param bool retourne à vrai ou faux
*/
bool playAgain();

/**
 * @brief Permet d'affichée dans le terminal les 2 formes creuses données
*/
void Exercice1();

/**
 * @brief Permet d'affichée dans le terminal les position d'un ensemble de point générées aléatoirement
*/
void Exercice2();



/**
 * @brief Permet d'affichée dans le terminal les 2formes creuses données
 * @param int x et y 
*/
void formeCreuse(int x, int y);

float distanceEuclidienne(Point2D p1, Point2D p2);

float distanceManhattan(Point2D p1, Point2D p2);

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist);

#endif // _MYLIB_HPP_