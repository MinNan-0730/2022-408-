void DisCreate(LinkList &A){
	//ͷ�巨
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
			//��B 
			 q = p->next;
			 p->next = rb->next;
			 ra->next = p;
			 p = q;
		} else{
			//��A
			 ra->next=p;
			 ra=p;
			 p = p->next;
		} 
	} 
}
