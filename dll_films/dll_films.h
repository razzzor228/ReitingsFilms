// Приведенный ниже блок ifdef — это стандартный метод создания макросов, упрощающий процедуру
// экспорта из библиотек DLL. Все файлы данной DLL скомпилированы с использованием символа DLLFILMS_EXPORTS
// Символ, определенный в командной строке. Этот символ не должен быть определен в каком-либо проекте,
// использующем данную DLL. Благодаря этому любой другой проект, исходные файлы которого включают данный файл, видит
// функции DLLFILMS_API как импортированные из DLL, тогда как данная DLL видит символы,
// определяемые данным макросом, как экспортированные.
#ifdef DLLFILMS_EXPORTS
#define DLLFILMS_API __declspec(dllexport)
#else
#define DLLFILMS_API __declspec(dllimport)
#endif

#include "Films.h"

DLLFILMS_API void EnterProg();
DLLFILMS_API void Plus(wstring name, wstring genre, int reit);
DLLFILMS_API wstring Get_vector_s();
DLLFILMS_API wstring Get_set_minus();
DLLFILMS_API wstring Get_set_plus();
DLLFILMS_API wstring Get_equal_range(int num);