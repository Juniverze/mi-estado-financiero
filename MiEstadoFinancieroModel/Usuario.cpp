#include "Usuario.h"

using namespace MiEstadoFinancieroModel;

Usuario::Usuario() {

}

Usuario::Usuario(int ID, String^ Nombre_usuario, String^ Contraseņa, String^ Nombre, String^ Apellido_paterno, String^ Apellido_materno, String^ Correo) {
	this->ID = ID;
	this->Nombre_usuario = Nombre_usuario;
	this->Contraseņa = Contraseņa;
	this->Nombre = Nombre;
	this->Apellido_paterno = Apellido_paterno;
	this->Apellido_materno = Apellido_materno;
	this->Correo = Correo;
}