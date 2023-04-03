#define maxsize 100
#define ElmeType int

typedef struct{
	ElemTyep stack[maxszie];
	int top;
};

Stack s1,s2;

void Enqueue(ElemType x){
	Push(s1,x);
}

void Dequeue(ElemType &x){
	ElemType t;
	while(!StackEmpty(s1)){
		Pop(s1,t);
		Push(s2,t);
	}
	Pop(s2,x);
	while(!StackEmpty(s2)){
		Pop(s2,t);
		Push(s1,t);
	}
}

bool QueueEmpty(){
	if(StackEmpty(s1)){
		return true;
	} else{
		return false;
		
	}
}
