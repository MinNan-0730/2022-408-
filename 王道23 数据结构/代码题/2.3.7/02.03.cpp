//ตÝน้
R_print(LinkList L){
	if (L->next!=NULL){
		R_print(L->next);
	}
	if(L!=NULL) print(L->data);
} 

R_IgnoreHead(LinkList L){
	if(L->next!=NULL) R_print(L->next);
}
