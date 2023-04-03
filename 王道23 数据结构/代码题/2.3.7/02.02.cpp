void Del_x(LinkList &L,DataType x){
	if(L->next == NULL){
		return ;
	}else {
		LNode *p = L -> next;, *r = L, *q;
		while(p != NULL){
			if(p != x){
				if(p->data!=x){
					r->next = p;
					r = p;
					p = p -> next; 
				}
			}else {
				q = p;
				p = p -> next;
				free(q);
			}
		}
	}
} 
