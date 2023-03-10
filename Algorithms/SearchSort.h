
void changeVarValue(int *varOne,int *varTwo){

    int auxiliary;
    auxiliary = *varOne;
    *varOne = *varTwo;
    *varTwo = auxiliary;
    
}

void bubbleSort(int *v,int n){
    int i,j;
    int aux;
    for(i = 0; i < n - 1; ++i)
    {
        for(j = n - 1; j > i; --j)
        {
            if(v[j-1] > v[j])
            {
               aux = v[j];
               v[j] = v[j-1];
               v[j-1] = aux;
            }

        }
    }
}    

void insertionSort(int *v, int n){

    int i,j;
    int aux;

    for(i = 1; i < n; ++i){
        for(j = i; j > 0; --j){
            if(v[j-1]>v[j]){

                 changeVarValue(&v[j],&v[j-1]);
            }
        }
    }


}

int sequencialSearch(int *data,int n, int x){
    int i;
    for(i = 0; i < n; i++)
        if(data[i]==x)
            return i;
            
    return -1;
}

int binarySearch(int *dados, int l, int r, int x){

int m = (l + r) / 2; //l é a posição 0

if(l>r) return -1; /*caso base*/

if(dados[m]==x) return m; /*caso base*/

else if(x > dados[m])
    return binarySearch(dados,m+1,r,x);
else 
    return binarySearch(dados,l,m-1,x);    
}
