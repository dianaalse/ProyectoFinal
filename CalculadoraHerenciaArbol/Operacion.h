
#pragma once

#include "Elemento.h"
#include "Operando.h"
#include "Operador.h"
#include "OperadorSuma.h"
#include "OperadorResta.h"
#include "OperadorDivision.h"
#include "OperadorMultiplicacion.h"
#include "OperadorSen.h"
#include "OperadorCos.h"
#include "OperadorTan.h"
#include "OperadorLn.h"
#include "OperadorElevacion.h"
#include "OperadorFuncion.h"

using namespace std;

class Operacion : public Elemento {
private:

	static const int NUM_OPERADORES = 11;
	static const char OPERADORES[NUM_OPERADORES];
	static const char LEFT_PARENTHESIS = '(';
	static const char RIGHT_PARENTHESIS = ')';

	string operacion;
	
	virtual void imprimir(ostream&);
	void eliminarEspaciosEnBlanco();
	void eliminarParentesisInnecesarios(string &);
	int indiceMenorPrecedencia(string);
	Elemento * procesarStringHijo(string);

public:
	Operacion(string);
	virtual ~Operacion();

	Elemento * descomponer();
	string getValor();

	virtual Elemento * clonar();
};

