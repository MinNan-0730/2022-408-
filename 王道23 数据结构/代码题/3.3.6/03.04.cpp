Queue q;
Queue q1; //�ͳ� 
Queue q2; //���� 

void manage(Queue q,Queue &q1,Queue &q2){
	int i,sum=0;
	while(sum<10){
		ElemType x;
		i=0;
		for(;i<4&&!Empty(q1);i++){
			DeQueue(q1,x);
			EnQueue(q,x);
			sum++;
		}
		if(i==4&!Empty(q2)){
			DeQueue(q2,x);
			EnQueue(q2,x);
			sum++;
		}
		else{	//�ͳ��������߻���û���� 
			if(!Empty(q2)){
				while(i<4&sum<10&!Empty(q2)){
					DeQueue(q2,x);
					EnQueue(q2,x);
					sum++;
					i++;
				} 
			} 
		}
		if(Empty(q1)&&Empty(q2)){
			sum=11;
		}
	}
}
