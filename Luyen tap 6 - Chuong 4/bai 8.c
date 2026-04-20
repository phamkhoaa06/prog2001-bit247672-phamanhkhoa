#include <stdio.h>

void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    printf("a = %d", a); // vẫn là 10
    return 0;
}
// Created by khoa2 on 4/20/2026.
//
