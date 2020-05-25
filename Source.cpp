#include "GVCoHuu.h"
#include "GVThinhGiang.h"

using namespace std;

void XuatCaHai(GVCoHuu A[], GVThinhGiang B[], int soLuongA, int soLuongB) {
	cout << "_________________________Giao Vien Co Huu_____________________";
	for (int i = 0; i < soLuongA; i++) {
		A[i].XuatGVTT();
	}
	cout << "\n_________________________Giao Vien Thinh Giang________________";
	for (int i = 0; i < soLuongB; i++) {
		B[i].XuatGVTG();
	}
}
int main() {
	cout << "hello, world";
	return 0;
}