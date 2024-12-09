#pragma once
#include "Turno.h"

Turno cargarTurno();
void buscarTurnoPorDni();
void buscarTurnoPorFecha();
void buscarTurnoPorMatricula();
void buscarTurnoPorMatriculaYFecha();
void guardarTurno();
void editarTurno();
void mostrarTodosTurnosActivos();
void eliminarTurno();
bool validarFechaTurno(Turno t1, Turno t2);
bool validarExisteTurno(Turno t);
void mostrarTodosTurnosEliminados();
void restaurarTurno();
void informarProfesionalQueMasPacientesAtendio();
void informarEspecialidadMasSolicitada();
void informarProfesionalMayoresAtencionesParticulares();
