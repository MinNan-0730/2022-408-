void function(SqList &L){
	int swap; //ElementType 
	//������int Ҫ��ElementType ��Ϊ��֪��˳����Ԫ����ɶ���� 
	for(int i = 0,j = L.lenght - 1;j > i ; i ++, j --){
		swap = L[i];
		L[i] = L[j];
		L[j] = swap;
	}
	return 0;
} 

