// 제로
// https://www.acmicpc.net/problem/10773

#include<iostream>
#include<stack>

using namespace std;

int main(){
    
    // 총 입력개수 입력
    int N=0;
    cin >> N;
    
    // 스택 초기화 
    stack<int> stk;
    
    // 스택에 값 입력 
    for(int i=0; i<N; i++){
        
        int value;
        cin >> value;
        
        if(value==0)
            stk.pop();
        else
            stk.push(value);
    }
    
    // 스택 값 SUM
    int sum = 0;
    while(!stk.empty()){
        sum += stk.top();
        stk.pop();
    }
    
    cout << sum << endl;
    return 0;
}