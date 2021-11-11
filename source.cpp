#include <iostream>
using namespace std;
int tong(int a, int b)
{
	int ketqua;
	ketqua= a + b;
	return ketqua;
}
int hieu(int a, int b)
{
	int hieu;
	hieu=a-b;
	return hieu;
}

int main()
{
	int a, b,ketqua;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	if(phepToan =="+")
		cout<< ketqua =tong(a,b);
	else if(phepToan=="-")
		cout<<ketqua =hieu(a ,b);
	system("pause");
	return 0;
}