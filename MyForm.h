#pragma once

namespace LabBúsquedasJavierMorales1210219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ cantidadTbx;
	private: System::Windows::Forms::Button^ generarArreglo;
	private: System::Windows::Forms::Button^ buscarHash_btn;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buscarSecuencial_btn;
	private: System::Windows::Forms::Button^ buscarBinario_btn;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cantidadTbx = (gcnew System::Windows::Forms::TextBox());
			this->generarArreglo = (gcnew System::Windows::Forms::Button());
			this->buscarHash_btn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buscarSecuencial_btn = (gcnew System::Windows::Forms::Button());
			this->buscarBinario_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(35, 340);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"JAVIER ANDRÉS MORALES GONZÁLEZ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1210219";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 42);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Cantidad de números";
			// 
			// cantidadTbx
			// 
			this->cantidadTbx->Location = System::Drawing::Point(60, 57);
			this->cantidadTbx->Margin = System::Windows::Forms::Padding(2);
			this->cantidadTbx->Name = L"cantidadTbx";
			this->cantidadTbx->Size = System::Drawing::Size(143, 20);
			this->cantidadTbx->TabIndex = 4;
			// 
			// generarArreglo
			// 
			this->generarArreglo->Location = System::Drawing::Point(280, 42);
			this->generarArreglo->Margin = System::Windows::Forms::Padding(2);
			this->generarArreglo->Name = L"generarArreglo";
			this->generarArreglo->Size = System::Drawing::Size(171, 35);
			this->generarArreglo->TabIndex = 3;
			this->generarArreglo->Text = L"Generar Arreglo";
			this->generarArreglo->UseVisualStyleBackColor = true;
			this->generarArreglo->Click += gcnew System::EventHandler(this, &MyForm::generarArreglo_Click);
			// 
			// buscarHash_btn
			// 
			this->buscarHash_btn->Location = System::Drawing::Point(277, 175);
			this->buscarHash_btn->Margin = System::Windows::Forms::Padding(2);
			this->buscarHash_btn->Name = L"buscarHash_btn";
			this->buscarHash_btn->Size = System::Drawing::Size(171, 35);
			this->buscarHash_btn->TabIndex = 8;
			this->buscarHash_btn->Text = L"Buscar en Tabla Hash";
			this->buscarHash_btn->UseVisualStyleBackColor = true;
			this->buscarHash_btn->Click += gcnew System::EventHandler(this, &MyForm::buscarHash_btn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(85, 214);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Valor a Buscar";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(60, 229);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(143, 20);
			this->textBox1->TabIndex = 6;
			// 
			// buscarSecuencial_btn
			// 
			this->buscarSecuencial_btn->Location = System::Drawing::Point(277, 214);
			this->buscarSecuencial_btn->Margin = System::Windows::Forms::Padding(2);
			this->buscarSecuencial_btn->Name = L"buscarSecuencial_btn";
			this->buscarSecuencial_btn->Size = System::Drawing::Size(171, 35);
			this->buscarSecuencial_btn->TabIndex = 9;
			this->buscarSecuencial_btn->Text = L"Buscar en arreglo secuencialmente";
			this->buscarSecuencial_btn->UseVisualStyleBackColor = true;
			this->buscarSecuencial_btn->Click += gcnew System::EventHandler(this, &MyForm::buscarSecuencial_btn_Click);
			// 
			// buscarBinario_btn
			// 
			this->buscarBinario_btn->Location = System::Drawing::Point(277, 253);
			this->buscarBinario_btn->Margin = System::Windows::Forms::Padding(2);
			this->buscarBinario_btn->Name = L"buscarBinario_btn";
			this->buscarBinario_btn->Size = System::Drawing::Size(171, 35);
			this->buscarBinario_btn->TabIndex = 10;
			this->buscarBinario_btn->Text = L"Buscar en arreglo por método binario";
			this->buscarBinario_btn->UseVisualStyleBackColor = true;
			this->buscarBinario_btn->Click += gcnew System::EventHandler(this, &MyForm::buscarBinario_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 421);
			this->Controls->Add(this->buscarBinario_btn);
			this->Controls->Add(this->buscarSecuencial_btn);
			this->Controls->Add(this->buscarHash_btn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cantidadTbx);
			this->Controls->Add(this->generarArreglo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Búsquedas Javier Morales";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: ArrayList^ Arreglo;	
	private: Hashtable^ TablaHash;
	private: int size;
	private: Stopwatch^ elStopwatch = gcnew Stopwatch;


	private: System::Void generarArreglo_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int cantidad = System::Convert::ToInt16(cantidadTbx->Text);
		generarNumerosAleatorios(cantidad);
		mostrarNumerosAleatorios();
		llenarTablaHash(cantidad);
		size = cantidad;
	}

	private: System::Void generarNumerosAleatorios(int size)
	{
		Arreglo = gcnew ArrayList(size);
		Random^ random = gcnew Random();
		for (int i = 0; i < size; i++) {
			Arreglo->Add(random->Next(0, 100));
		}
	}

	private: System::Void mostrarNumerosAleatorios()
	{
		String^ valores = "";
		for each (int num in Arreglo)
		{
			valores = valores + num + " ";
		}
		System::Windows::Forms::MessageBox::Show(valores);
	}

	private: System::Void llenarTablaHash(int size)
	{
		TablaHash = gcnew Hashtable(size * 2);
		int llave = 0;
		for each (int num in Arreglo)
		{
			llave = num % size * 2;
			while (TablaHash[llave] != nullptr) {
				llave++;
			}
			TablaHash->Add(llave, num);
		}
	}

	private: System::Int32 PosicionEnHash(int valorBuscar, int size)
	{
		int posicion = valorBuscar % (size * 2);
		if (System::Convert::ToInt32(TablaHash[posicion]) == valorBuscar)
			return posicion;
		int contador = size * 2;
		while (System::Convert::ToInt32(TablaHash[posicion]) != valorBuscar)
		{
			posicion++;
			contador--;
			if (contador == 0)
			{
				return -1;
			}
		}
		return posicion;
	}


private: System::Void buscarHash_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	elStopwatch->Reset();
	elStopwatch->Start();
	int valorBuscar = System::Convert::ToInt16(textBox1->Text);
	int posicion = PosicionEnHash(valorBuscar, size);
	elStopwatch->Stop();
	String^ tiempo = elStopwatch->Elapsed + "";
	if (posicion == -1)
	{
		System::Windows::Forms::MessageBox::Show("El número no se pudo encontrar en la tabla Hash.");
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("La posición en el Hash es: " + posicion);
	}
	System::Windows::Forms::MessageBox::Show("La búsqueda tardó " + tiempo);
}

private: System::Void buscarSecuencial_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	elStopwatch->Reset();
	elStopwatch->Start();
	int valorBuscar = System::Convert::ToInt16(textBox1->Text);
	bool seEncontro = false;
	for (int i = 0; i < size; i++)
	{
		if (Convert::ToInt32(Arreglo[i]) == valorBuscar)
		{
			System::Windows::Forms::MessageBox::Show("El número se encontró en la posición " + i + ".");
			seEncontro = true;
		}
	}
	if (seEncontro == false)
	{
		System::Windows::Forms::MessageBox::Show("El número no se encontró");
	}
	elStopwatch->Stop();
	String^ tiempo = elStopwatch->Elapsed + "";
	System::Windows::Forms::MessageBox::Show("La búsqueda tardó " + tiempo);
}

private: System::Void BubbleSort()
{
	int i, j;
	int n = size;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (System::Convert::ToInt16(Arreglo[j]) > System::Convert::ToInt16(Arreglo[j + 1]))
			{
				int temp = System::Convert::ToInt16(Arreglo[j]);
				Arreglo[j] = Arreglo[j + 1];
				Arreglo[j + 1] = temp;
			}
		}
	}
}

private: System::Int16 Binaria(int Buscar)
{
	int min = 0;
	int max = size - 1;
	while (min <= max)
	{
		int m = min + (max - min) / 2;
		if (Convert::ToInt16(Arreglo[m]) == Buscar)
			return m;
		if (Convert::ToInt16(Arreglo[m]) < Buscar)
			min = m + 1;
		else
			max = m - 1;
	}
	return -1;
}
	   

private: System::Void buscarBinario_btn_Click(System::Object^ sender, System::EventArgs^ e) 
{
	elStopwatch->Reset();
	elStopwatch->Start();
	MessageBox::Show("Se ordenó el arreglo de menor a mayor.");
	BubbleSort();
	mostrarNumerosAleatorios();
	int valorBuscar = System::Convert::ToInt16(textBox1->Text);
	int posicion = Binaria(valorBuscar);
	if (posicion == -1)
	{
		System::Windows::Forms::MessageBox::Show("El número no se pudo encontrar en el arreglo.");
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("La posición en el arreglo es: " + posicion);
	}
	elStopwatch->Stop();
	String^ tiempo = elStopwatch->Elapsed + "";
	System::Windows::Forms::MessageBox::Show("La búsqueda tardó " + tiempo);
}


	   
};
}
