#include "frmRegistroUsuario.h" /*Incluir el .h de la ventana que voy a abrir*/

using namespace System;
using namespace System::Windows::Forms;
using namespace MiEstadoFinancieroView; /*colocar el nombre del proyecto principal*/

void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	frmRegistroUsuario ventana; /*nombre de la ventana a abrir*/
	Application::Run(% ventana);
}