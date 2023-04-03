void merge(DLinkList &h1,DLinkList &h2){
	//Ñ­»·Ë«Á´±í 
	DNode *p = h1->next;
	h1->next = h2->next;
	h2->next->prior = h1;
	h2->prior->next = p;
	p->prior = h2->prior;
}

void merge(DLinkList &h1, DLinklist &h2){
	DNode *p=h1->next;
	DNode *q=h2->next;
	while(p->next!=h1){
		p=p->next;
	}
	while(q->next!=h2){
		q=q->next;
	}
	q->next=h2;
	p->next=h1;
}
