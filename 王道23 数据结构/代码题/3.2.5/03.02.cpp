#define maxsize 100
#define ElmeType int
typedef struct{
	ElemType data[maxsize];
	int front,rear;
}Queue;

typedef struct{
	ElemType stack[maxsize];
	int top;
}Stack;

void QueuePop(Queue &q,ElemType &x){
	if(q.rear==q.front){
		prtinf("¶Ó¿Õ£¡");
	} else{
		x=q.data[q.front--];
	}
	return 0;
} 

void QueuePush(Queue &q,ElemType x){
	if((q.rear+1)%maxsize==q.front){
		printf("¶ÓÂú£¡"); 
	} else{
		q.data[q.rear++]=x;
	}
}

void StackPop(Stack &s,ElemType &x){
	if(s.top==-1){
		printf("Õ»¿Õ£¡");
	} else{
		x=s.stack[top--];
	}
	return 0;
}

void StackPush(Stack &,ElemType x){
	if(s.top==maxsize-1){
		printf("Õ»Âú£¡");
	} else{
		s.stack[++s.top]=x;
	}
	return 0;
}

Queue reverse(Queue q,Stack s){
	ElemType x;
	while(q.front!=q.rear){
		QueuePop(q,x);
		StackPush(s,x);
	} 
	while(s.top!=-1){
		StackPop(s,x);
		QueuePush(q,x);
	}
}
