/**
 * @file Estudiante.h
 * @author Miguel Ángel Blanch Mendoza
 * @brief 
 * @version 0.1
 * @date 2026-11-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */


#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


#include <iostream>
#include <string>


/* =========================
Clase Estudiante
========================= */
class Estudiante {
  
  private:
  
    int id;
    std::string nombre;
  
  public:

    Estudiante(int id, const std::string& nombre) : id(id), nombre(nombre) {}

    int getId() const { return id;  }
  
    std::string getNombre() const { return nombre; }

};


#endif