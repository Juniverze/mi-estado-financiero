#pragma once
#include "Usuario.h"

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MiEstadoFinancieroModel {
	public ref class Chat {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajará como público*/
			int Codigo_chat;
			String^ Mensaje;
			Usuario^ objUsuario;

		/*Métodos*/
		public:
			Chat();
	};
}


