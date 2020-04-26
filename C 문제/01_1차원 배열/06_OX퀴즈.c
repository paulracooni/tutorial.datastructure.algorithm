// OX 퀴즈
// https://www.acmicpc.net/problem/8958

#include<stdio.h>
#include<string.h>

int main(){
    
    // 총 점수 개수 입력
    int i, j, N = 0;
    scanf("%d",&N);
    
    
    
    char ox_string[80] = {'\0'};
    for(i=0; i<N; i++){
        
        // 점수 입력
        scanf("%s", ox_string);
        int len = strlen(ox_string);
        
        // 점수 계산
        int all_score = 0; 
        int score_cnt = 0;
        for(j=0; j<len; j++){
            if(ox_string[j]=='O'){
                score_cnt +=1;
                all_score += score_cnt;
            }
            else{
                score_cnt = 0;
            }
        }
        
        // 점수 출력
        printf("%d\n", all_score);
    }
      
    return 0;
}