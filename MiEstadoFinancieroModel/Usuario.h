#pragma once

using namespace System; /*Contiene la definici�n e implementaci�n de la clase String*/

namespace MiEstadoFinancieroModel {

	public ref class Usuario {
		/*Estos son los atributos*/
	public: /*En realidad deben ser privadas. Solo por el curso se trabajar� como p�blico*/
		int ID;
		String^ Nombre_usuario;
		String^ Contrase�a;
		String^ Nombre;
		String^ Apellido_paterno;
		String^ Apellido_materno;
		String^ Correo;

		/*m�todos*/
	public:
		/*Todas las clases tienen al menos un m�todo - Constructor*/
		Usuario();
		Usuario(int ID, String^ Nombre_usuario, String^ Contrase�a, String^ Nombre, String^ Apellido_paterno, String^ Apellido_materno, String^ Correo);
	};

}


