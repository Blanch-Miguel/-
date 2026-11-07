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



#ifndef MATRICULA_H
#define ESTUDIANTE_H

#include <string>

typedef int ID;

class Estudiante {
  
  private:

    ID id_estudiante; 
    std::string nombre; 

  public:

    /**
     * @brief Constructor con parámmetros
     * 
     * @param _id 
     * @param _nombre 
     */
    Estudiante(ID _id, const std::string& _nombre);

};


#endif