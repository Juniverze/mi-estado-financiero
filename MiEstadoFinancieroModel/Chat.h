#pragma once
#include "Usuario.h"

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/

namespace MiEstadoFinancieroModel {
	public ref class Chat {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajar� como p�blico*/
			int Codigo_chat;
			String^ Mensaje;
			Usuario^ objUsuario;

		/*M�todos*/
		public:
			Chat();
	};
}


