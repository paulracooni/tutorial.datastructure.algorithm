// 카드2
// https://www.acmicpc.net/problem/2164

#include<iostream>
#include<queue>

using namespace std;

int main(){
    
    
    // Q 초기화
    queue<int> q;
    
    // 첫째 줄에 정수 N(1≤N≤500,000)이 주어진다.
    int N;
    cin >> N;
    
    // 카드 초기화
    for(int i=0; i<N;i++)
	    q.push(i+1);
	
	while(q.size()!=1)
	{
    	// 제일 위에 있는 카드를 바닥에 버린다. 
    	q.pop();
    	
    	// 다음, 제일 위에 있는 카드를 제일 아래에 
    	// 있는 카드 밑으로 옮긴다
    	int front = q.front();
    	q.pop();
    	q.push(front);
    	
    	// N이 주어졌을 때, 제일 마지막에 남게 되는 
    	// 카드를 구하는 프로그램을 작성하시오.
	}
	
	cout << q.front();
    return 0;
}