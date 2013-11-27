

//#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

#define EOF (-1)
#include <fstream>
#ifdef __cplusplus    // If used by C++ code, 
extern "C" {          // we need to export the C interface
#endif

	__declspec(dllexport) char* __cdecl openLocalTAF(char* _file)
	{
		DWORD cchWritten;
		HANDLE hConout;
		BOOL fRet;





		cout << "DLL!!" << endl;

		cout << _file << endl;
		fstream datei(_file, ios::in);
		char zeile[200] = { 0 };
		char newline[600] = { 0 };
		while (datei.getline(zeile, 200))
		{
			cout << zeile << endl;
			strcat_s(newline, 200, zeile);
		}
		
		cout << "Ausgabe: " << newline << endl;
		return newline;
	}

#ifdef __cplusplus
}
#endif
