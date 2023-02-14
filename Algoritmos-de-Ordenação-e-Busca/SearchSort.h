//Biblioteca de algoritmos de ordenação e busca sequencial e binária.

void troca(int *a,int *b){

    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    
}

void bubble_sort(int *v,int n){
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

void insertion_sort(int *v, int n){

    int i,j;
    int aux;

    for(i = 1; i < n; ++i){
        for(j = i; j > 0; --j){
            if(v[j-1]>v[j]){

                 troca(&v[j],&v[j-1]);
            }
        }
    }


}

int busca_sequencial(int *dados,int n, int x){
    int i;
    for(i = 0; i < n; i++)
        if(dados[i]==x)
            return i;
            
    return -1;
}

int busca_binaria(int *dados, int l, int r, int x){

int m = (l + r) / 2; //l é a posição 0

if(l>r) return -1; /*caso base*/

if(dados[m]==x) return m; /*caso base*/

else if(x > dados[m])
    return busca_binaria(dados,m+1,r,x);
else 
    return busca_binaria(dados,l,m-1,x);    
}
