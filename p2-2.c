#include <stdio.h>
void print_one(int *ptr, int rows);
int main() {
printf("[----- [HwaJinLee]  [2020037103] -----]\n");
    int one[] = {0, 1, 2, 3, 4};
    printf("one     = %p\n", one);//배열이름은 주소값과 같다0x102a0c008
    printf("&one    = %p\n", &one);//배열앞에 &를 붙여도 주소값이다 0x102a0c008
    printf("&one[0] = %p\n", &one[0]);//배열의 [0]번쨰 인덱스 또한 주소값이다 0x16d3fb228
    printf("\n");
printf("------------------------------------\n"); 
printf(" print_one(&one[0], 5) \n"); 
printf("------------------------------------\n"); 
print_one(&one[0], 5);
printf("------------------------------------\n"); 
printf(" print_one(one, 5) \n"); 
printf("------------------------------------\n"); 
print_one(one, 5);
//print_one(&one[0], 5);와 print_one(one, 5);의 결과는 똑같을 수 밖에 없다.
//&one[0]과 one은 one의 주소 즉, 같은값을 나타내기 때문에
return 0; 
}
void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n"); 
for (i = 0; i < rows; i++)
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); 
    printf("\n");
}