#pragma once
#include "Usuario.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/

namespace MiEstadoFinancieroModel {

	public ref class Lista {
		/*Estos son los atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajar� como p�blico*/
			int ID;
			String^ Nombre;
			int Monto;
			Usuario^ objUsuario;

		/*m�todos*/
		public:
			Lista();
	};

}


