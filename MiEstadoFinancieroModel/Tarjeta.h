#pragma once
#include "Usuario.h"

using namespace System;

namespace MiEstadoFinancieroModel {
	public ref class Tarjeta {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajar� como p�blico*/
			int ID;
			String^ Entidad_bancaria;
			int Monto;
			Usuario^ objUsuario;

		/*M�todos*/
		public:
			Tarjeta();
	};
}