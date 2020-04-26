// 평균은 넘겠지
// https://www.acmicpc.net/problem/4344
#include<stdio.h>

float array_avg(int *values, int arr_size){
    
    float avg=0;
    for(int i=0; i<arr_size; i++)
        avg += (float)values[i];

    avg = avg/(float)arr_size;

    return avg;
}

int main(){
    
    // 총 입력개수 입력
    int i, j, N=0, M=0;
    scanf("%d",&N);
    
    // 입력 개수만큼 작업 진행
    for(i=0; i<N; i++){
        
        // 학생들 점수의 수 입력
        scanf("%d",&M);
        
        // 학생들 점수 입력
        int scores[M] = {0};
        for(j=0; j<M; j++)
            scanf("%d",&scores[j]);
        
        // 점수의 평균 계산
        float avg = array_avg(scores, M);

        // 평균 이상인 학생수 Count
        int over_avg = 0;
        for(j=0; j<M; j++)
            if(scores[j]>avg)
                over_avg+=1;
                
        // 평균을 넘는 학생들의 비율을 계산
        float ans = ((float)over_avg/(float)M)*100.0;
        printf("%.3f%%\n", ans);
    }
    
    return 0;
}
