#include <iostream>
using namespace std;


int main() {
	srand(time(0));

	int nBil = (rand() % 10);
	string status;

	int nBilA = rand() % 11;
	int nBilB = rand() % 11;

	if (nBilA == nBilB) {
		status = "bilangan sama";
	}
	else if  (nBilA > nBilB) {
		status = "bilangan a lebih besar dari bilangan b";
	}
	else
	{
		status = "bilangan a lebih kecil dari bilangan b";
	}
}