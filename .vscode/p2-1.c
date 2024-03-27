#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int); 
float sum2(float *list, int); 
float sum3(int n, float *list);
float input[MAX_SIZE], answer; 
int i;
void main(void)
{
for(i=0; i < MAX_SIZE; i++) 
    input[i] = i; // input0에서부터 99까지 인덱스와 밸류의 값을 맞춰서 세팅
/* for checking call by reference */ 
printf("--------------------------------------\n"); 
printf(" sum1(input, MAX_SIZE) \n"); 
printf("-------------------------------------\n"); 
printf("input \t= %p\n", input); //input배열의 주소 0x102a0c008
    answer = sum1(input, MAX_SIZE);//sum1함수에서 설명하겠습니다
    printf("The sum is: %f\n\n", answer);//녀ㅡ
printf("--------------------------------------\n"); 
printf(" sum2(input, MAX_SIZE) \n"); 
printf("--------------------------------------\n"); 
printf("input \t= %p\n", input);
    answer = sum2(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
printf("--------------------------------------\n"); 
printf(" sum3(MAX_SIZE, input) \n"); 
printf("--------------------------------------\n"); 
printf("input \t= %p\n", input);
    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);
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
float sum2(float *list, int n)
{
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);
int i;
float tempsum = 0; 
for(i = 0; i < n; i++)
    tempsum += *(list + i); 
return tempsum;
}
/* stack variable reuse test */
float sum3(int n, float *list)
{
printf("list \t= %p\n", list); printf("&list \t= %p\n\n", &list);
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += *(list + i); 
    return tempsum;
}