#pragma once

struct element {
	element* suivant = nullptr;
	void* contenu = nullptr;
};

class liste
{
protected:
	element* debut;
	int position = 0;
	int taille = 0;
public:
	liste();
	~liste();
	void ajoute(void*);

	void* premier();
	void* prochain();
	bool fini();
	int getTaille();
};

