#pragma once

using namespace System;

namespace MiEstadoFinancieroModel {
	public ref class Tip {
		/*Atributos*/
		public: /*En realidad deben ser privadas. Solo por el curso se trabajar� como p�blico*/
			int ID;
			String^ Texto;
			String^ Ocasion;

		/*M�todos*/
		public:
			Tip();
			Tip(int ID, String^ Texto, String^ Ocasion);
	};
}