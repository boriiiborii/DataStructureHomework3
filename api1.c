#include <stdio.h>
#include <stdlib.h>
void main() {
    int list[5];
    int *plist[5] = {NULL,};
plist[0] = (int *)malloc(sizeof(int)); // 동적메모리할당.  plist[0]는 메모리공간을 가르킴
list[0] = 1;
list[1] = 100;
*plist[0] = 200; // plist[0]이 가르키는 주소에 있는 값을 200으로 세팅
printf("[----- [HwaJinLee]  [2020037103] -----]\n");
printf("list[0] = %d\n", list[0]); //위에 선언과 같이 1
printf("&list[0] = %p\n", &list[0]); // 현재 리스트의 주소는 0x16fbcf264로 배정받음
printf("list = %p\n", list); //리스트의 주소와 같이 0x16fbcf264가 출력 (리스트변수는 주소값과 같다)
printf("&list = %p\n", &list); // 이것또한 0x16fbcf264가 출력. 리스트의 주소값 출력.
printf("----------------------------------------\n\n");
printf("list[1] = %d\n", list[1]); // 위 선언과 같이 100
printf("&list[1] = %p\n", &list[1]); // 인트형 리스트라 list주소값에 4를더한 0x16fbcf268
printf("*(list+1) = %d\n", *(list + 1)); // 100출력 리스트주소의 다음칸(int형이라 4를 더한 주소)의 값이니까 100
printf("list+1 = %p\n", list+1); // 마찬가지로 인트형이라 4를 더한 주소값이 출력 0x16fbcf268
printf("----------------------------------------\n\n");
printf("*plist[0] = %d\n", *plist[0]); // 위 선언과 같이 200
printf("&plist[0] = %p\n", &plist[0]); // plist가 배정받은 주소값 0x16fbcf238
printf("&plist = %p\n", &plist);//이 또한 주소값을 프린트 0x16fbcf238
printf("plist = %p\n", plist); // 얘도 리스트라 주소값을 프린트 0x16fbcf238
printf("plist[0] = %p\n", plist[0]); // 6번째줄에서 plist[0]의 밸류값 (메모리 할당 받았던 주소 0x6000021e8050)
printf("plist[1] = %p\n", plist[1]); // 할당받지않았음
printf("plist[2] = %p\n", plist[2]); // 할당받지않았음
printf("plist[3] = %p\n", plist[3]); // 할당받지않았음
printf("plist[4] = %p\n", plist[4]); // 할당받지않았음

free(plist[0]); //malloc으로 할당받았던 메모리 해제
}
