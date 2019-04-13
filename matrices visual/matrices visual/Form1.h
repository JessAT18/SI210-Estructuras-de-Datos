#pragma once
#include <iostream>
#include <string>
#include "Matriz.h"
#include "Naturales.h"
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
	Matriz x,y,z;
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
	private: System::Windows::Forms::DataGridView^  grilla_y;
	private: System::Windows::Forms::DataGridView^  grilla_z;
	private: System::Windows::Forms::Button^  bTAMANO_A;
	private: System::Windows::Forms::Button^  bTAMANO_B;
	private: System::Windows::Forms::Button^  bSUMAR;

	private: System::Windows::Forms::TextBox^  ttamano_fila_A;


	private: System::Windows::Forms::TextBox^  ttamano_columna_B;
	private: System::Windows::Forms::TextBox^  ttamano_fila_B;
	private: System::Windows::Forms::TextBox^  ttamano_columna_A;
	private: System::Windows::Forms::Button^  bINSERTAR_A;
	private: System::Windows::Forms::Button^  bINSERTAR_B;
	private: System::Windows::Forms::Button^  bMOSTRAR;
	private: System::Windows::Forms::Button^  bRESTAR;


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
			this->grilla_y = (gcnew System::Windows::Forms::DataGridView());
			this->grilla_z = (gcnew System::Windows::Forms::DataGridView());
			this->bTAMANO_A = (gcnew System::Windows::Forms::Button());
			this->bTAMANO_B = (gcnew System::Windows::Forms::Button());
			this->bSUMAR = (gcnew System::Windows::Forms::Button());
			this->ttamano_fila_A = (gcnew System::Windows::Forms::TextBox());
			this->ttamano_columna_B = (gcnew System::Windows::Forms::TextBox());
			this->ttamano_fila_B = (gcnew System::Windows::Forms::TextBox());
			this->ttamano_columna_A = (gcnew System::Windows::Forms::TextBox());
			this->bINSERTAR_A = (gcnew System::Windows::Forms::Button());
			this->bINSERTAR_B = (gcnew System::Windows::Forms::Button());
			this->bMOSTRAR = (gcnew System::Windows::Forms::Button());
			this->bRESTAR = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_y))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_z))->BeginInit();
			this->SuspendLayout();
			// 
			// grilla_x
			// 
			this->grilla_x->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_x->Location = System::Drawing::Point(12, 13);
			this->grilla_x->Name = L"grilla_x";
			this->grilla_x->RowTemplate->Height = 24;
			this->grilla_x->Size = System::Drawing::Size(765, 150);
			this->grilla_x->TabIndex = 0;
			// 
			// grilla_y
			// 
			this->grilla_y->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_y->Location = System::Drawing::Point(12, 181);
			this->grilla_y->Name = L"grilla_y";
			this->grilla_y->RowTemplate->Height = 24;
			this->grilla_y->Size = System::Drawing::Size(765, 150);
			this->grilla_y->TabIndex = 1;
			// 
			// grilla_z
			// 
			this->grilla_z->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_z->Location = System::Drawing::Point(12, 356);
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
			// bTAMANO_B
			// 
			this->bTAMANO_B->Location = System::Drawing::Point(857, 271);
			this->bTAMANO_B->Name = L"bTAMANO_B";
			this->bTAMANO_B->Size = System::Drawing::Size(100, 23);
			this->bTAMANO_B->TabIndex = 4;
			this->bTAMANO_B->Text = L"B_tamano";
			this->bTAMANO_B->UseVisualStyleBackColor = true;
			this->bTAMANO_B->Click += gcnew System::EventHandler(this, &Form1::bTAMANO_B_Click);
			// 
			// bSUMAR
			// 
			this->bSUMAR->Location = System::Drawing::Point(869, 401);
			this->bSUMAR->Name = L"bSUMAR";
			this->bSUMAR->Size = System::Drawing::Size(75, 23);
			this->bSUMAR->TabIndex = 5;
			this->bSUMAR->Text = L"Sumar";
			this->bSUMAR->UseVisualStyleBackColor = true;
			this->bSUMAR->Click += gcnew System::EventHandler(this, &Form1::bSUMAR_Click);
			// 
			// ttamano_fila_A
			// 
			this->ttamano_fila_A->Location = System::Drawing::Point(857, 34);
			this->ttamano_fila_A->Name = L"ttamano_fila_A";
			this->ttamano_fila_A->Size = System::Drawing::Size(100, 22);
			this->ttamano_fila_A->TabIndex = 6;
			this->ttamano_fila_A->Text = L"0";
			// 
			// ttamano_columna_B
			// 
			this->ttamano_columna_B->Location = System::Drawing::Point(857, 230);
			this->ttamano_columna_B->Name = L"ttamano_columna_B";
			this->ttamano_columna_B->Size = System::Drawing::Size(100, 22);
			this->ttamano_columna_B->TabIndex = 9;
			this->ttamano_columna_B->Text = L"0";
			// 
			// ttamano_fila_B
			// 
			this->ttamano_fila_B->Location = System::Drawing::Point(857, 202);
			this->ttamano_fila_B->Name = L"ttamano_fila_B";
			this->ttamano_fila_B->Size = System::Drawing::Size(100, 22);
			this->ttamano_fila_B->TabIndex = 10;
			this->ttamano_fila_B->Text = L"0";
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
			// bINSERTAR_B
			// 
			this->bINSERTAR_B->Location = System::Drawing::Point(857, 300);
			this->bINSERTAR_B->Name = L"bINSERTAR_B";
			this->bINSERTAR_B->Size = System::Drawing::Size(100, 23);
			this->bINSERTAR_B->TabIndex = 13;
			this->bINSERTAR_B->Text = L"B insertar";
			this->bINSERTAR_B->UseVisualStyleBackColor = true;
			this->bINSERTAR_B->Click += gcnew System::EventHandler(this, &Form1::bINSERTAR_B_Click);
			// 
			// bMOSTRAR
			// 
			this->bMOSTRAR->Location = System::Drawing::Point(869, 372);
			this->bMOSTRAR->Name = L"bMOSTRAR";
			this->bMOSTRAR->Size = System::Drawing::Size(75, 23);
			this->bMOSTRAR->TabIndex = 14;
			this->bMOSTRAR->Text = L"Mostrar";
			this->bMOSTRAR->UseVisualStyleBackColor = true;
			this->bMOSTRAR->Click += gcnew System::EventHandler(this, &Form1::bMOSTRAR_Click);
			// 
			// bRESTAR
			// 
			this->bRESTAR->Location = System::Drawing::Point(869, 430);
			this->bRESTAR->Name = L"bRESTAR";
			this->bRESTAR->Size = System::Drawing::Size(75, 23);
			this->bRESTAR->TabIndex = 15;
			this->bRESTAR->Text = L"Restar";
			this->bRESTAR->UseVisualStyleBackColor = true;
			this->bRESTAR->Click += gcnew System::EventHandler(this, &Form1::bRESTAR_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 515);
			this->Controls->Add(this->bRESTAR);
			this->Controls->Add(this->bMOSTRAR);
			this->Controls->Add(this->bINSERTAR_B);
			this->Controls->Add(this->bINSERTAR_A);
			this->Controls->Add(this->ttamano_columna_A);
			this->Controls->Add(this->ttamano_fila_B);
			this->Controls->Add(this->ttamano_columna_B);
			this->Controls->Add(this->ttamano_fila_A);
			this->Controls->Add(this->bSUMAR);
			this->Controls->Add(this->bTAMANO_B);
			this->Controls->Add(this->bTAMANO_A);
			this->Controls->Add(this->grilla_z);
			this->Controls->Add(this->grilla_y);
			this->Controls->Add(this->grilla_x);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_y))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_z))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bTAMANO_A_Click(System::Object^  sender, System::EventArgs^  e) {
		grilla_x->ColumnCount=System::Convert::ToInt32(ttamano_columna_A->Text);
		grilla_x->RowCount=System::Convert::ToInt32(ttamano_fila_A->Text);

	}
   private: System::Void bTAMANO_B_Click(System::Object^  sender, System::EventArgs^  e) {
	    grilla_y->ColumnCount=System::Convert::ToInt32(ttamano_columna_B->Text);
		grilla_y->RowCount=System::Convert::ToInt32(ttamano_fila_B->Text);
   }
   private: System::Void bINSERTAR_A_Click(System::Object^  sender, System::EventArgs^  e) {
	    x.Leer(grilla_x,ttamano_fila_A,ttamano_columna_A);
   }
   private: System::Void bMOSTRAR_Click(System::Object^  sender, System::EventArgs^  e) {
		x.Mostrar(grilla_x);
		y.Mostrar(grilla_y);
   }
private: System::Void bINSERTAR_B_Click(System::Object^  sender, System::EventArgs^  e) {
			 y.Leer(grilla_y,ttamano_fila_B,ttamano_columna_B);
		 }
private: System::Void bSUMAR_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(x.Verificar(y)==true)
			 {
				 z=x.Sumar(y);
				 z.Mostrar(grilla_z);
			 }
		 }
private: System::Void bRESTAR_Click(System::Object^  sender, System::EventArgs^  e) {
			if(x.Verificar(y)==true)
			 {
				 z=x.Restar(y);
				 z.Mostrar(grilla_z);
			 }
		 }
};
}

