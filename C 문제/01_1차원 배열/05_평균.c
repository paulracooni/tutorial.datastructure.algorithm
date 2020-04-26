// 평균
// https://www.acmicpc.net/problem/1546

#include<stdio.h>

int main(){
    
    // 총 점수 개수 입력
    int i, N = 0;
    scanf("%d",&N);
    
    
    // 점수 입력
    int scores[N] = {0};
    for(i=0; i<N; i++)
        scanf("%d",&scores[i]);
    
        
    // 최대값 찾기
    int max = 0;
    for(i=0; i<N; i++)
        if(max<scores[i])
            max = scores[i];

    // 점수 수정
    float rescores[N] = {0};
    for(i=0; i<N; i++)
        rescores[i] = ((float)scores[i]/(float)max)*100.0;
    
    // 평균 계산
    float avg = 0; 
    for(i=0; i<N; i++)
        avg += rescores[i];
    
    avg = avg/N;
    
    // 결과 출력
    printf("%f", avg);
    
    return 0;
}