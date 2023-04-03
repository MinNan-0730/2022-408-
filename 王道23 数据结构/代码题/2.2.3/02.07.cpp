bool merge(SqList &A,SqList &B,SqList &C){
	if(A.length + B.length > C.length){
		return false;
	} else {
		int len = 0;
		int i = 0, j = 0 ;
		for(; i<A.length && j<B.length ; ){
			if(A[i]<=B[j]){
				C[len] = A[i];
				i++;
				len++;
			}else {
				C[len] = B[j];
				j++;
				len++;
			}
		}
		if(i<A.length){
			for(;i<A.length;){
				C[len] = A[i];
				i++;
				len++;
			}
		} else if(i<B.length){
			for(;j<B.length;){
				C[len] = B[i];
				j++;
				len++;
			}			
		}
		C.length = len;
	}
}
