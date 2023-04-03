LinkList Search(LinkList L1,LinkList L2){
	int i=j=0;
	LNode *p=L1->next;
	LNode *q=L2->next;
	while(p!=NULL){
		p=p->next;
		i++;
	}
	while(q!=NULL){
		q=q->next;
		j++;
	}
	p=L1->next;
	q=L2->next;
	if(i>=j){
		for(int k=i-j;k>0;k--){
			p=p->next;
		}
	} else {
		for(int k=j-i;k>0;k--){
			q=q->next;
		}
	}
	while(p!=q&&p!=NULL){
		p=p->next;
		q=q->next; 
	}
	return p;
}
