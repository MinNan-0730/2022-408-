void insert(SqList &L,ElementType x){
	int left = 0;
	int right = L.length - 1;
	int mid = (left+right)/2;
	while(left != right){
		if(L[mid] == x){
			break;
		} else if(L[mid] < x){
			left = mid + 1;
			mid = (left + right)/2;
		} else {
			right = mid - 1;
			mid = (left + right)/2;
		}
	}
	if(L[mid] == x&&mid != right){  //注意：需要判断是不是最后一个元素，若是最后一个元素，则没有后继 
		ElemenType temp = L[mid];
		L[mid] = L[mid + 1];
		L[mid + 1] = temp;
	} else {
		if(L[mid] > x){
			//插入到前面 
			for(int i = L.length; i > mid ; i--){
				L[i] = L[i-1];
			}
			L[mid] = x;
		} else{
			//插入到后面 
			for(int i = L.length; i > mid + 1 ; i++){
				L[i] = L[i-1];
			}
			L[mid + 1]
		}
	}
}
