/**
 * @file SistemaMatriculas.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2026-11-09
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#ifndef SISTEMA_MATRICULAS_H
#define SISTEMA_MATRICULAS_H


#include <map>
#include <set>

#include "Estudiante.h"

class SistemaMatriculas {

  private:

    std::map<int, Estudiante> estudiantes; // ID -> Estudiante
    std::set<std::string> asignaturas;
    std::map<std::string, std::set<int>> matriculas;

  public:

    

};


#endif 