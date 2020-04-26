// 나머지 
// https://www.acmicpc.net/problem/3052

#include<stdio.h>
#define bool   _Bool
#define false  0
#define true   1

bool isin(int val, int *arr, int len){
    
    int i; 
    bool ret= false;
    for(i=0; i<len; i++)
        if(arr[i]==val)
            ret = true;
    
    return ret;
}

int main(){
    
    // 입력
    int i, input[10];
    for(i=0; i<10; i++)
        scanf("%d", &input[i]);
    
    // Mod 계산
    int res_mod[10];
    for(i=0; i<10; i++)
        res_mod[i] = input[i]%42; 
        
    
    // 서로다른 값 Count
    int j, arr_cnt = 1;
    int distinct[10] = {'\0'};
    distinct[0] = res_mod[0];
    for(i=1; i<10; i++)
        if(!isin(res_mod[i], distinct, arr_cnt)){
            distinct[arr_cnt] = res_mod[i];
            arr_cnt += 1;
        }
    
    // 출력 결과
    //for(i=0; i<arr_cnt; i++)
    //    printf("%d\n", distinct[i]);
    printf("%d", arr_cnt);
    return 0;
}
