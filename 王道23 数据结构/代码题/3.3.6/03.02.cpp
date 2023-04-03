void TrainArrange(char *train){
	char *p,*q,c;
	Stack s;
	Initial(s);
	p=train;
	while(p){
		if(*p=='H'){
			Push(s,*p);
		} else{
			*(q++)=*p;
		}
		p++;
	}
	while(!IsEmpty(s)){
		Pop(s,c);
		*(q++)=c;
	}
}
