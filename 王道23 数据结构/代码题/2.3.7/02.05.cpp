LinkList reverse(LinkList &L){
	LinkList *r = L->next;
	LinkList *p = r;
	L->next = NULL;
	while(r!=NULL){
		p->next = L->next;
		L->next = p;
		r = r->next;
		p=r;
	}
	return L;
}
