#pragma once
#include <iostream>
#include <string>
#include "Aplicacion.h"
#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;
using namespace System::Windows::Forms;
using namespace std;

namespace matricesvisual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	Aplicacion x;
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
	private: System::Windows::Forms::DataGridView^  grilla_x;
	protected: 

	private: System::Windows::Forms::DataGridView^  grilla_z;
	private: System::Windows::Forms::Button^  bTAMANO_A;



	private: System::Windows::Forms::TextBox^  ttamano_fila_A;




	private: System::Windows::Forms::TextBox^  ttamano_columna_A;
	private: System::Windows::Forms::Button^  bINSERTAR_A;

	private: System::Windows::Forms::Button^  bMOSTRAR;



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
			this->grilla_x = (gcnew System::Windows::Forms::DataGridView());
			this->grilla_z = (gcnew System::Windows::Forms::DataGridView());
			this->bTAMANO_A = (gcnew System::Windows::Forms::Button());
			this->ttamano_fila_A = (gcnew System::Windows::Forms::TextBox());
			this->ttamano_columna_A = (gcnew System::Windows::Forms::TextBox());
			this->bINSERTAR_A = (gcnew System::Windows::Forms::Button());
			this->bMOSTRAR = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_z))->BeginInit();
			this->SuspendLayout();
			// 
			// grilla_x
			// 
			this->grilla_x->AllowUserToAddRows = false;
			this->grilla_x->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_x->Location = System::Drawing::Point(12, 13);
			this->grilla_x->Name = L"grilla_x";
			this->grilla_x->RowTemplate->Height = 24;
			this->grilla_x->Size = System::Drawing::Size(765, 150);
			this->grilla_x->TabIndex = 0;
			// 
			// grilla_z
			// 
			this->grilla_z->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_z->Location = System::Drawing::Point(12, 205);
			this->grilla_z->Name = L"grilla_z";
			this->grilla_z->RowTemplate->Height = 24;
			this->grilla_z->Size = System::Drawing::Size(765, 145);
			this->grilla_z->TabIndex = 2;
			// 
			// bTAMANO_A
			// 
			this->bTAMANO_A->Location = System::Drawing::Point(857, 91);
			this->bTAMANO_A->Name = L"bTAMANO_A";
			this->bTAMANO_A->Size = System::Drawing::Size(100, 23);
			this->bTAMANO_A->TabIndex = 3;
			this->bTAMANO_A->Text = L"A_tamano";
			this->bTAMANO_A->UseVisualStyleBackColor = true;
			this->bTAMANO_A->Click += gcnew System::EventHandler(this, &Form1::bTAMANO_A_Click);
			// 
			// ttamano_fila_A
			// 
			this->ttamano_fila_A->Location = System::Drawing::Point(857, 34);
			this->ttamano_fila_A->Name = L"ttamano_fila_A";
			this->ttamano_fila_A->Size = System::Drawing::Size(100, 22);
			this->ttamano_fila_A->TabIndex = 6;
			this->ttamano_fila_A->Text = L"0";
			// 
			// ttamano_columna_A
			// 
			this->ttamano_columna_A->Location = System::Drawing::Point(857, 62);
			this->ttamano_columna_A->Name = L"ttamano_columna_A";
			this->ttamano_columna_A->Size = System::Drawing::Size(100, 22);
			this->ttamano_columna_A->TabIndex = 11;
			this->ttamano_columna_A->Text = L"0";
			// 
			// bINSERTAR_A
			// 
			this->bINSERTAR_A->Location = System::Drawing::Point(857, 120);
			this->bINSERTAR_A->Name = L"bINSERTAR_A";
			this->bINSERTAR_A->Size = System::Drawing::Size(100, 23);
			this->bINSERTAR_A->TabIndex = 12;
			this->bINSERTAR_A->Text = L"A insertar";
			this->bINSERTAR_A->UseVisualStyleBackColor = true;
			this->bINSERTAR_A->Click += gcnew System::EventHandler(this, &Form1::bINSERTAR_A_Click);
			// 
			// bMOSTRAR
			// 
			this->bMOSTRAR->Location = System::Drawing::Point(867, 256);
			this->bMOSTRAR->Name = L"bMOSTRAR";
			this->bMOSTRAR->Size = System::Drawing::Size(75, 23);
			this->bMOSTRAR->TabIndex = 14;
			this->bMOSTRAR->Text = L"Mostrar";
			this->bMOSTRAR->UseVisualStyleBackColor = true;
			this->bMOSTRAR->Click += gcnew System::EventHandler(this, &Form1::bMOSTRAR_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 366);
			this->Controls->Add(this->bMOSTRAR);
			this->Controls->Add(this->bINSERTAR_A);
			this->Controls->Add(this->ttamano_columna_A);
			this->Controls->Add(this->ttamano_fila_A);
			this->Controls->Add(this->bTAMANO_A);
			this->Controls->Add(this->grilla_z);
			this->Controls->Add(this->grilla_x);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_z))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bTAMANO_A_Click(System::Object^  sender, System::EventArgs^  e) {
		grilla_x->ColumnCount=System::Convert::ToInt32(ttamano_columna_A->Text)*2;
		grilla_x->RowCount=System::Convert::ToInt32(ttamano_fila_A->Text);
	}
   private: System::Void bINSERTAR_A_Click(System::Object^  sender, System::EventArgs^  e) {
	    x.Leer(grilla_x,ttamano_fila_A,ttamano_columna_A);
   }
   private: System::Void bMOSTRAR_Click(System::Object^  sender, System::EventArgs^  e) {
		x.Mostrar(grilla_z);
   }
};
}

