void Union(LinkList &A, LinkList &B){
	LNode *p=A->next, *q=B->next;
	A->next=NULL;
	LNode *r=A;
	while(p!=NULL&&q->NULL){
		if(p->data<q->data){
			p=p->next;
		} else if(q->data<p->data){
			q=q->next;
		} else{
			LNode *s=(LNode*)malloc(sizeof(LNode));
			s->data = q->data;
			r->next = s;
			r = r->next;
			q=q->next;
			p=p->next;
		}
	}
	r->next = NULL;
}
