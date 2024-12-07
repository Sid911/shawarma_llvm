
#include "kaleidoscope_std.h"
#include <stdio.h>
#include <stdarg.h>

int GetInt() {
    int value;
    scanf("%d", &value);
    return value;
}

double GetDouble() {
    double value;
    scanf("%lf", &value);
    return value;
}

void serve(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

void serveLn(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    printf("\n");
}

