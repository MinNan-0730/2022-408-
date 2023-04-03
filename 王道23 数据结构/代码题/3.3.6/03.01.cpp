bool BracketCheck(char *str) {
	Stack s;
	char e;
	int i=0;
	while(str[i]!='\0'){
		switch(str[i]){
			case '(': Push(s,'(');break;
			case '{': Push(s,'{');break;
			case '[': Push(s,'[');break;
			case ')': Pop(s,e);
				if(e!='(') return false;
			break;
			case '}': Pop(s,e);
				if(e!='{') return false;
			break;
			case ']': Pop(s,e);
				if(e!='[') return false;
			break;
			default: return false;
		}
		i++;
	}
	if(!IsEmpty(s)){
		//×óÀ¨ºÅ²»Æ¥Åä 
		return false;
	} else{
		return true;
	}
}
