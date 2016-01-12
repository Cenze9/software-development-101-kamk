#pragma once
class omaVektori
{
private:
	int koko;
	int maxkoko;
	int *taulukko;
protected:

public:
	omaVektori(int nkoko);
	~omaVektori(void);
	void lisaa(int uusi_alkio);
	void poista(int indeksi);
	void tulosta(int luku);
	bool onkotaulukossa(int luku);
};

