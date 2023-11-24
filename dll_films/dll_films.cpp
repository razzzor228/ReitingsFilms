// dll_films.cpp : Определяет экспортируемые функции для DLL.
//

#include "framework.h"
#include "dll_films.h"

wstring all;
wstring all_minus;
wstring all_plus;
DB db;

DLLFILMS_API void EnterProg()
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stderr), _O_U16TEXT);
	wifstream in(L"Фильмы.txt");
	in.imbue(locale(in.getloc(), new codecvt_utf8<wchar_t, 0x10ffff, consume_header>));
	wchar_t c;
	int check_name = 0, check_genre = 0, check_reit = 0;
	wstring s, name, genre, reit;
	for (; in; ) {
		in.get(c);
		if (in.eof()) break;
		all = all + c;
		if (check_name == 0 && check_genre == 0 && check_reit == 0) {
			s = s + c;
		}
		if (s == L"=нц\n") {
			check_name = 1;
			s = L"";
			continue;
		}
		if (check_name == 1) {
			if (c == '\n') {
				name = s;
				check_genre = 1;
				check_name = 0;
				s = L"";
				continue;
			}
			else s = s + c;
		}
		if (check_genre == 1) {
			if (c == '\n') {
				genre = s;
				check_genre = 0;
				check_reit = 1;
				s = L"";
				continue;
			}
			else s = s + c;
		}
		if (check_reit == 1) {
			if (c == '\n') {
				reit = s;
				check_reit = 0;
				s = L"";
				continue;
			}
			else s = s + c;
		}
		if (s == L"=кц\n") {
			if (genre == L"Биографический") {
				Biographical* bio = new Biographical();
				bio->Set_name(name);
				bio->Set_genre(genre);
				bio->Set_reit(stoi(reit));
				db.Push_back(bio);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Боевик") {
				Hitman* hit = new Hitman();
				hit->Set_name(name);
				hit->Set_genre(genre);
				hit->Set_reit(stoi(reit));
				db.Push_back(hit);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Детектив") {
				Detective* det = new Detective();
				det->Set_name(name);
				det->Set_genre(genre);
				det->Set_reit(stoi(reit));
				db.Push_back(det);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Документальный") {
				Documentary* doc = new Documentary();
				doc->Set_name(name);
				doc->Set_genre(genre);
				doc->Set_reit(stoi(reit));
				db.Push_back(doc);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Драма") {
				Drama* dra = new Drama();
				dra->Set_name(name);
				dra->Set_genre(genre);
				dra->Set_reit(stoi(reit));
				db.Push_back(dra);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Исторический") {
				Historical* his = new Historical();
				his->Set_name(name);
				his->Set_genre(genre);
				his->Set_reit(stoi(reit));
				db.Push_back(his);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Камедия") {
				Comedy* com = new Comedy();
				com->Set_name(name);
				com->Set_genre(genre);
				com->Set_reit(stoi(reit));
				db.Push_back(com);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Криминал") {
				Crime* cr = new Crime();
				cr->Set_name(name);
				cr->Set_genre(genre);
				cr->Set_reit(stoi(reit));
				db.Push_back(cr);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Мелодрама") {
				Melodrama* mel = new Melodrama();
				mel->Set_name(name);
				mel->Set_genre(genre);
				mel->Set_reit(stoi(reit));
				db.Push_back(mel);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Мистика") {
				Mystic* my = new Mystic();
				my->Set_name(name);
				my->Set_genre(genre);
				my->Set_reit(stoi(reit));
				db.Push_back(my);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Мультфильм") {
				Cartoon* car = new Cartoon();
				car->Set_name(name);
				car->Set_genre(genre);
				car->Set_reit(stoi(reit));
				db.Push_back(car);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Мюзикл") {
				Musical* mus = new Musical();
				mus->Set_name(name);
				mus->Set_genre(genre);
				mus->Set_reit(stoi(reit));
				db.Push_back(mus);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Научный") {
				Scientific* sc = new Scientific();
				sc->Set_name(name);
				sc->Set_genre(genre);
				sc->Set_reit(stoi(reit));
				db.Push_back(sc);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Нуар") {
				Noir* no = new Noir();
				no->Set_name(name);
				no->Set_genre(genre);
				no->Set_reit(stoi(reit));
				db.Push_back(no);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Приключения") {
				Adventures* ad = new Adventures();
				ad->Set_name(name);
				ad->Set_genre(genre);
				ad->Set_reit(stoi(reit));
				db.Push_back(ad);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Триллер") {
				Thriller* th = new Thriller();
				th->Set_name(name);
				th->Set_genre(genre);
				th->Set_reit(stoi(reit));
				db.Push_back(th);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Ужасы") {
				Horror* ho = new Horror();
				ho->Set_name(name);
				ho->Set_genre(genre);
				ho->Set_reit(stoi(reit));
				db.Push_back(ho);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
			if (genre == L"Фэнтези") {
				Fantasy* fa = new Fantasy();
				fa->Set_name(name);
				fa->Set_genre(genre);
				fa->Set_reit(stoi(reit));
				db.Push_back(fa);
				s = L"";
				name = L"";
				genre = L"";
				reit = L"";
				continue;
			}
		}
	}
}

DLLFILMS_API void Plus(wstring name, wstring genre, int reit)
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stderr), _O_U16TEXT);
	wofstream out(L"Фильмы.txt", ios::app);
	out.imbue(locale(out.getloc(), new codecvt_utf8<wchar_t, 0x10ffff, consume_header>));
	if (genre == L"Биографический") {
		Biographical* bio = new Biographical();
		bio->Set_name(name);
		bio->Set_genre(genre);
		bio->Set_reit(reit);
		db.Push_back(bio);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Боевик") {
		Hitman* hit = new Hitman();
		hit->Set_name(name);
		hit->Set_genre(genre);
		hit->Set_reit(reit);
		db.Push_back(hit);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Детектив") {
		Detective* det = new Detective();
		det->Set_name(name);
		det->Set_genre(genre);
		det->Set_reit(reit);
		db.Push_back(det);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Документальный") {
		Documentary* doc = new Documentary();
		doc->Set_name(name);
		doc->Set_genre(genre);
		doc->Set_reit(reit);
		db.Push_back(doc);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Драма") {
		Drama* dra = new Drama();
		dra->Set_name(name);
		dra->Set_genre(genre);
		dra->Set_reit(reit);
		db.Push_back(dra);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Исторический") {
		Historical* his = new Historical();
		his->Set_name(name);
		his->Set_genre(genre);
		his->Set_reit(reit);
		db.Push_back(his);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Камедия") {
		Comedy* com = new Comedy();
		com->Set_name(name);
		com->Set_genre(genre);
		com->Set_reit(reit);
		db.Push_back(com);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Криминал") {
		Crime* cr = new Crime();
		cr->Set_name(name);
		cr->Set_genre(genre);
		cr->Set_reit(reit);
		db.Push_back(cr);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Мелодрама") {
		Melodrama* mel = new Melodrama();
		mel->Set_name(name);
		mel->Set_genre(genre);
		mel->Set_reit(reit);
		db.Push_back(mel);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Мистика") {
		Mystic* my = new Mystic();
		my->Set_name(name);
		my->Set_genre(genre);
		my->Set_reit(reit);
		db.Push_back(my);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Мультфильм") {
		Cartoon* car = new Cartoon();
		car->Set_name(name);
		car->Set_genre(genre);
		car->Set_reit(reit);
		db.Push_back(car);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Мюзикл") {
		Musical* mus = new Musical();
		mus->Set_name(name);
		mus->Set_genre(genre);
		mus->Set_reit(reit);
		db.Push_back(mus);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Научный") {
		Scientific* sc = new Scientific();
		sc->Set_name(name);
		sc->Set_genre(genre);
		sc->Set_reit(reit);
		db.Push_back(sc);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Нуар") {
		Noir* no = new Noir();
		no->Set_name(name);
		no->Set_genre(genre);
		no->Set_reit(reit);
		db.Push_back(no);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Приключения") {
		Adventures* ad = new Adventures();
		ad->Set_name(name);
		ad->Set_genre(genre);
		ad->Set_reit(reit);
		db.Push_back(ad);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Триллер") {
		Thriller* th = new Thriller();
		th->Set_name(name);
		th->Set_genre(genre);
		th->Set_reit(reit);
		db.Push_back(th);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Ужасы") {
		Horror* ho = new Horror();
		ho->Set_name(name);
		ho->Set_genre(genre);
		ho->Set_reit(reit);
		db.Push_back(ho);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	if (genre == L"Фэнтези") {
		Fantasy* fa = new Fantasy();
		fa->Set_name(name);
		fa->Set_genre(genre);
		fa->Set_reit(reit);
		db.Push_back(fa);
		out << L"=нц\n";
		out << name << endl;
		out << genre << endl;
		out << reit << endl;
		out << L"=кц\n";
	}
	all = all + L"=нц\n" + name + L"\n" + genre + L"\n" + to_wstring(reit) + L"\n" + L"=кц\n";
}

wstring Get_vector_s()
{
	return all;
}

wstring Get_set_minus()
{
	all_minus = L"";
	all_minus = db.Get_minus();
	return all_minus;
}

wstring Get_set_plus()
{
	all_plus = L"";
	all_plus = db.Get_plus();
	return all_plus;
}

wstring Get_equal_range(int num)
{
	return db.Get_equal(num);
}
