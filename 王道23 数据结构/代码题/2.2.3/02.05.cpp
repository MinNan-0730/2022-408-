bool del(SqList &L,ElementType s,ElementType t){
	if(L.lenght == 0){
		return false;
	} esle if(s>=t){
		return false;
	} else {
		int k = 0;
		for(int  i = 0; i < L.length ; i ++){
			if(L[i]<s||L[i]<t){
				L[k] = L[i];
				k++;
			}
		}
		L.length = k;
		return true;
	}
}
