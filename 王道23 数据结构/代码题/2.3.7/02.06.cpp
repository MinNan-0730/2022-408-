ort(LinkList &L){
	LNode *s = L->next,pre,p,q;
	L->next = NULL;
	while(s!=NULL){
		pre = L,p=L->next;
		while(p->next!=NULL&&p->data<s->data){
			pre = p;
			p = p->next;
		}
		q=s;
		q->next = p->next;
		pre->next = q;
		s = s->next;
	}
}


//±ê´ğ
void Sort(LinkList &L){
	LNode *p=L->next,*pre;
	LNode *r = p->next;
	p->next=NULL;
	p=r;
	while(p!=NULL){
		r = p->next;
		pre = L;
		while(pre->next!=NULL&&pre->next->data<p->data){
			pre = pre->next;
		}
		p->next = pre->next;
		pre->next = p;
		p = r;
	}
}
