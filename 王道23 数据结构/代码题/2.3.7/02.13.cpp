LinkList Merge(LinkList &A,LinkList &B){
	LNode *ra = A->next;
	LNode *rb = B->next;
	LNode *p;
	A->next = NULL;
	while(ra!=NULL&&rb!=NULL){
		if(ra->data<=rb->data){
			p=ra;
			ra=ra->next;
			p->next=A->next;
			A->next=p;
		} else{
			p=rb;
			rb=rb->next;
			p->next=A->next;
			A->next=p;
		}
	}
	while(ra!=NULL){
		p=ra;
		ra=ra->next;
		p->next=A->next;
		A->next=p;
	}
	while(rb!=NULL){
		p=rb;
		ra=rb->next;
		p->next=A->next;
		A->next=p;
	}
	return A;
}
