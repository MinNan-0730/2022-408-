#define maxsize 100
#define ElmeType int
typedef struct{
	ElemType data[maxsize];
	int tag;
	int front,rear;
}SqQueue;

SqQueue queue;

void InitQueue(){
	queue.front=queue.rear=0;
	queue.tag=0;
}

int push(ElemType x){
	if(queue.front==queue.rear&&queue.tag==1){
		printf("¶ÓÂúÁË£¡");
		return 0;
	} else{
		queue.data[queue.rear+1]=x;
		queue.rear = (queue.rear+1)%maxsize;
		if(queue.front==queue.rear){
			queue.tag=1;
		}
	}
}

int pop(){
	if(queue.front==queue.rear&&queue.tag==0){
		printf("¶Ó¿Õ£¡");
		return 0;
	} else{
		printf(queue.data[queue.front-1]);
		queue.front = (queue.front-1)%maxsize;
		if(queue.front==queue.rear){
			queue.tag=0;
		}
	}
}
