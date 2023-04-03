viod Del_ALL(DLinkList &h){
	DNode *p, *min, *q;
	while(h->next!=h){
		p=h,min=h;
		while(p->next!=h){
			if(p->next->data<min->next->data){
				min = p;
			}
			p=p->next;
		}
		q=min->next;
		min->next=min->next->next;
		prinf(q);
		free(q);
	}
	free(h);
}
