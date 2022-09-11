#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include <windows.h>
#include <tchar.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	{
		bool res;
		res = CreateDirectory("exemple", NULL);
		std::cout << "Criado: " << std::boolalpha << res << std::end1;
	}
	return 0;
	
}
