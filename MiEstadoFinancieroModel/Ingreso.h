#pragma once
#include "Usuario.h"

using namespace System;

namespace MiEstadoFinancieroModel {
	public ref class Ingreso {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajará como público*/
			int ID;
			String^ Categoria;
			int Monto;
			String^ Fecha;
			Usuario^ objUsuario;

		/*Métodos*/
		public:
			Ingreso();
	};

}
