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
	if(L[mid] == x&&mid != right){  //ע�⣺��Ҫ�ж��ǲ������һ��Ԫ�أ��������һ��Ԫ�أ���û�к�� 
		ElemenType temp = L[mid];
		L[mid] = L[mid + 1];
		L[mid + 1] = temp;
	} else {
		if(L[mid] > x){
			//���뵽ǰ�� 
			for(int i = L.length; i > mid ; i--){
				L[i] = L[i-1];
			}
			L[mid] = x;
		} else{
			//���뵽���� 
			for(int i = L.length; i > mid + 1 ; i++){
				L[i] = L[i-1];
			}
			L[mid + 1]
		}
	}
}
