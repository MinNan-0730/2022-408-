void function(SqList &L){
	int swap; //ElementType 
	//不能用int 要用ElementType 因为不知道顺序表的元素是啥类型 
	for(int i = 0,j = L.lenght - 1;j > i ; i ++, j --){
		swap = L[i];
		L[i] = L[j];
		L[j] = swap;
	}
	return 0;
} 

