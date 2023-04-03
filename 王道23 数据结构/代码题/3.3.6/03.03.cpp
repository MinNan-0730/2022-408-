double P(double x,int n){
	if(n==0) return 1;
	else if(n==1) return 2*x;
	else if(n>=2) return 2*x*P(x,n-1)-2*(n-1)*P(x,n-2);
	else return -1;//出错 
}

//利用栈实现
double P(double x,int n){
	int i=0;
	Stack s;
	InitStack(s);
	
	while(i<=n){
		if(i==0){
			s->data[++s->top]=1;
		} else if(i==1){ 
			s->data[++s->top]=2*x;
		} else{
			s->data[s->top+1]=2*x*s->data[s->top]-2*(i-1)*s->data[s->top-1];
			++s->top;
		}
		i++;
	}
	return s->data[s->top];
} 
 
