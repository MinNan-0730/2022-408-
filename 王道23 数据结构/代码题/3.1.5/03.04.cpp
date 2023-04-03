bool dc(LinkList &L){
	if(L==NULL)
	return false;
	int i = 1;
	LNode *p = L->next;
	while(p){
		p=p->next;
		i++;
	}
	int n = i;
	char D[n/2];
	int top = 0;
	i = 1;
	p = L->next;
	while(i<=n/2){
		D[top] = p->data;
		p=p->next;
		top++;
		i++;
	}
	if(n%2!=0){
		p=p->next;
	}
	top--;
	while(p!=NULL){
		if(D[top]!=p->data){
			return false;
		}
		top--;
		p=p->next;
	}
	return true;
} 
