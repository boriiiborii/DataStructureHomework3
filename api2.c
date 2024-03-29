#include <stdio.h> 
#include <stdlib.h>
void main() {
    int list[5];
    int *plist[5];
    list[0] = 10;
    list[1] = 11;
    plist[0] = (int*)malloc(sizeof(int)); // 동적 메모리 할당
printf("[----- [HwaJinLee]  [2020037103] -----]\n");
printf("list[0] \t= %d\n", list[0]); //선언값 10
printf("list \t\t= %p\n", list); // list주소값 0x16b097264
printf("&list[0] \t= %p\n", &list[0]);// list주소값 0x16b097264
printf("list + 0 \t= %p\n", list+0); // list주소값 0x16b097264
printf("list + 1 \t= %p\n", list+1); // list+1은 list주소값+(4*1)(intSize)라 0x16b097268
printf("list + 2 \t= %p\n", list+2); // list+1은 list주소값+(4*2)(intSize)라 0x16b09726c (16진법))
printf("list + 3 \t= %p\n", list+3); // 위와 같이 동작 0x16b097270
printf("list + 4 \t= %p\n", list+4); // 위와 같이 동작 0x16b097274
printf("&list[4] \t= %p\n", &list[4]); // list[4]의 주소는 list의 주소에 4*4 = 16만큼 떨어져있음으로 0x16b097274
    free(plist[0]);// 동적메모리 해제 
}
