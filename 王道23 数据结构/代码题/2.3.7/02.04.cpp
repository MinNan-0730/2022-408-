LinkList Dlet_min(LinkList &L){
	if(L->next==NULL) return NULL;
	LinkList *p = L->next,*pre = L;
	LinkList *minp = p,*minpre = pre;
	while(p != NULL){
		if(p->data<minp->data){
			minpre=pre
			minp=p;
		}
		pre = p;
		p = p->next;
	}
	minpre->next = minp->next;
	free(p);
	return L
}
