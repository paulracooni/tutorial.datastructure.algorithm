// 숫자의 개수
// https://www.acmicpc.net/problem/2577

#include<stdio.h>

int main(){
    
    // 입력 세개의 자연수 A, B, C
    // 동시에 곱하기
    int i, input, res=1;
    for(i=0; i<3; i++){
        scanf("%d", &input);
        res *= input;
    }
    
    // 10씩 나누면서 10의 자리 하나씩 빼내기
    int arr_count[10] = {0};
    int div_val = 1;
    int div_res = 1;
    int mod_res = 0;
    while(div_res!=0){
        
        mod_res = (res % (div_val*10))/div_val;
        div_res = res / div_val;
        div_val = div_val*10;

        
        if(div_res!=0){
            arr_count[mod_res]+=1;
        }
    }
    
    // 결과 출력하기
    for(i=0; i<10; i++){
        printf("%d\n", arr_count[i]);
    }
    
}