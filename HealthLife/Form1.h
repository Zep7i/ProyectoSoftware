#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=1234; database=usuarios;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Label^ marca;
	protected:

	private: System::Windows::Forms::Button^ RegistrarseLogin_Boton;
	protected:

	private: System::Windows::Forms::Button^ IniciarSesion_boton;

	private: System::Windows::Forms::Label^ nombreLogin_t;
	private: System::Windows::Forms::Label^ contrasenaLogin_t;
	private: System::Windows::Forms::TextBox^ contrasenaLogin_box;



	private: System::Windows::Forms::TextBox^ nombreLogin_box;

	private: System::Windows::Forms::Label^ saludo_t;
	private: System::Windows::Forms::Label^ errorLogin;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->marca = (gcnew System::Windows::Forms::Label());
			this->RegistrarseLogin_Boton = (gcnew System::Windows::Forms::Button());
			this->IniciarSesion_boton = (gcnew System::Windows::Forms::Button());
			this->nombreLogin_t = (gcnew System::Windows::Forms::Label());
			this->contrasenaLogin_t = (gcnew System::Windows::Forms::Label());
			this->contrasenaLogin_box = (gcnew System::Windows::Forms::TextBox());
			this->nombreLogin_box = (gcnew System::Windows::Forms::TextBox());
			this->saludo_t = (gcnew System::Windows::Forms::Label());
			this->errorLogin = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// marca
			// 
			this->marca->AutoSize = true;
			this->marca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->marca->Location = System::Drawing::Point(247, 340);
			this->marca->Name = L"marca";
			this->marca->Size = System::Drawing::Size(72, 17);
			this->marca->TabIndex = 0;
			this->marca->Text = L"HealthLife";
			// 
			// RegistrarseLogin_Boton
			// 
			this->RegistrarseLogin_Boton->BackColor = System::Drawing::Color::White;
			this->RegistrarseLogin_Boton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->RegistrarseLogin_Boton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)), static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->RegistrarseLogin_Boton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->RegistrarseLogin_Boton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RegistrarseLogin_Boton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RegistrarseLogin_Boton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->RegistrarseLogin_Boton->Location = System::Drawing::Point(223, 274);
			this->RegistrarseLogin_Boton->Name = L"RegistrarseLogin_Boton";
			this->RegistrarseLogin_Boton->Size = System::Drawing::Size(116, 34);
			this->RegistrarseLogin_Boton->TabIndex = 4;
			this->RegistrarseLogin_Boton->Text = L"Registrarse";
			this->RegistrarseLogin_Boton->UseVisualStyleBackColor = false;
			this->RegistrarseLogin_Boton->Click += gcnew System::EventHandler(this, &Form1::RegistrarseLogin_Boton_Click);
			// 
			// IniciarSesion_boton
			// 
			this->IniciarSesion_boton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->IniciarSesion_boton->FlatAppearance->BorderSize = 0;
			this->IniciarSesion_boton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->IniciarSesion_boton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->IniciarSesion_boton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IniciarSesion_boton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->IniciarSesion_boton->ForeColor = System::Drawing::Color::White;
			this->IniciarSesion_boton->Location = System::Drawing::Point(196, 221);
			this->IniciarSesion_boton->Name = L"IniciarSesion_boton";
			this->IniciarSesion_boton->Size = System::Drawing::Size(166, 43);
			this->IniciarSesion_boton->TabIndex = 3;
			this->IniciarSesion_boton->Text = L"Iniciar Sesión";
			this->IniciarSesion_boton->UseVisualStyleBackColor = false;
			this->IniciarSesion_boton->Click += gcnew System::EventHandler(this, &Form1::IniciarSesion_boton_Click_1);
			// 
			// nombreLogin_t
			// 
			this->nombreLogin_t->AutoSize = true;
			this->nombreLogin_t->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreLogin_t->Location = System::Drawing::Point(169, 77);
			this->nombreLogin_t->Name = L"nombreLogin_t";
			this->nombreLogin_t->Size = System::Drawing::Size(52, 16);
			this->nombreLogin_t->TabIndex = 3;
			this->nombreLogin_t->Text = L"Apodo:";
			// 
			// contrasenaLogin_t
			// 
			this->contrasenaLogin_t->AutoSize = true;
			this->contrasenaLogin_t->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contrasenaLogin_t->Location = System::Drawing::Point(164, 129);
			this->contrasenaLogin_t->Name = L"contrasenaLogin_t";
			this->contrasenaLogin_t->Size = System::Drawing::Size(85, 17);
			this->contrasenaLogin_t->TabIndex = 4;
			this->contrasenaLogin_t->Text = L"Contraseña:";
			// 
			// contrasenaLogin_box
			// 
			this->contrasenaLogin_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->contrasenaLogin_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->contrasenaLogin_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->contrasenaLogin_box->Location = System::Drawing::Point(167, 157);
			this->contrasenaLogin_box->Margin = System::Windows::Forms::Padding(1);
			this->contrasenaLogin_box->MaximumSize = System::Drawing::Size(233, 25);
			this->contrasenaLogin_box->MaxLength = 13;
			this->contrasenaLogin_box->Multiline = true;
			this->contrasenaLogin_box->Name = L"contrasenaLogin_box";
			this->contrasenaLogin_box->PasswordChar = '*';
			this->contrasenaLogin_box->Size = System::Drawing::Size(233, 25);
			this->contrasenaLogin_box->TabIndex = 2;
			this->contrasenaLogin_box->WordWrap = false;
			// 
			// nombreLogin_box
			// 
			this->nombreLogin_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->nombreLogin_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nombreLogin_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nombreLogin_box->Location = System::Drawing::Point(168, 101);
			this->nombreLogin_box->Margin = System::Windows::Forms::Padding(1);
			this->nombreLogin_box->MaxLength = 13;
			this->nombreLogin_box->Multiline = true;
			this->nombreLogin_box->Name = L"nombreLogin_box";
			this->nombreLogin_box->Size = System::Drawing::Size(233, 25);
			this->nombreLogin_box->TabIndex = 1;
			this->nombreLogin_box->WordWrap = false;
			// 
			// saludo_t
			// 
			this->saludo_t->AutoSize = true;
			this->saludo_t->BackColor = System::Drawing::Color::Transparent;
			this->saludo_t->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->saludo_t->Location = System::Drawing::Point(194, 15);
			this->saludo_t->Name = L"saludo_t";
			this->saludo_t->Size = System::Drawing::Size(188, 36);
			this->saludo_t->TabIndex = 8;
			this->saludo_t->Text = L"Buenos días!";
			// 
			// errorLogin
			// 
			this->errorLogin->AutoSize = true;
			this->errorLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorLogin->Location = System::Drawing::Point(220, 189);
			this->errorLogin->Name = L"errorLogin";
			this->errorLogin->Size = System::Drawing::Size(126, 17);
			this->errorLogin->TabIndex = 9;
			this->errorLogin->Text = L"! Datos incorrectos";
			this->errorLogin->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(554, 371);
			this->Controls->Add(this->errorLogin);
			this->Controls->Add(this->saludo_t);
			this->Controls->Add(this->nombreLogin_box);
			this->Controls->Add(this->contrasenaLogin_box);
			this->Controls->Add(this->contrasenaLogin_t);
			this->Controls->Add(this->nombreLogin_t);
			this->Controls->Add(this->IniciarSesion_boton);
			this->Controls->Add(this->RegistrarseLogin_Boton);
			this->Controls->Add(this->marca);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"HealthLife / Iniciar Sesion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Mostrar mensaje emergente
		// MessageBox::Show(L"Cerrando...");

		// Cerrar la ventana 
		// this->Close();
	private: System::Void RegistrarseLogin_Boton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void IniciarSesion_boton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		/*String^ sql = "SELECT * FROM data_user WHERE Apodo = '" + nombreLogin_box + "' AND Clave = '" + contrasenaLogin_box + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
		MySqlDataReader^ dataReader;

		try {
			this->conn->Open();
			dataReader = cursor->ExecuteReader();
			if (dataReader->Read()) {

			}
			else {
				this->errorLogin->Visible = true;
			}

		}
		catch (Exception^ x) {
			MessageBox::Show(x->Message);
		}
		*/
	}
	private: System::Void IniciarSesion_boton_Click_1(System::Object^ sender, System::EventArgs^ e) {


	}
};
}
