#pragma once
#include "Usuario.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/

namespace MiEstadoFinancieroModel {
	public ref class Deuda {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajar� como p�blico*/
			int ID;
			String^ Descripcion;
			int Monto;
			String^ Estado;
			String^ Fecha_deuda;
			Usuario^ objUsuario;

		/*M�todos*/
		public:
			Deuda();
	};
}
