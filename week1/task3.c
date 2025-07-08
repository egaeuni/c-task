// 𝐐3. 세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. (단, 조건 연산자를 사용하여 출력하세요.)
#include <stdio.h>

int main(void){
  int A,B,C,result;
  scanf("%d %d %d", &A, &B, &C);

  result = (A > B) ? ( (A > C) ? ( (B > C) ? B : C ) : A ) : ( (A > C) ? A : C );

  printf("%d\n", result);

  return 0;
}
