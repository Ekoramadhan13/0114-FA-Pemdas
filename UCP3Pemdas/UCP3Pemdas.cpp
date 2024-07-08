#include <iostream>
using namespace std;

class MataKuliah {
public:
	int nilai;

	MataKuliah(int pnilai) :
		nilai(pnilai)
	{
		cout << "menampilkan nilai " << nilai << "\n" << endl;
	}

	float presensi;
	float activity;
	float exercise;
	float tugasakhir;

public:
	MataKuliah()
	{
		presensi = 0.0;

		{
			MataKuliah();
				cout << "presensi = " << presensi << endl;
				cout << "activity = " << activity << endl;
				cout << "exercise = " << exercise << endl;
				cout << "tugasakhir = " << tugasakhir << endl;
		}



	}
	virtual void namaMataKuliah() { return; }
	virtual void inputNilai() { return; }
	virtual void hitungNilaiAkhir() { return; }
	virtual void cekKelulusan() 
	{
		cout << "namaMataKuliah";
		cout << "inputNIlai";
		cout << "hitungNilaiAkhir";
		cout << "cekKelulusan";
	}
	

	
	void setPresensi(float nilai)
	{
		this->presensi = nilai;
	}
	float getPresensi()
	{
		return presensi;
	}
	
};
class Pemrograman : public MataKuliah {
public:
	int nilai;

	Pemrograman(int pnilai) :
		MataKuliah(pnilai)
	{
		cout << "memasukan nilai\n" << endl;
	}

};
class Jaringan : public MataKuliah {
public:
	int nilai;

	Jaringan(int pnilai) :
		MataKuliah(pnilai)
	{
		cout << "memasukan nilai\n" << endl;
	}
	
};
int main()
{
	char pilih;
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;
	
}

