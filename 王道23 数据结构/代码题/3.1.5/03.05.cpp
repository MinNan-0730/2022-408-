#define maxsize 100
#define ElemType int
typedef struct{
	ElemType stack[maxsize];
	int top[2];
}stk;
stk s;
//top[0]��ʼ-1��top[1]��ʼmaxsize+1; 

//��ջ����
int push(int i, ElemType x){
	if(i!=0&&i!=1){
		printf("ջ�Ų��ԣ�");
		return 0;
	} else{
		if(s.top[0]+1=s.top[1]){
			printf("ջ���ˣ�");
			return 0;
		} else{
			if(i==0){
				s.stack[++s.top[0]]=x;
			} else{
				s.stack[--s.top[1]]=x;
			}
			return 1;
		}
	}
} 
//��ջ����
int  pop(int i){
	if(i!=0&&i!=1){
		printf("ջ�Ų��ԣ�");
		return 0;
	} else{
		if(i==0){
			if(s.top[0]==-1){
				printf("ջ�գ�");
				return 0;
			} else{
				printf(s.stack[s.top[0]--]);
				return 1;
			}
		} else{
			if(s.top[1]==maxsize){
				printf("ջ�գ�");
				return 0;
			} else{
				printf(s.stack[s.top[1]--]);
				return 1;
			}
		}
	}
}
