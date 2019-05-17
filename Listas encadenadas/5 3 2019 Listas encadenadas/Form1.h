#pragma once
#include <iostream>
#include <string>
#include "Aplicacion.h"
#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;
using namespace System::Windows::Forms;
using namespace std;

namespace My532019Listasencadenadas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	Aplicacion ap_lista;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  grilla1;
	private: System::Windows::Forms::DataGridView^  grilla2;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  ttamano;

	private: System::Windows::Forms::Button^  btamano;
	private: System::Windows::Forms::Button^  binsertar;
	private: System::Windows::Forms::Button^  bmostrar;




	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grilla1 = (gcnew System::Windows::Forms::DataGridView());
			this->grilla2 = (gcnew System::Windows::Forms::DataGridView());
			this->ttamano = (gcnew System::Windows::Forms::TextBox());
			this->btamano = (gcnew System::Windows::Forms::Button());
			this->binsertar = (gcnew System::Windows::Forms::Button());
			this->bmostrar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla2))->BeginInit();
			this->SuspendLayout();
			// 
			// grilla1
			// 
			this->grilla1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla1->Location = System::Drawing::Point(12, 12);
			this->grilla1->Name = L"grilla1";
			this->grilla1->RowTemplate->Height = 24;
			this->grilla1->Size = System::Drawing::Size(485, 157);
			this->grilla1->TabIndex = 0;
			// 
			// grilla2
			// 
			this->grilla2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla2->Location = System::Drawing::Point(12, 222);
			this->grilla2->Name = L"grilla2";
			this->grilla2->RowTemplate->Height = 24;
			this->grilla2->Size = System::Drawing::Size(485, 157);
			this->grilla2->TabIndex = 1;
			// 
			// ttamano
			// 
			this->ttamano->Location = System::Drawing::Point(582, 114);
			this->ttamano->Name = L"ttamano";
			this->ttamano->Size = System::Drawing::Size(100, 22);
			this->ttamano->TabIndex = 2;
			// 
			// btamano
			// 
			this->btamano->Location = System::Drawing::Point(593, 157);
			this->btamano->Name = L"btamano";
			this->btamano->Size = System::Drawing::Size(75, 23);
			this->btamano->TabIndex = 3;
			this->btamano->Text = L"Tamaño";
			this->btamano->UseVisualStyleBackColor = true;
			this->btamano->Click += gcnew System::EventHandler(this, &Form1::btamano_Click);
			// 
			// binsertar
			// 
			this->binsertar->Location = System::Drawing::Point(593, 200);
			this->binsertar->Name = L"binsertar";
			this->binsertar->Size = System::Drawing::Size(75, 23);
			this->binsertar->TabIndex = 4;
			this->binsertar->Text = L"Insertar";
			this->binsertar->UseVisualStyleBackColor = true;
			this->binsertar->Click += gcnew System::EventHandler(this, &Form1::binsertar_Click);
			// 
			// bmostrar
			// 
			this->bmostrar->Location = System::Drawing::Point(593, 243);
			this->bmostrar->Name = L"bmostrar";
			this->bmostrar->Size = System::Drawing::Size(75, 23);
			this->bmostrar->TabIndex = 5;
			this->bmostrar->Text = L"Mostrar";
			this->bmostrar->UseVisualStyleBackColor = true;
			this->bmostrar->Click += gcnew System::EventHandler(this, &Form1::bmostrar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 391);
			this->Controls->Add(this->bmostrar);
			this->Controls->Add(this->binsertar);
			this->Controls->Add(this->btamano);
			this->Controls->Add(this->ttamano);
			this->Controls->Add(this->grilla2);
			this->Controls->Add(this->grilla1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btamano_Click(System::Object^  sender, System::EventArgs^  e) {
				 grilla1->ColumnCount=System::Convert::ToInt32(ttamano->Text);
				 grilla1->RowCount=2;
			 }
private: System::Void binsertar_Click(System::Object^  sender, System::EventArgs^  e) {
			 ap_lista.leer(grilla1, ttamano);
		 }
private: System::Void bmostrar_Click(System::Object^  sender, System::EventArgs^  e) {
			 ap_lista.mostrar(grilla2, ttamano);
		 }
};
}

