void DisCreate(LinkList &A){
	//头插法
	LinkList B = (LinkList)malloc(sizeof(LNode));
	B->next=0;
	LNode *p = A->next;
	LNode *q;
	A->next = NULL;
	LinkList *ra =A; 
	LinkList *rb =B;
	int i=1;
	while(p!=NULL){
		if(i%2==0){
			//给B 
			 q = p->next;
			 p->next = rb->next;
			 ra->next = p;
			 p = q;
		} else{
			//给A
			 ra->next=p;
			 ra=p;
			 p = p->next;
		} 
	} 
}
