#include "Estudiante.h"
#include "Matricula.h"
#include "SistemaMatriculas.h"


int main() {

  SistemaMatriculas sistema; 
  
  sistema.altaEstudiante(1, "Ana");
  sistema.altaEstudiante(2, "Luis");
  sistema.altaEstudiante(3, "María");
  sistema.crearAsignatura("Estructuras de Datos");
  sistema.crearAsignatura("Metodología de la Programación");
  sistema.matricular(1, "Estructuras de Datos");
  sistema.matricular(2, "Estructuras de Datos");
  sistema.matricular(3, "Metodología de la Programación");
  sistema.listarEstudiantes();
  sistema.listarAsignaturas();
  sistema.estudiantesPorAsignatura("Estructuras de Datos");
  
  return 0;
}