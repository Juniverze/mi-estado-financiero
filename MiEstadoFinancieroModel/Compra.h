#pragma once
#include "Lista.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/

namespace MiEstadoFinancieroModel {

	public ref class Compra {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajar� como p�blico*/
			int ID;
			int Monto;
			String^ Nombre;
			int Cantidad;
			Lista^ objLista;

		/*m�todos*/
		public:
			Compra();
	};
}
