/**
 * @file Matricula.h
 * @author Miguel Ángel Blanch Mendoza
 * @brief 
 * @version 0.1
 * @date 2026-11-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */


#ifndef MATRICULA_H
#define MATRICULA_H

#include <string>


class Matricula {

  private:

    std::string nombre;

  public:

    Matricula(const std::string& nombre) : nombre(nombre) {}

    std::string getNombre() const { return nombre; };

};


#endif 