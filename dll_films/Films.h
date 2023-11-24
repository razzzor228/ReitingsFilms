#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <vector>
#include <string>
#include <cwchar>
#include <io.h>
#include <fcntl.h>
#include <locale>
#include <codecvt>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

class Films
{
public:
	Films();
	virtual void Set_name(wstring Name);
	virtual wstring Get_name();
	virtual void Set_reit(int Reit);
	virtual int Get_reit();
	virtual void Set_genre(wstring Genre);
	virtual wstring Get_genre();
	Films* Copy();
	Films(const Films& obj);
	virtual ~Films();
};

class Biographical : public Films // Биографический
{
	wstring name;
	int reit;
	wstring genre;
public:
	Biographical();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Biographical* Copy();
	Biographical(const Biographical& obj);
	~Biographical();
};

class Hitman : public Films // Боевик
{
	wstring name;
	int reit;
	wstring genre;
public:
	Hitman();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Hitman* Copy();
	Hitman(const Hitman& obj);
	~Hitman();
};

class Detective : public Films // Детектив
{
	wstring name;
	int reit;
	wstring genre;
public:
	Detective();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Detective* Copy();
	Detective(const Detective& obj);
	~Detective();
};

class Documentary : public Films // Документальный
{
	wstring name;
	int reit;
	wstring genre;
public:
	Documentary();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Documentary* Copy();
	Documentary(const Documentary& obj);
	~Documentary();
};

class Drama : public Films // Драма
{
	wstring name;
	int reit;
	wstring genre;
public:
	Drama();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Drama* Copy();
	Drama(const Drama& obj);
	~Drama();
};

class Historical : public Films // Исторический
{
	wstring name;
	int reit;
	wstring genre;
public:
	Historical();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Historical* Copy();
	Historical(const Historical& obj);
	~Historical();
};

class Comedy : public Films // Камедия
{
	wstring name;
	int reit;
	wstring genre;
public:
	Comedy();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Comedy* Copy();
	Comedy(const Comedy& obj);
	~Comedy();
};

class Crime : public Films // Криминал
{
	wstring name;
	int reit;
	wstring genre;
public:
	Crime();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Crime* Copy();
	Crime(const Crime& obj);
	~Crime();
};

class Melodrama : public Films // Мелодрама
{
	wstring name;
	int reit;
	wstring genre;
public:
	Melodrama();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Melodrama* Copy();
	Melodrama(const Melodrama& obj);
	~Melodrama();
};

class Mystic : public Films // Мистика
{
	wstring name;
	int reit;
	wstring genre;
public:
	Mystic();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Mystic* Copy();
	Mystic(const Mystic& obj);
	~Mystic();
};

class Cartoon : public Films // Мультфильм
{
	wstring name;
	int reit;
	wstring genre;
public:
	Cartoon();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Cartoon* Copy();
	Cartoon(const Cartoon& obj);
	~Cartoon();
};

class Musical : public Films // Мюзикл
{
	wstring name;
	int reit;
	wstring genre;
public:
	Musical();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Musical* Copy();
	Musical(const Musical& obj);
	~Musical();
};

class Scientific : public Films // Научный
{
	wstring name;
	int reit;
	wstring genre;
public:
	Scientific();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Scientific* Copy();
	Scientific(const Scientific &obj);
	~Scientific();
};

class Noir : public Films // Нуар
{
	wstring name;
	int reit;
	wstring genre;
public:
	Noir();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Noir* Copy();
	Noir(const Noir& obj);
	~Noir();
};

class Adventures : public Films // Приключения
{
	wstring name;
	int reit;
	wstring genre;
public:
	Adventures();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Adventures* Copy();
	Adventures(const Adventures& obj);
	~Adventures();
};

class Thriller : public Films // Триллер
{
	wstring name;
	int reit;
	wstring genre;
public:
	Thriller();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Thriller* Copy();
	Thriller(const Thriller& obj);
	~Thriller();
};

class Horror : public Films // Ужасы
{
	wstring name;
	int reit;
	wstring genre;
public:
	Horror();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Horror* Copy();
	Horror(const Horror& obj);
	~Horror();
};

class Fantasy : public Films // Фэнтези
{
	wstring name;
	int reit;
	wstring genre;
public:
	Fantasy();
	void Set_name(wstring Name);
	wstring Get_name();
	void Set_reit(int Reit);
	int Get_reit();
	void Set_genre(wstring Genre);
	wstring Get_genre();
	Fantasy* Copy();
	Fantasy(const Fantasy& obj);
	~Fantasy();
};

struct Reit_Vozrast {
	bool operator()(Films* a, Films* b) const {
		return a->Get_reit() < b->Get_reit();
	}
};

struct Reit_Umensh {
	bool operator()(Films* a, Films* b) const {
		return a->Get_reit() > b->Get_reit();
	}
};

class DB
{
	vector<Films*> films;
	multiset<Films*, Reit_Vozrast> reit_vozrast;
	multiset<Films*, Reit_Umensh> reit_umensh;
	wstring all_minus;
	wstring all_plus;
public:
	DB();
	void Push_back(Films* obj);
	wstring Get_minus();
	wstring Get_plus();
	DB(const DB& obj);
	DB& operator =(const DB& obj);
	wstring Get_equal(int num);
	~DB();
};