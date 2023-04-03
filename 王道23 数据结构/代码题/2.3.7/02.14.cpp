LinkList Get_Common(LinkList &A,LinkList &B){
	LinkList C = (LinkList)malloc(sizeof(LNode));
	LNode *p = A->next,*q=B->next, *r=C;
	while(p!=NULL&&q!=NULL){
		if(p->data<q->data){
			p=p->next;
		}
		else if(p->data>q->data){
			q=q->next;
		} else{
			LNode *s = (LNode*)malloc(sizeof(LNode));
			s->data=p->data;
			r->next=s;
			r=r->next;
			q=q->next;
			p=p->next;
		}
	}
	r->next=NULL;
	return C;	
}
