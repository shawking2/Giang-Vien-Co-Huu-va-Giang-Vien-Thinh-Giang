#pragma once
#include <iostream>
#include "GVThinhGiang.h"

using namespace std;
class GVThinhGiang;
class GVCoHuu
{
private:
	string ten;
	string email;
	string diaChi;
	string phone;
	int soGioGiang; // So gio giang
	long luongTT; // Luong thoa thuan
	int gioQD; // So gio quy dinh
public:
	GVCoHuu();
	~GVCoHuu();
	void Nhap();
	friend void XuatCaHai(GVCoHuu A, GVThinhGiang B);
	void XuatGVTT(); // Xuat giang vien thinh giang
	static long long tongLuong;
};