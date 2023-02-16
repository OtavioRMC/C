int main(){
  int x;
  printf("Digite um numero: ");
  scanf(" %d", &x);

  printf("Fatorial de %d: %d",x,calculaFatorial(x));
  return 0;
}
int calculaFatorial(int num){
  if(num == 0) return 1;
  else return num * calculaFatorial(num - 1);
}