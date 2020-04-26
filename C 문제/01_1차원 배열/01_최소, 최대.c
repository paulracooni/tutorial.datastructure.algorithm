// 최소, 최대
// https://www.acmicpc.net/problem/10818

// [문제]
// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

// [입력]
// 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 
// 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 
// 작거나 같은 정수이다.

// [출력]
// 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

// [예제 입력 1]
// 5
// 20 10 35 30 7

// [예제 출력 1]
// 7 35
#include<stdio.h>

int main(){
    
    // 정수 N개 입력
    int N; 
    scanf("%d\n", &N);

    // 배열 입력
    int i;
    int input_arr[N];
    for(i=0; i<N; i++){

        scanf("%d", &input_arr[i]);
    }

    // 최대 최소 계산
    int min = 1000000;
    int max = - 1000000;
    for(i=0; i<N;i++){

        if(min > input_arr[i])
            min =  input_arr[i];

        if(max < input_arr[i])
            max = input_arr[i];
    }

    // 최대 최소 출력
    printf("%d %d\n", min, max);
}