#include<iostream>
using namespace std;
int main() {
	float F;
	cout << "�����뻪���¶�" << endl;
	cin >> F ;
	double C = (F - 32) / 1.8;
	double rounded_C = round(C * 100) / 100;
	cout << "�û����¶�ת���ɵ������¶�Ϊ" << rounded_C << endl;
}