#include "GVCoHuu.h"
#include <string>

using namespace std;

GVCoHuu::GVCoHuu() {
	ten = "";
	email = "";
	diaChi = "";
	phone = "";
	soGioGiang = 0; // So gio giang
	luongTT = 0; // Luong thoa thuan
	gioQD = 0; // So gio quy dinh
}
void GVCoHuu::Nhap() {
	cin.ignore();
	cout << "\nTen: ";
	getline(cin, ten);
	cout << "\nEmail: ";
	getline(cin, email);
	cout << "\nDia Chi: ";
	getline(cin, diaChi);
	cout << "\nPhone: ";
	getline(cin, phone);
	cout << "\nSo gio giang: ";
	cin >> soGioGiang;
	cout << "\nLuong thoa thuan: ";
	cin >> luongTT;
	cout << "\nGio quy dinh: ";
	cin >> gioQD;
}
void GVCoHuu::XuatGVTT() {
	cout << "\nTen: " << ten;
	cout << "\nEmail: " << email;
	cout << "\nDiachi: " << diaChi;
	cout << "\nPhone: " << phone;
	cout << "\nSo gio giang" << soGioGiang;
	cout << "\nLuong thoa thuan: " << luongTT;
	cout << "\nGio quy dinh: " << gioQD;
}
GVCoHuu::~GVCoHuu(){

}