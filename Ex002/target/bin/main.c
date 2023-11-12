#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>
#include "fmt.h";
#include "teste.h";

int main() {
setlocale(LC_ALL, "Portuguese");
teste();
usleep(200000);
return 0;
}