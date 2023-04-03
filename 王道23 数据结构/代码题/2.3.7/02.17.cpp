bool Symmetry(DLinkList &A){
	DNode *p = A->prior,*n = A->next;
	int flag = 0;
	while(p!=n){
		if(p->data!=n->data){
			flag = 1;
			break;
		}
		else{
			p=p->prior;
			n=n->next;
		}
	} 
	if(flag) return false;
	else return true;
}
