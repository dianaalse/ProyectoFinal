
#pragma once

#include "OperadorBinario.h"
#include "Operando.h"

class OperadorMultiplicacion : public OperadorBinario {

protected:
	virtual void imprimir(ostream&);

public:
	OperadorMultiplicacion();
	~OperadorMultiplicacion();

	virtual Elemento * operar(Elemento *, Elemento *);

	virtual Elemento * clonar();
};

