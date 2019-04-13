#pragma once
#include <iostream>
#include <string>
#include "APLICACION.h"
using namespace std;
namespace Aplicaciones_pilas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	APLICACION a;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  grilla_1;
	private: System::Windows::Forms::DataGridView^  grilla_2;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  ttamano;
	private: System::Windows::Forms::Button^  btamano;
	private: System::Windows::Forms::Button^  bInsertar;
	private: System::Windows::Forms::Button^  bMostrar;
	private: System::Windows::Forms::Button^  beliminar_vocal;
	private: System::Windows::Forms::TextBox^  tvocal;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grilla_1 = (gcnew System::Windows::Forms::DataGridView());
			this->grilla_2 = (gcnew System::Windows::Forms::DataGridView());
			this->ttamano = (gcnew System::Windows::Forms::TextBox());
			this->btamano = (gcnew System::Windows::Forms::Button());
			this->bInsertar = (gcnew System::Windows::Forms::Button());
			this->bMostrar = (gcnew System::Windows::Forms::Button());
			this->beliminar_vocal = (gcnew System::Windows::Forms::Button());
			this->tvocal = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_2))->BeginInit();
			this->SuspendLayout();
			// 
			// grilla_1
			// 
			this->grilla_1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_1->Location = System::Drawing::Point(47, 32);
			this->grilla_1->Name = L"grilla_1";
			this->grilla_1->RowTemplate->Height = 24;
			this->grilla_1->Size = System::Drawing::Size(240, 150);
			this->grilla_1->TabIndex = 0;
			this->grilla_1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::grilla_1_CellContentClick);
			// 
			// grilla_2
			// 
			this->grilla_2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_2->Location = System::Drawing::Point(465, 32);
			this->grilla_2->Name = L"grilla_2";
			this->grilla_2->RowTemplate->Height = 24;
			this->grilla_2->Size = System::Drawing::Size(240, 150);
			this->grilla_2->TabIndex = 1;
			// 
			// ttamano
			// 
			this->ttamano->Location = System::Drawing::Point(47, 188);
			this->ttamano->Name = L"ttamano";
			this->ttamano->Size = System::Drawing::Size(100, 22);
			this->ttamano->TabIndex = 2;
			this->ttamano->Text = L"0";
			this->ttamano->TextChanged += gcnew System::EventHandler(this, &Form1::ttamano_TextChanged);
			// 
			// btamano
			// 
			this->btamano->Location = System::Drawing::Point(47, 218);
			this->btamano->Name = L"btamano";
			this->btamano->Size = System::Drawing::Size(100, 23);
			this->btamano->TabIndex = 3;
			this->btamano->Text = L"Tamano";
			this->btamano->UseVisualStyleBackColor = true;
			this->btamano->Click += gcnew System::EventHandler(this, &Form1::btamano_Click);
			// 
			// bInsertar
			// 
			this->bInsertar->Location = System::Drawing::Point(194, 218);
			this->bInsertar->Name = L"bInsertar";
			this->bInsertar->Size = System::Drawing::Size(75, 23);
			this->bInsertar->TabIndex = 4;
			this->bInsertar->Text = L"Insertar";
			this->bInsertar->UseVisualStyleBackColor = true;
			this->bInsertar->Click += gcnew System::EventHandler(this, &Form1::bInsertar_Click);
			// 
			// bMostrar
			// 
			this->bMostrar->Location = System::Drawing::Point(630, 218);
			this->bMostrar->Name = L"bMostrar";
			this->bMostrar->Size = System::Drawing::Size(75, 23);
			this->bMostrar->TabIndex = 5;
			this->bMostrar->Text = L"Mostrar";
			this->bMostrar->UseVisualStyleBackColor = true;
			this->bMostrar->Click += gcnew System::EventHandler(this, &Form1::bMostrar_Click);
			// 
			// beliminar_vocal
			// 
			this->beliminar_vocal->Location = System::Drawing::Point(340, 40);
			this->beliminar_vocal->Name = L"beliminar_vocal";
			this->beliminar_vocal->Size = System::Drawing::Size(75, 43);
			this->beliminar_vocal->TabIndex = 6;
			this->beliminar_vocal->Text = L"Eliminar vocal";
			this->beliminar_vocal->UseVisualStyleBackColor = true;
			this->beliminar_vocal->Click += gcnew System::EventHandler(this, &Form1::beliminar_vocal_Click);
			// 
			// tvocal
			// 
			this->tvocal->Location = System::Drawing::Point(326, 12);
			this->tvocal->Name = L"tvocal";
			this->tvocal->Size = System::Drawing::Size(100, 22);
			this->tvocal->TabIndex = 7;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(749, 279);
			this->Controls->Add(this->tvocal);
			this->Controls->Add(this->beliminar_vocal);
			this->Controls->Add(this->bMostrar);
			this->Controls->Add(this->bInsertar);
			this->Controls->Add(this->btamano);
			this->Controls->Add(this->ttamano);
			this->Controls->Add(this->grilla_2);
			this->Controls->Add(this->grilla_1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btamano_Click(System::Object^  sender, System::EventArgs^  e) {
				 grilla_1->RowCount=System::Convert::ToInt32(ttamano->Text);
				 grilla_1->ColumnCount=1;
			 }
private: System::Void grilla_1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void ttamano_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void bInsertar_Click(System::Object^  sender, System::EventArgs^  e) {
			 a.leer(grilla_1, ttamano);
		 }
private: System::Void bMostrar_Click(System::Object^  sender, System::EventArgs^  e) {
			 a.mostrar(grilla_2);
		 }
private: System::Void beliminar_vocal_Click(System::Object^  sender, System::EventArgs^  e) {
			 a.eliminar_Vocal(tvocal);
		 }
};
}

