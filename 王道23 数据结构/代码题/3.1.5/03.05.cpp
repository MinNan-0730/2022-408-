#define maxsize 100
#define ElemType int
typedef struct{
	ElemType stack[maxsize];
	int top[2];
}stk;
stk s;
//top[0]初始-1，top[1]初始maxsize+1; 

//入栈操作
int push(int i, ElemType x){
	if(i!=0&&i!=1){
		printf("栈号不对！");
		return 0;
	} else{
		if(s.top[0]+1=s.top[1]){
			printf("栈满了！");
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
//退栈操作
int  pop(int i){
	if(i!=0&&i!=1){
		printf("栈号不对！");
		return 0;
	} else{
		if(i==0){
			if(s.top[0]==-1){
				printf("栈空！");
				return 0;
			} else{
				printf(s.stack[s.top[0]--]);
				return 1;
			}
		} else{
			if(s.top[1]==maxsize){
				printf("栈空！");
				return 0;
			} else{
				printf(s.stack[s.top[1]--]);
				return 1;
			}
		}
	}
}
