#include "calculateurFamilier.h"
#include <windows.h>

#define OSwindows 1
int main(){
	
	// gestion des accents
	#if OSwindows
	SetConsoleOutputCP(CP_UTF8);
	#endif

	calculateurFamilier calc;
	return 0;
}
