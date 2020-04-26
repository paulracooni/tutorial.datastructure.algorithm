// 괄호
// https://www.acmicpc.net/problem/9012
#include<iostream>
#include<stack>

using namespace std;

int main(){
    
    // 총 입력개수 입력
    int N=0;
    cin >> N;
    
    // N번의 Task를 수행
    for(int i=0; i<N; i++){
        
        //stack 초기화 
        stack<int> stk; 
        
        // 문자열 초기화 그리고 입력 
        string parenthesis;
        cin >> parenthesis;
        
        // 문자열이 VPS인지 아닌지 검사
        int isVPS = 1; 
        for(char& c: parenthesis){
            // '(' 일경우 Stack에 push
            if(c=='(')
                stk.push(c);

            // ')' 일경우 Stack에 pop 하고, 
            // pop 하기전 empty일 경우, VPS가 아니다. 
            else if(c==')'){

                if(stk.empty()){
                    isVPS=0; break;
                }
                else{
                    stk.pop();
                }
            }
                
        }
        
        // 검사 결과 출력
        // VPS검사 중, pop 하기전 empty일 경우, VPS가 아님. 
        // VPS검사 이후, stack에 element가 남아있다면 VPS가 아님.
        if(isVPS!=1 or stk.size()!=0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        
        
    }
    return 0;
}