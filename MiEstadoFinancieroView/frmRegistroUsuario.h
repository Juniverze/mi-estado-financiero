#pragma once

namespace MiEstadoFinancieroView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MiEstadoFinancieroController;
	using namespace MiEstadoFinancieroModel;

	/// <summary>
	/// Resumen de frmRegistroUsuario
	/// </summary>
	public ref class frmRegistroUsuario : public System::Windows::Forms::Form
	{
	public:
		frmRegistroUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmRegistroUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(32, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(538, 501);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Registro";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(195, 390);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(314, 22);
			this->textBox6->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(56, 390);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 17);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Apellido Materno:";
			this->label6->Click += gcnew System::EventHandler(this, &frmRegistroUsuario::label6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(195, 456);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(314, 22);
			this->textBox7->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(56, 456);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 17);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Correo:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(195, 315);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(314, 22);
			this->textBox5->TabIndex = 23;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(195, 249);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(314, 22);
			this->textBox4->TabIndex = 22;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(195, 185);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(314, 22);
			this->textBox3->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 320);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 17);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Apellido Paterno:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 17);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 17);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Contraseña:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(195, 118);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(314, 22);
			this->textBox2->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(133, 17);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Nombre de usuario:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(195, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(314, 22);
			this->textBox1->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"DNI:";
			this->label1->Click += gcnew System::EventHandler(this, &frmRegistroUsuario::label1_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(146, 557);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRegistroUsuario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(350, 557);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 30);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// frmRegistroUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 608);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmRegistroUsuario";
			this->Text = L"Registro de Usuario";
			this->Load += gcnew System::EventHandler(this, &frmRegistroUsuario::frmRegistroUsuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmRegistroUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int ID = Convert::ToInt32(this->textBox6->Text);
		String^ Nombre_usuario= this->textBox1->Text;
		String^ Contraseña = this->textBox2->Text;
		String^ Nombre= this->textBox3->Text;
		String^ Apellido_paterno = this->textBox4->Text;
		String^ Apellido_materno = this->textBox5->Text;
		String^ Correo = this->textBox7->Text;

		if (this->textBox6->Text == "" || Nombre_usuario == "" || Contraseña == "" || Nombre == "" || Apellido_paterno == "" || Apellido_materno == "" || Correo == "") {
			/*Analizamos si se ha completado todas las casillas*/
			MessageBox::Show("Es necesario llenar todos los datos para registrarse");
		}
		else {
			Usuario^ objUsuario = gcnew Usuario(ID, Nombre_usuario, Contraseña, Nombre, Apellido_paterno, Apellido_materno, Correo);
			this->objUsuario->RegistrarUsuario(objUsuario);
			MessageBox::Show("Se ha registrado exitosamente");
		}
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
