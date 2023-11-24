#include "Films.h"

Films::Films()
{
}

void Films::Set_name(wstring Name)
{
}

wstring Films::Get_name()
{
    return L"";
}

void Films::Set_reit(int reit)
{
}

int Films::Get_reit()
{
    return 0;
}

void Films::Set_genre(wstring Genre)
{
}

wstring Films::Get_genre()
{
    return L"";
}

Films* Films::Copy()
{
    return new Films(*this);
}

Films::Films(const Films& obj)
{
}

Films::~Films()
{
}

///////////////////////////////////////////////////////

Hitman::Hitman()
{
}

void Hitman::Set_name(wstring Name)
{
    name = Name;
}

wstring Hitman::Get_name()
{
    return name;
}

void Hitman::Set_reit(int Reit)
{
    reit = Reit;
}

int Hitman::Get_reit()
{
    return reit;
}

void Hitman::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Hitman::Get_genre()
{
    return genre;
}

Hitman* Hitman::Copy()
{
    return new Hitman(*this);
}

Hitman::Hitman(const Hitman& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Hitman::~Hitman()
{
}

///////////////////////////////

Biographical::Biographical()
{
}

void Biographical::Set_name(wstring Name)
{
    name = Name;
}

wstring Biographical::Get_name()
{
    return name;
}

void Biographical::Set_reit(int Reit)
{
    reit = Reit;
}

int Biographical::Get_reit()
{
    return reit;
}

void Biographical::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Biographical::Get_genre()
{
    return genre;
}

Biographical* Biographical::Copy()
{
    return new Biographical(*this);
}

Biographical::Biographical(const Biographical& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Biographical::~Biographical()
{
}

////////////////////////////////////////


Detective::Detective()
{
}

void Detective::Set_name(wstring Name)
{
    name = Name;
}

wstring Detective::Get_name()
{
    return name;
}

void Detective::Set_reit(int Reit)
{
    reit = Reit;
}

int Detective::Get_reit()
{
    return reit;
}

void Detective::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Detective::Get_genre()
{
    return genre;
}

Detective* Detective::Copy()
{
    return new Detective(*this);
}

Detective::Detective(const Detective& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Detective::~Detective()
{
}

//////////////////////////////////

Documentary::Documentary()
{
}

void Documentary::Set_name(wstring Name)
{
    name = Name;
}

wstring Documentary::Get_name()
{
    return name;
}

void Documentary::Set_reit(int Reit)
{
    reit = Reit;
}

int Documentary::Get_reit()
{
    return reit;
}

void Documentary::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Documentary::Get_genre()
{
    return genre;
}

Documentary* Documentary::Copy()
{
    return new Documentary(*this);
}

Documentary::Documentary(const Documentary& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Documentary::~Documentary()
{
}

///////////////////////////////////////////

Drama::Drama()
{
}

void Drama::Set_name(wstring Name)
{
    name = Name;
}

wstring Drama::Get_name()
{
    return name;
}

void Drama::Set_reit(int Reit)
{
    reit = Reit;
}

int Drama::Get_reit()
{
    return reit;
}

void Drama::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Drama::Get_genre()
{
    return genre;
}

Drama* Drama::Copy()
{
    return new Drama(*this);
}

Drama::Drama(const Drama& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Drama::~Drama()
{
}

/////////////////////////

Historical::Historical()
{
}

void Historical::Set_name(wstring Name)
{
    name = Name;
}

wstring Historical::Get_name()
{
    return name;
}

void Historical::Set_reit(int Reit)
{
    reit = Reit;
}

int Historical::Get_reit()
{
    return reit;
}

void Historical::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Historical::Get_genre()
{
    return genre;
}

Historical* Historical::Copy()
{
    return new Historical(*this);
}

Historical::Historical(const Historical& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Historical::~Historical()
{
}

///////////////////////////

Comedy::Comedy()
{
}

void Comedy::Set_name(wstring Name)
{
    name = Name;
}

wstring Comedy::Get_name()
{
    return name;
}

void Comedy::Set_reit(int Reit)
{
    reit = Reit;
}

int Comedy::Get_reit()
{
    return reit;
}

void Comedy::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Comedy::Get_genre()
{
    return genre;
}

Comedy* Comedy::Copy()
{
    return new Comedy(*this);
}

Comedy::Comedy(const Comedy& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Comedy::~Comedy()
{
}

/////////////////////////////

Crime::Crime()
{
}

void Crime::Set_name(wstring Name)
{
    name = Name;
}

wstring Crime::Get_name()
{
    return name;
}

void Crime::Set_reit(int Reit)
{
    reit = Reit;
}

int Crime::Get_reit()
{
    return reit;
}

void Crime::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Crime::Get_genre()
{
    return genre;
}

Crime* Crime::Copy()
{
    return new Crime(*this);
}

Crime::Crime(const Crime& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Crime::~Crime()
{
}

//////////////////////////

Melodrama::Melodrama()
{
}

void Melodrama::Set_name(wstring Name)
{
    name = Name;
}

wstring Melodrama::Get_name()
{
    return name;
}

void Melodrama::Set_reit(int Reit)
{
    reit = Reit;
}

int Melodrama::Get_reit()
{
    return reit;
}

void Melodrama::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Melodrama::Get_genre()
{
    return genre;
}

Melodrama* Melodrama::Copy()
{
    return new Melodrama(*this);
}

Melodrama::Melodrama(const Melodrama& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Melodrama::~Melodrama()
{
}

///////////////////

Mystic::Mystic()
{
}

void Mystic::Set_name(wstring Name)
{
    name = Name;
}

wstring Mystic::Get_name()
{
    return name;
}

void Mystic::Set_reit(int Reit)
{
    reit = Reit;
}

int Mystic::Get_reit()
{
    return reit;
}

void Mystic::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Mystic::Get_genre()
{
    return genre;
}

Mystic* Mystic::Copy()
{
    return new Mystic(*this);
}

Mystic::Mystic(const Mystic& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Mystic::~Mystic()
{
}

/////////////////////////////

Cartoon::Cartoon()
{
}

void Cartoon::Set_name(wstring Name)
{
    name = Name;
}

wstring Cartoon::Get_name()
{
    return name;
}

void Cartoon::Set_reit(int Reit)
{
    reit = Reit;
}

int Cartoon::Get_reit()
{
    return reit;
}

void Cartoon::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Cartoon::Get_genre()
{
    return genre;
}

Cartoon* Cartoon::Copy()
{
    return new Cartoon(*this);
}

Cartoon::Cartoon(const Cartoon& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Cartoon::~Cartoon()
{
}

///////////////////////

Musical::Musical()
{
}

void Musical::Set_name(wstring Name)
{
    name = Name;
}

wstring Musical::Get_name()
{
    return name;
}

void Musical::Set_reit(int Reit)
{
    reit = Reit;
}

int Musical::Get_reit()
{
    return reit;
}

void Musical::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Musical::Get_genre()
{
    return genre;
}

Musical* Musical::Copy()
{
    return new Musical(*this);
}

Musical::Musical(const Musical& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Musical::~Musical()
{
}

/////////////////////////////////////

Scientific::Scientific()
{
}

void Scientific::Set_name(wstring Name)
{
    name = Name;
}

wstring Scientific::Get_name()
{
    return name;
}

void Scientific::Set_reit(int Reit)
{
    reit = Reit;
}

int Scientific::Get_reit()
{
    return reit;
}

void Scientific::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Scientific::Get_genre()
{
    return genre;
}

Scientific* Scientific::Copy()
{
    return new Scientific(*this);
}

Scientific::Scientific(const Scientific& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Scientific::~Scientific()
{
}

////////////////////////////

Noir::Noir()
{
}

void Noir::Set_name(wstring Name)
{
    name = Name;
}

wstring Noir::Get_name()
{
    return name;
}

void Noir::Set_reit(int Reit)
{
    reit = Reit;
}

int Noir::Get_reit()
{
    return reit;
}

void Noir::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Noir::Get_genre()
{
    return genre;
}

Noir* Noir::Copy()
{
    return new Noir(*this);
}

Noir::Noir(const Noir& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Noir::~Noir()
{
}

////////////////////////////

Adventures::Adventures()
{
}

void Adventures::Set_name(wstring Name)
{
    name = Name;
}

wstring Adventures::Get_name()
{
    return name;
}

void Adventures::Set_reit(int Reit)
{
    reit = Reit;
}

int Adventures::Get_reit()
{
    return reit;
}

void Adventures::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Adventures::Get_genre()
{
    return genre;
}

Adventures* Adventures::Copy()
{
    return new Adventures(*this);
}

Adventures::Adventures(const Adventures& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Adventures::~Adventures()
{
}

/////////////////////////////

Thriller::Thriller()
{
}

void Thriller::Set_name(wstring Name)
{
    name = Name;
}

wstring Thriller::Get_name()
{
    return name;
}

void Thriller::Set_reit(int Reit)
{
    reit = Reit;
}

int Thriller::Get_reit()
{
    return reit;
}

void Thriller::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Thriller::Get_genre()
{
    return genre;
}

Thriller* Thriller::Copy()
{
    return new Thriller(*this);
}

Thriller::Thriller(const Thriller& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Thriller::~Thriller()
{
}

///////////////////////////////

Horror::Horror()
{
}

void Horror::Set_name(wstring Name)
{
    name = Name;
}

wstring Horror::Get_name()
{
    return name;
}

void Horror::Set_reit(int Reit)
{
    reit = Reit;
}

int Horror::Get_reit()
{
    return reit;
}

void Horror::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Horror::Get_genre()
{
    return genre;
}

Horror* Horror::Copy()
{
    return new Horror(*this);
}

Horror::Horror(const Horror& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Horror::~Horror()
{
}

//////////////////////////

Fantasy::Fantasy()
{
}

void Fantasy::Set_name(wstring Name)
{
    name = Name;
}

wstring Fantasy::Get_name()
{
    return name;
}

void Fantasy::Set_reit(int Reit)
{
    reit = Reit;
}

int Fantasy::Get_reit()
{
    return reit;
}

void Fantasy::Set_genre(wstring Genre)
{
    genre = Genre;
}

wstring Fantasy::Get_genre()
{
    return genre;
}

Fantasy* Fantasy::Copy()
{
    return new Fantasy(*this);
}

Fantasy::Fantasy(const Fantasy& obj)
{
    name = obj.name;
    reit = obj.reit;
    genre = obj.genre;
}

Fantasy::~Fantasy()
{
}

DB::DB()
{
}

void DB::Push_back(Films* obj)
{
    films.push_back(obj);
    reit_umensh.insert(obj);
    reit_vozrast.insert(obj);
}

wstring DB::Get_minus()
{
    all_minus = L"";
    for (multiset<Films*, Reit_Umensh>::iterator it = reit_umensh.begin(); it != reit_umensh.end(); ++it) {
        all_minus = all_minus + L"=нц\n" + (*it)->Get_name() + L"\n" + (*it)->Get_genre() + L"\n" + to_wstring((*it)->Get_reit()) + L"\n" + L"=кц\n";
    }
    return all_minus;
}

wstring DB::Get_plus()
{
    all_plus = L"";
    for (multiset<Films*, Reit_Vozrast>::iterator it = reit_vozrast.begin(); it != reit_vozrast.end(); ++it) {
        all_plus = all_plus + L"=нц\n" + (*it)->Get_name() + L"\n" + (*it)->Get_genre() + L"\n" + to_wstring((*it)->Get_reit()) + L"\n" + L"=кц\n";
    }
    return all_plus;
}

DB::DB(const DB& obj)
{
    all_minus = obj.all_minus;
    all_plus = obj.all_plus;
    for (int i = 0; i < obj.films.size(); i++)
    {
        Films* pr = obj.films[i]->Copy();
        films.push_back(pr);
        reit_vozrast.insert(pr);
        reit_umensh.insert(pr);
    }
}

DB& DB::operator=(const DB& obj)
{
    if (this == &obj) return *this;
    for (int i = 0; i < films.size(); i++)
    {
        delete films[i];
    }
    films.clear();
    all_minus = obj.all_minus;
    all_plus = obj.all_plus;
    for (int i = 0; i < obj.films.size(); i++)
    {
        Films* pr = obj.films[i]->Copy();
        films.push_back(pr);
        reit_vozrast.insert(pr);
        reit_umensh.insert(pr);
    }
    return *this;
}

wstring DB::Get_equal(int num)
{
    wstring res;
    vector<int> vec;
    for (multiset<Films*, Reit_Vozrast>::iterator it = reit_vozrast.begin(); it != reit_vozrast.end(); ++it) {
        vec.push_back((*it)->Get_reit());
    }
    for (int i = 0; i < films.size() - 1; i++) {
        for (int j = i + 1; j < films.size(); j++) {
            if (films[i]->Get_reit() > films[j]->Get_reit())swap(films[i], films[j]);
        }
    }
    pair<vector<int>::iterator, vector<int>::iterator> range = equal_range(vec.begin(), vec.end(), num);
    for (vector<int>::iterator i = range.first; i != range.second; ++i) {
        int index = distance(vec.begin(), i);
        res = res + L"=нц\n" + films[index]->Get_name() + L"\n" + films[index]->Get_genre() + L"\n" + to_wstring(films[index]->Get_reit()) + L"\n" + L"=кц\n";
    }
    return res;
}

DB::~DB()
{
    for (int i = 0; i < films.size(); i++) {
        delete films[i];
    }
    films.clear();
}
