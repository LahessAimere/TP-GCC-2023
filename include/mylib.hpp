#ifndef _MYLIB_HPP_
#define _MYLIB_HPP_

#include <iostream>
#include <vector>
#include <string>

#include "Point2D.hpp"

/**
 * @brief Génère un nombre d'entier aléatoire et une structure
*/
int randomInt(int min, int max);

/**
 * @brief Permet d'affichée dans le terminal les 2 formes creuses données
*/
void Exercice1();

/**
 * @brief Permet d'affichée dans le terminal les position d'un ensemble de point générées aléatoirement
*/
void Exercice2()

/**
 * @brief Permet d'affichée dans le terminal les 2formes creuses données
 * @param int x et y 
*/
void formeCreuse(int x, int y);

float distanceEuclidienne(Point2D p1, Point2D p2);

float distanceManhattan(Point2D p1, Point2D p2);

void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist);

void plusOuMoins();

#endif // _MYLIB_HPP_