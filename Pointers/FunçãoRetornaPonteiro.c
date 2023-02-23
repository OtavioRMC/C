int * twoSum(int* vetor,int tamanhoVetor, int alvo, int* returnSize){
    
    int i,j;
    // Definindo o vetor de retorno
    int *vetor_return = calloc(2*sizeof(int));

    for(i = 0; i < tamanhoVetor; i++){

        int chave = alvo - vetor[i];

        for(j = i + 1; j < tamanhoVetor; j++){
            if (vetor[j] == chave)
            {
                vetor_return[0] = i;
                vetor_return[1] = j;
            }
                
        }
    }
    *returnSize = 2;
    return vetor_return;
}