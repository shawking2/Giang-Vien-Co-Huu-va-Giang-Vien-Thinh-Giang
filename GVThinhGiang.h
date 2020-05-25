#pragma once
#include <iostream>
#include "GVCoHuu.h"

using namespace std;
class GVCoHuu;
class GVThinhGiang
{
private:
	string ten;
	string email;
	string diaChi;
	string phone;
	string coQuan; // Co quan lam viec
	int soGioGiang; // So gio giang
public:
	GVThinhGiang();
	void Nhap();
	// friend void XuatCaHai(GVCoHuu A[], GVThinhGiang B[], int SoLuongA, int SoLuongB); // Xuat ca 2 loai giang vien
	void XuatGVTG(); // Xuat giang vien thinh giang
	~GVThinhGiang();
};
