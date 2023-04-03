typedef int DataType;
void reverse(DataType A[],int left ,int right, int arraySize){
	if(left<0||right>=arraySize)
	return;
	else{
		int mid = (left + right)/2;
		for(int i = 0 ;  i <= mid - left ; i++){
			int temp = A[left + i];
			A[left + i] = A[right - i];
			A[right - i] = temp;
		}
		return;
	}
}


void change(DataType A[],int m,int n, int arraySize){
	reverse(A,0,m+n-1,m+n);
	reverse(A,0,n-1,n);
	reverse(A,n,m+n-1,m);
}
