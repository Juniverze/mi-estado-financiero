#pragma once
#include "Usuario.h"

using namespace System;

namespace MiEstadoFinancieroModel {
	public ref class Ingreso {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajar� como p�blico*/
			int ID;
			String^ Categoria;
			int Monto;
			String^ Fecha;
			Usuario^ objUsuario;

		/*M�todos*/
		public:
			Ingreso();
	};

}
