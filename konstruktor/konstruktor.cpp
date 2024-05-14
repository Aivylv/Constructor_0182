#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
	static int nim;
	string nama;
public:
	Mahasiswa();
	Mahasiswa(int);
	Mahasiswa(string);
	Mahasiswa(int iNim, string iNama);
	void cetak();
};

Mahasiswa::Mahasiswa()
{
	nim = 0;
	nama = "";
}

Mahasiswa::Mahasiswa(int iNim)
{
	nim = iNim;
}

Mahasiswa::Mahasiswa(string iNama)
{
	nim = 0;
	nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim, string iNama)
{
	nim = iNim;
	nama = iNama;
}
void Mahasiswa::cetak()
{
	cout << endl << "Nim =" << nim << endl;
	cout << "Nama =" << nim << endl;
}

int main()
{
	Mahasiswa mhs1;
	Mahasiswa mhs2(182);
	Mahasiswa mhs3("Lyvia");
	Mahasiswa mhs4(14, "Kristal");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();

}