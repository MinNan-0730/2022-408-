#define MaxNum 99999
void Min_Delete(LinkList &L){
	if(L->next==NULL){
		free(L);
	}
	LNode *r = L,*p,
	*q;
	int min = r->data;
	while(r->next!=NULL){
		if(r->next->data<min){
			p=r;
			q=r->next;
			min = r->next->data;		
		}
	}
	printf(min);
	p->next = q->next;
	free(q);
	Output_Data(L)
}

void Min_Detele(LinkList &L){
	while(L->next!=NULL){
		LNode *pre = L;
		LNode *p = pre->next;
		while(p->next != NULL){
			if(p->next->data<pre->next->data){
				pre = p;
			}
		}
		prinf(pre->next->data);
		p = pre->next;
		pre->next = p->next;
		free(p);
	}
	free(L)
}
