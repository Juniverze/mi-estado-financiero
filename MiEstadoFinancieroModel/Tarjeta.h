#pragma once
#include "Usuario.h"

using namespace System;

namespace MiEstadoFinancieroModel {
	public ref class Tarjeta {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajará como público*/
			int ID;
			String^ Entidad_bancaria;
			int Monto;
			Usuario^ objUsuario;

		/*Métodos*/
		public:
			Tarjeta();
	};
}