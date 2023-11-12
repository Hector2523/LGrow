#include <stdio.h>
#include <string.h>

// This function receives a parameter that does not
// have a specific type, from the moment it is received,
// the parameter is printed in the console, that is,
// the "printf" method. from Rust, ends up becoming
// fmt.puts, in LGrow.
void fmt_puts(char *content) {
    FILE *tfile = fopen("console.log", "a");

    if (tfile != NULL) {
        fprintf(tfile, content);
        fprintf(tfile, "\n");
        fclose(tfile);
    };

    printf("%s\n", content);
}

size_t fmt_sizeof(char *type) {
    char *Int = "Int";
    char *String = "String";
    char *Giant = "Giant";
    char *Short = "Short";

    if( strcmp(Int, type) ) return sizeof(int);
    else if( strcmp(String, type) ) return sizeof(char*);
    else if( strcmp(Giant, type) ) return sizeof(long long*);
    else if( strcmp(Short, type) ) return sizeof(short*);
}