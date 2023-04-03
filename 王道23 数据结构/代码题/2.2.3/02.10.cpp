void reverse(int R[],int from,int to){
	int i,temp;
	for(i=0;i<(to-from + 1)/2;i++){
		temp = R[from + i];
		R[from + i] = R[to - i];
		R[to - i] = temp;
	}
}

void change(int R[],int n,int arraySize){
	reverse(R,0,n-1,arraySize);
	reverse(R,0,n-p-1,arraySize);
	reverse(R,n-p,n-1,arraySize);
} 
