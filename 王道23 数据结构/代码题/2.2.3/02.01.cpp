bool del_min(SqList &L, ElementType &value){
	if(L.lenght == 0){
		return false;
	} else {
		int min = L[0];
		int loc = 0;
		for(int i = 0 ; i < L.lenght ; i ++){
			if(L[i]<=min){
				min = L[i];
				loc = i;
			}
			value = min;
			L[loc] = L[L.lenght - 1];
			L.lenght = L.lenght - 1;
		}
		return true;
	}
} 
