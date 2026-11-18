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

    /* ----- Gestión de estudiantes ----- */
    void altaEstudiante(int id, const std::string& nombre) {

    }
    void bajaEstudiante(int id) {

    // Debería eliminar al estudiante de todas las matrículas
    }

    /* ----- Gestión de asignaturas ----- */
    void crearAsignatura(const std::string& nombre) {

    }
    void eliminarAsignatura(const std::string& nombre) {

    }
    /* ----- Matrículas ----- */
    void matricular(int id, const std::string& asignatura) {

    }

    void desmatricular(int id, const std::string& asignatura) {

    }
    /* ----- Consultas ----- */
    void listarEstudiantes() const {

    }
    void listarAsignaturas() const {

    }
    void estudiantesPorAsignatura(const std::string& asignatura) const {

    }

};


#endif 