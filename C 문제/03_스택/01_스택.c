// 스택
// https://www.acmicpc.net/problem/10828

#include<stdio.h>
#include<string.h>

#define MAX_STACK_SIZE 10000
#define TRUE 1 
#define FALSE 0 

int top=-1;
int stack[MAX_STACK_SIZE] = {0};

int isEmpty(){
    if(top<0)
        return TRUE;
    else
        return FALSE;
}

int isFull(){
    if(top>=MAX_STACK_SIZE)
        return TRUE;
    else
        return FALSE;
}

void push(int value){
    if(isFull()==FALSE)
        stack[++top]=value;     
}

int pop(){
    if(isEmpty()==true)
        return -1;
    else
        return stack[top--];
}

int size(){ return top + 1; }



int getTop(){
    if(top!=-1)
        return stack[top];
    else
        return -1;
}

int main(){
    
    // 총 입력개수 입력
    int i, N=0;
    scanf("%d",&N);
    
    for(i=0; i<N; i++){
        
        char inst[10];
        scanf("%s", inst);
        
        if(strcmp(inst,"push")==0){
            int value;
            scanf("%d", &value);
            push(value);
        }
        else if(strcmp(inst,"pop")==0){
            printf("%d\n", pop());
        }
        else if(strcmp(inst,"size")==0){
            printf("%d\n", size());
        }
        else if(strcmp(inst,"empty")==0){
            printf("%d\n", isEmpty());
        }
        else if(strcmp(inst,"top")==0){
            printf("%d\n", getTop());
        }
    }

    return 0;
}