#include "GVThinhGiang.h"

#include <string>

GVThinhGiang::GVThinhGiang() {
	ten = "";
	email = "";
	diaChi = "";
	phone = "";
	coQuan = "";
	soGioGiang = 0; 
}
void GVThinhGiang::Nhap() {
	cin.ignore();
	cout << "\nTen: ";
	getline(cin, ten);
	cout << "\nEmail: ";
	getline(cin, email);
	cout << "\nDia Chi: ";
	getline(cin, diaChi);
	cout << "\nPhone: ";
	getline(cin, phone);
	cout << "\nCo Quan: ";
	getline(cin, coQuan);
	cout << "\nSo gio giang: ";
	cin >> soGioGiang;
}
void GVThinhGiang::XuatGVTG() {
	cout << "\nTen: " << ten;
	cout << "\nEmail: " << email;
	cout << "\nDiachi: " << diaChi;
	cout << "\nPhone: " << phone;
	cout << "\nCo Quan: " << coQuan;
	cout << "\nSo gio giang" << soGioGiang;
}

GVThinhGiang::~GVThinhGiang(){

}
