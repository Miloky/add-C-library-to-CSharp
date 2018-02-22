#include <stdio.h>

__declspec(dllexport) void __stdcall hello(int a);
void func(int a);

__declspec(dllexport) void __stdcall hello(int a) {
		func(a);
}

void func(int a) {
	for (int i = 0;i < a;i++)
		printf("%d. Hello\n", i);
}