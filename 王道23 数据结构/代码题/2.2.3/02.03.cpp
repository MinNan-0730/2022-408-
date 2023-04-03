void del_x(SqList &L,ElementType x){
	for(int i = 0 ; i < L.lenght ; i ++){
		if(L[i] == x){
			for(int j = i ; j < L.lenght ; j ++){
				L[j] = L[j + 1];
			}
			L.lenght = L.lenght - 1;
		}
	}
}

//要求时间复杂度为O(n)

//方法1 
 
void del_x(SqList &L, ElementType x){
	int len = 0;
//	int num = 0;
	for(int i = 0; i < L.Length ; i ++){
		if(L[i]!=x){
			L[len] = L[i];
			len++;
		}
//		else {
//			num++;
//		}
	}
	L.lenght = len;
	
} 

//方法2

void del_x(SqList &L, ElementType x){
	int num = 0;
	for(int i = 0 ; i < L.lenght ; L ++){
		if(L[i] == x){
			num++;
		}else {
			L[i-num] = L[i];
		}
	}
	L.length = L.lenght - num;
} 


