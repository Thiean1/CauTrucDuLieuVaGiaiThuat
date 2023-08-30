#include <iostream>
using namespace std;


void nhapMang(int a[], int &soluong){
	cout << "Nhap so luong : "; cin>>soluong;
	for(int i = 0;i<soluong;i++){
		cout<<"Moi nhap so thu "<<i+1<<": ";
		cin >> a[i];
	}
}
void xuatMang(int a[], int soluong){
	cout<<"Danh sach gia tri la : ";
	for(int i = 0; i<soluong;i++){
		cout <<a[i]<<" ";
	}
}
main(){
	int a[100], soluong;
	nhapMang(a,soluong);
	xuatMang(a,soluong);
}