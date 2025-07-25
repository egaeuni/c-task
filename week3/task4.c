/*
𝐐4. N*M크기의 두 행렬 A와 B가 주어졌을 때, 두 행렬을 더하는 프로그램을 작성하시오.
✔️ 입력 : 
첫째 줄에 행렬의 크기 N 과 M이 주어진다. 둘째 줄부터 N개의 줄에 행렬 A의 원소 M개가 차례대로 주어진다. 
이어서 N개의 줄에 행렬 B의 원소 M개가 차례대로 주어진다. N과 M은 100보다 작거나 같고, 행렬의 원소는 절댓값이 100보다 작거나 같은 정수이다.
✔️ 출력 : 첫째 줄부터 N개의 줄에 행렬 A와 B를 더한 행렬을 출력한다. 행렬의 각 원소는 공백으로 구분한다.
*/

#include <stdio.h>

int main(void){
  int N, M;
  printf("행, 열을 입력하세요: ");
  scanf("%d %d", &N, &M);

  int A[N][M], B[N][M], sum[N][M];
  printf("A 배열을 입력하세요: ");
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
      scanf("%d", &A[i][j]);
    }
  }

  printf("B 배열을 입력하세요: ");
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
      scanf("%d", &B[i][j]);
    }
  }

  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
      printf("%d ", (A[i][j] + B[i][j]));
    }
    printf("\n");
  }

  return 0;
}