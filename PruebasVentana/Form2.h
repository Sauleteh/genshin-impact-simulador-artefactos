#pragma once

#include <iostream>

using namespace::std;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			this->textBox111->BackColor = System::Drawing::Color::White;
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBox111;


	protected:

	protected:

	protected:

	protected:




	public:
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox111 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox111
			// 
			this->textBox111->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox111->Location = System::Drawing::Point(12, 12);
			this->textBox111->MaxLength = 2147483647;
			this->textBox111->Multiline = true;
			this->textBox111->Name = L"textBox111";
			this->textBox111->ReadOnly = true;
			this->textBox111->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox111->Size = System::Drawing::Size(494, 703);
			this->textBox111->TabIndex = 0;
			this->textBox111->Text = L"Esperando recepción de texto...";
			this->textBox111->TextChanged += gcnew System::EventHandler(this, &Form2::textBox1_TextChanged);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 727);
			this->Controls->Add(this->textBox111);
			this->MinimumSize = System::Drawing::Size(50, 100);
			this->Name = L"Form2";
			this->Text = L"Ventana de cuadro de texto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1232_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}