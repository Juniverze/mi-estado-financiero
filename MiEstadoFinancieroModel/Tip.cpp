#include "Tip.h"

using namespace MiEstadoFinancieroModel;

Tip::Tip() {

}

Tip::Tip(int ID, String^ Texto, String^ Ocasion) {
	this->ID = ID;
	this->Texto = Texto;
	this->Ocasion = Ocasion;
}