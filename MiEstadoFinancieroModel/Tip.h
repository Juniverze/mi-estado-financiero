#pragma once

using namespace System;

namespace MiEstadoFinancieroModel {
	public ref class Tip {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajará como público*/
			int ID;
			String^ Texto;
			String^ Ocasion;

		/*Métodos*/
		public:
			Tip();
			Tip(int ID, String^ Texto, String^ Ocasion);
	};
}