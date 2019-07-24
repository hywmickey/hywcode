typedef int ElemType;
#define INITSIZE 100
typedef struct {
	ElemType * data;
	int length;
	int listsize;
} sqlist;

void initlist(sqlist *L) {
	L->data = (ElemType *) malloc(sizeof(ElemType) * INITSIZE);
	L->length = 0;
	L->listsize = INITSIZE;
}

int getlen(sqlist L) {
	return L.length;
}

int getelem(sqlist L, int i, ElemType * e) {
	if(i < 1 || i > L.length){
		return 0;
	}
	* e = L.data[i-1];
	return 1;
}

int locate(sqlist L, ElemType x) {
	int i = 0;
	while(i < L.length) {
		if(L.data[i] == x){
			return i+1;
		} else {
			i++;
		}
		return 0;
	}
}

int insert(sqlist *L, int i, ElemType x) {
	int j;
	if(i < 1 || i > L->length + 1) {
		return 0;
	}
	if(L->length == L->listsize) {
		L->data = (ElemType *) realloc(L->data,(L->listsize + 1 ) * sizeof(ElemType));
		L->listsize++;
	}
	for(j = L->length; j >= i; j--) {
		L->data[j+1] = L->data[j];
	}
	L->data[i-1] = x;
	L->length++;
	return 1;
}

int delete(sqlist *L, int i, ElemType *c) {
	int j;
	if(i < 1 || i > L->length) {
		return 0;
	}
	*e = L->data[i-1];
	for(j = i; j < L->length; j++){
		L->data[j-1] = L->data[j];
	}
	L->length--;
	return 1;
}

void list(sqlist L) {
	int i;
	for(i = 0; i< L.length; i++) {
		printf("%d", L.data[i]);
		printf("\n");
	}
}

void main(){
	
}