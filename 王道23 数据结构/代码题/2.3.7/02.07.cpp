LinkList Delet_between(LinkList &L,ElementType min,ElementType max){
	LNode *pre=L,*p=L->next;
	while(p!=NULL){
		if(p->data>min&&p->data<max){
			pre->next = p->next;
			free(p);
			p = pre->next;
		}
		esle{
			pre=p;
			p = p->next;
		}
	}
	
}
