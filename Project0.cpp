#include <cstdio>

int main() {
    //data
    const char* head = "#include <cstdio>%c%cint main() {%c";
    const char* head_print = R"(    printf(head, '\n', '\n', '\n');%c    printf("    const char* head = \"%%s\";\n", head);%c)";
    const char* mid_print = R"(    printf("    const char* head_print = R\"(%%s)\";\n", head_print);%c    printf("    const char* mid_print = R\"(%%s)\";\n", mid_print);%c    printf("    const char* end_print = R\"(%%s)\";\n", end_print);%c    printf("    const char* end = \"%%s\";\n", end);%c)";
    const char* end_print = R"(    printf(head_print, '\n', '\n');%c    printf(mid_print, '\n', '\n', '\n', '\n');%c    printf(end_print, '\n', '\n', '\n', '\n');%c    printf(end, '\n', '\n');%c)";
    const char* end = "    return 0;%c}";
    //print statements
    printf(head, '\n', '\n', '\n');
    printf("    const char* head = \"%s\";\n", head);
    printf("    const char* head_print = R\"(%s)\";\n", head_print);
    printf("    const char* mid_print = R\"(%s)\";\n", mid_print);
    printf("    const char* end_print = R\"(%s)\";\n", end_print);
    printf("    const char* end = \"%s\";\n", end);
    printf(head_print, '\n', '\n');
    printf(mid_print, '\n', '\n', '\n', '\n');
    printf(end_print, '\n', '\n', '\n', '\n');
    printf(end, '\n', '\n');

    return 0;
}
