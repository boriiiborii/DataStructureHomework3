#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int); 
float sum2(float *list, int); 
float sum3(int n, float *list);
float input[MAX_SIZE], answer; 
int i;
void main(void)
{
printf("[----- [HwaJinLee]  [2020037103] -----]\n");    
for(i=0; i < MAX_SIZE; i++) 
    input[i] = i; // input0에서부터 99까지 인덱스와 밸류의 값을 맞춰서 세팅
/* for checking call by reference */ 
printf("--------------------------------------\n"); 
printf(" sum1(input, MAX_SIZE) \n"); 
printf("-------------------------------------\n"); 
printf("input \t= %p\n", input); //input배열의 주소 0x102a0c008
    answer = sum1(input, MAX_SIZE);//sum1함수에서 설명하겠습니다
    printf("The sum is: %f\n\n", answer);// sum1에서 return했던것을 출력(하단sum1함수 참고) 4950.000000
printf("--------------------------------------\n"); 
printf(" sum2(input, MAX_SIZE) \n"); 
printf("--------------------------------------\n"); 
printf("input \t= %p\n", input);//input 배열 주소 0x102658008
    answer = sum2(input, MAX_SIZE);// sum2함수에서 설명하겠습니다
    printf("The sum is: %f\n\n", answer);//sum2에서 return한 값 출력 4950.000000
printf("--------------------------------------\n"); 
printf(" sum3(MAX_SIZE, input) \n"); 
printf("--------------------------------------\n"); 
printf("input \t= %p\n", input);//input배열주소 0x102658008
    answer = sum3(MAX_SIZE, input);//sum3에서 설명하겠습니다.
    printf("The sum is: %f\n\n", answer);//sum3의 return값 출력 4950.000000
}
float sum1(float list[], int n) { //input, MAX_SIZE를 받아왔었음
    printf("list \t= %p\n", list);//참조형식이라 input의 주소인 0x102a0c008출력
    printf("&list \t= %p\n\n", &list); // 배열을 가르키는 포인터의 주소 0x16d3fb228
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];//배열 요소들 더함
    return tempsum;
}
float sum2(float *list, int n) //위에서 input, MAX_SIZE가 인자로 들어왔음
{
    printf("list \t= %p\n", list); //포인터로 받은 배열의 주소 0x102658008
    printf("&list \t= %p\n\n", &list); // 포인터 자체 주소 0x1026580
int i;
float tempsum = 0; 
for(i = 0; i < n; i++)
    tempsum += *(list + i); //배열 요소 모두 더함
return tempsum;
}
/* stack variable reuse test */
float sum3(int n, float *list) //MAX_SIZE, input인자값으로 들어옴.
{
printf("list \t= %p\n", list); //포인터로 받은 배열주소 0x102658008
printf("&list \t= %p\n\n", &list);// 포인터 자체 주소 0x16d7af210
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i); //포인터 통하여 배열값 모두 더함
    return tempsum;
}