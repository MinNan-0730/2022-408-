void del__same(SqList &L){
	int k = 1;
	for(int i = 1 ; i < L.length ; i ++ ){
		if(L[i] == L[i-1]){
			L[k] = L[i];
			k++;			
		}
	}
	L.length = k;
}

