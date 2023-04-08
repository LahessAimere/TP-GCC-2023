#ifndef _MYLIB_HPP_
#define _MYLIB_HPP_

#include <iostream>
#include <vector>
#include <string>

#include "Point2D.hpp"

/**
 * @fn void Exercice1()
 * @brief Permet d'affichée dans le terminal les 2 formes creuses données
*/
void Exercice1();

/**
* @fn void Exercice2()
* @brief Permet d'affichée dans le terminal les positions d'un ensemble de points générées aléatoirement
*/
void Exercice2();
/**
 * @fn void Exercice3()
 * @brief le jeu du juste prix
*/
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
 * @fn void formeCreuse(int x, int y)
 * @brief Permet d'affichée dans le terminal les 2formes creuses données
 * @param int x et y 
*/
void formeCreuse(int x, int y);

/**
 * @fn float distanceEuclidienne(Point2D p1, Point2D p2)
 * @brief Calcule la distance entre deux points à n dimensions
 * @param Point2D p1 et p2
*/
float distanceEuclidienne(Point2D p1, Point2D p2);

/**
 * @fn float distanceManhattan(Point2D p1, Point2D p2)
 * @brief Calcule la distance entre deux points dans un espace euclidien à deux dimensions
 * @param Point2D p1 et p2
*/
float distanceManhattan(Point2D p1, Point2D p2);

/**
 * @fn void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist)
 * @brief Calcule les points les plus proches
 * @param vector calcul le vector avec les positions de point avec leur distance
 * @param Point2D points et P, positions des points en deux dimentions
 * @param int dist, la distance
*/
void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist);

#endif // _MYLIB_HPP_