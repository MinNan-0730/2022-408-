LinkList Same_Delete(LinkList &L){
	LNode *p = L->next;
	LNode *q, *r;
	q = p->next;
	while(q!=NULL){
		while(p->data==q->data&&q!=NULL){
			r = q;
			q = q->next;
			free(r)
		}
		p->next = q;
		p = p->next;
		q = q->next;
	}
	return L;
} 
