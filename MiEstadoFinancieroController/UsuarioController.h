#pragma once

namespace MiEstadoFinancieroController {

	using namespace System::Collections::Generic; //En este espacio de nombres esta la clase List
	using namespace MiEstadoFinancieroModel;
	using namespace System;

	public ref class UsuarioController { /*Se tiene los datos de una lista que maneja*/
		private: /*Solo los atributos de model son publicos*/
			List<Usuario^>^ listaUsuarios; /*Un objeto lista que tenga objetos municipalidad*/
			/*Puede borrarse, porque no lo usamos, pero es para seguir el concepto (como una formalidad)*/

		public:
			UsuarioController();
			/*Metodos que nos ayudaran a formar la logica de los botones*/
			void RegistrarUsuario(List<Usuario^>^ listaUsuarios);
	};

}