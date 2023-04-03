void Del_x(LinkList &L,ElementType x){
	if(L==NULL){
		return;
	}else{
		if(L->data==x){
			p=L;
			L=L->next;
			free(p);
			Del_x(L,x)
		} else{
			Del_x(L->next,x);
		}
	}
} 
