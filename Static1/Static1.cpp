#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {

public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printAll();

	Mahasiswa(string pnama) :nama(pnama) { 
		setID(); 
	}
};

int Mahasiswa::nim = 182;

void Mahasiswa::setID() {
	
}

int main()
{
    
}