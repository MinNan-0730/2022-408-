void DisCreate(LinkList &A,LinkList &B){
	LinkList p=A;
	LinkList q=B;
	LinkList t;
	int i=1;
	while(p->next!=NULL){
		if(i%2==0){
			//������B 
			q->next=p->next;
			q=q->next;
			//ɾ����� 
			p->next = p->next->next;
			
		}
		p=p->next;
		i++;
	}
	q->next=NULL;
}

void DisCreate(LinkList &A){
	LinkList B = (LinkList)malloc(sizeof(LNode));
	B->next=NULL;
	LNode *p = A->next;
	A->next = NULL;
	LNode *a=A;
	LNode *b=B;
	LNode q;
	int i=1;
	while(p!=NULL){
		if(i%2==0){
			//����B 
			b->next=p;
			b=p;
		} else{
			//����A
			a->next=p;
			a=p;
		}
		q=p;
		p=p->next;
		free(q);
		i++;
	}
	a->next=NULL;
	b->next=NULL;
}
