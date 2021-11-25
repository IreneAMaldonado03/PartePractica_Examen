
#include <stdio.h>

int main()
{
	int TamArch, PosicionBytes;

	scanf_s("%i", &TamArch);
	scanf_s("%i", &PosicionBytes);

	printf("BM%08X00000000%08X", TamArch, PosicionBytes);

	return 0;

}

