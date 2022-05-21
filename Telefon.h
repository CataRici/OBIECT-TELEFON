#ifndef TELEFON_H
#define TELEFON_H

#include <string>
#include <iostream>
using namespace std;

class Telefon {

	private:
		int nrTelefon, model;
		string culoare, brand;
		double greutate;

	public:
		// Setters
		void setnrTelefon(int nrTelefon);
		void setModel(int model);
		void setGreutate(double greutate);
		void setCuloare(string culoare);
		void setBrand(string brand);

		//Getters
		int getnrTelefon();
		int getModel();
		double getGreutate();
		string getCuloare();
		string getBrand();

};
#endif

