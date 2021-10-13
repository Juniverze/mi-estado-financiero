#pragma once
#include "Lista.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MiEstadoFinancieroModel {

	public ref class Compra {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajará como público*/
			int ID;
			int Monto;
			String^ Nombre;
			int Cantidad;
			Lista^ objLista;

		/*métodos*/
		public:
			Compra();
	};
}
