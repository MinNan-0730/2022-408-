bool Del_s_t(SqList &L,ElmentType s,ElementType t){
	int i,j;
	if(s>=t || L.length=0){
		return false;
	}
	for(i=0;L[i]<=s&&i<=L.length;i++);
	if(i>=L.length)
		return false;
	for(j=i;L.[j]<=t&&j<=L.length;j++);
	for(;j<L,length;i++,j++){
		L.data[i] = L.data[j]; 
	}
	L.length = i;
	return true;
}
