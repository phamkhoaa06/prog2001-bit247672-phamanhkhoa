#include <stdio.h>
int main () {
    int x;
    printf("Nhap x =");
    scanf("%d",&x);
    x += 5 ;
    printf("Sau khi +5 : %d\n , x");
    x -= 3 ;
    printf("Sau khi -3 : %d\n , x");
    x *= 2 ;
    printf("Sau khi *2 : %d\n , x");
    x / 4 ;
    printf("Sau khi /4 : %d\n , x");
    return 0;
}
