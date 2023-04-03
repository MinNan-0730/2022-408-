bool SubLine(LinkList &A,LinkList &B){
	LNode *p = A,*q = B;
	int flag = 0;
	while(p->data!=q->data&&p!=NULL){
		p=p->next;
	}
	if(p==NULL)
	return false;
	else{
		while(p&&q){
			if(p->data=q->data){
				p=p->next;
				q=q->next;
			}
			else{
				p=p->next;
				q=B;
			}
		}
		if(q==NULL)
		return true;
		else return false;
	}
}
