#include "Telefon.h"
using namespace std;

//definition setters

void Telefon:: setnrTelefon(int nrTelefon) {
	int nrTelefon = nrTelefon;
	if (nrTelefon == 757283252) {
		cout << "NUMAR CORECT";
	}
}
void Telefon::setModel(int model) {
	int model = model;
	if (model <= 10) {
		++model;
	}
}
void Telefon::setGreutate(double greutate) {
	double greutate = greutate;
}
void Telefon::setCuloare(string culoare) {
	string culoare = culoare;
	if (culoare == "black") {
		culoare = "white";
	}
}
void Telefon::setBrand(string brand) {
	string brand = brand;
}

//definition getters
int Telefon::getnrTelefon() {
		return nrTelefon;
}
int Telefon::getModel() {
	return model;
}
double Telefon::getGreutate() {
	return greutate;
}
string Telefon::getCuloare() {
	return culoare;
}
string Telefon::getBrand() {
	return brand;
}