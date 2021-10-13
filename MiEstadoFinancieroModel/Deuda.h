#pragma once
#include "Usuario.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MiEstadoFinancieroModel {
	public ref class Deuda {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajará como público*/
			int ID;
			String^ Descripcion;
			int Monto;
			String^ Estado;
			String^ Fecha_deuda;
			Usuario^ objUsuario;

		/*Métodos*/
		public:
			Deuda();
	};
}
