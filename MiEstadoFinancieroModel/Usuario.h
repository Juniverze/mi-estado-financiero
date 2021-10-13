#pragma once

using namespace System; /*Contiene la definición e implementación de la clase String*/

namespace MiEstadoFinancieroModel {

	public ref class Usuario {
		/*Estos son los atributos*/
	public: /*En realidad deben ser privadas. Solo por el curso se trabajará como público*/
		int ID;
		String^ Nombre_usuario;
		String^ Contraseña;
		String^ Nombre;
		String^ Apellido_paterno;
		String^ Apellido_materno;
		String^ Correo;

		/*métodos*/
	public:
		/*Todas las clases tienen al menos un método - Constructor*/
		Usuario();
		Usuario(int ID, String^ Nombre_usuario, String^ Contraseña, String^ Nombre, String^ Apellido_paterno, String^ Apellido_materno, String^ Correo);
	};

}


