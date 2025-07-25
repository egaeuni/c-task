/*
𝐐2. N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

✔️ 입력 : 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 
둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

✔️ 출력 : 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
*/

#include <stdio.h>

int main(void){
  int count, max, min;

  printf("정수의 개수를 입력하세요: ");
  scanf("%d", &count);

  int intCount[count];

  printf("n개의 정수를 입력하세요: ");
  for(int i=0; i<count; i++){
    scanf("%d", &intCount[i]);
  }

  max = intCount[0];
  for(int i=0; i<count; i++){
      if(intCount[i] > max) {
        max = intCount[i];
      }
  }
  
  min = intCount[0];
  for(int i=0; i<count; i++){
      if(intCount[i] < min) {
        min = intCount[i];
      }
  }

  printf("%d %d\n", min, max);

  return 0;
}

