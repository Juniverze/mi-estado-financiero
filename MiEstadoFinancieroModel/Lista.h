#pragma once
#include "Usuario.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MiEstadoFinancieroModel {

	public ref class Lista {
		/*Estos son los atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajará como público*/
			int ID;
			String^ Nombre;
			int Monto;
			Usuario^ objUsuario;

		/*métodos*/
		public:
			Lista();
	};

}


