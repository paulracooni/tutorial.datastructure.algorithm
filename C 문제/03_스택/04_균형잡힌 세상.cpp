// 균형잡힌 세상
// https://www.acmicpc.net/problem/4949

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    
    // 총 입력개수 입력
    
    while(1){
        
        // 문자열 입력
        string input;
        getline(cin,input);
        if(input[0]=='.'){ break; }
        
        // 작업 스택 초기화
        stack<char> stk; 
        
        // VPS인지 검사
        int isVPS = 1; 
        for(char& c : input){
            
            if(c=='(' || c=='['){
                stk.push(c);
            }
            else if(c==')' || c==']'){
                
                if(stk.empty() || (c==')' && stk.top()!='(') || (c==']' && stk.top()!='[')){ 
                    isVPS=0; break; 
                }
            
                stk.pop();
            }// else if(c==')' or c==']')
        }// for(char& c : input)
        
        // 검사 결과 출력
        // VPS검사 중, pop 하기전 empty일 경우, VPS가 아님. 
        // VPS검사 이후, stack에 element가 남아있다면 VPS가 아님.
        if(isVPS!=1 || !stk.empty())
            cout << "no" << endl;
        else
            cout << "yes" << endl;
        
    }// while(input.compare('.')!=0)
    return 0;
}