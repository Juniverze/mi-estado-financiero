#include "UsuarioController.h"

using namespace MiEstadoFinancieroController;
using namespace System::IO; /*Este es el namespace que me permite manipular archivos de texto*/
using namespace System;
using namespace System::Collections::Generic;

UsuarioController::UsuarioController() {
	/*Aqui estoy llamando al constructor de una clase y por ende le estoy reservando memoria para la lista de usuarios, con gcnew*/
	/*PARA EL ATRIBUTO*/
	this->listaUsuarios = gcnew List<Usuario^>();
}

/*Descripcion de los demás métodos*/
void UsuarioController::RegistrarUsuario(List<Usuario^>^ listaUsuarios) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuarios->Count);
	/*POR EL MOMENTO SOLO FUNCIONA CON UN SOLO USUARIO i=0*/ /*FALTA APLICAR LOGICA PARA LEER ARREGLO Y ESCRIBIR EN UNA LINEA i+1*/
		Usuario^ objUsuario = listaUsuarios[0];
		lineasArchivo[0] = objUsuario->ID + ";" + objUsuario->Nombre_usuario + ";" + objUsuario->Contraseña + ";" + objUsuario->Nombre + ";" + objUsuario->Apellido_paterno + ";" + objUsuario->Apellido_materno + ";" + objUsuario->Correo;
		
		Usuario^ objUsuario = gcnew
	/*Aquí ya mi array de lineasArchivo esta OK, con la información a grabar */
	File::WriteAllLines("usuarios.txt", lineasArchivo);
}