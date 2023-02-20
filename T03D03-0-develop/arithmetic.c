#include <stdio.h>
int main(){
float a, b;
  scanf("%f %f", &a, &b);
  if((int)a==a && (int)b==b){
    int sum=(a+b);
    int dif=(a-b);
    int mult=(a*b);
  if(b!=0){
    int div=(a/b);
  printf("%d %d %d %d\n", sum, dif, mult, div);
}else{
  printf("%d %d %d %nn/a\n", sum, dif, mult);
}
}else{
  printf("n/a\n");
}
}
