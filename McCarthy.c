/**Este programa convierte los elementos de un arreglo de numeros enteros a 91
 * si estos son menores o iguales a 102 y a[x] - 10 si el elemento en a[x] es mayor a 101.
 */

# define N 10
int array[N] = {2,190,7,102,11,233,99,919,23,103};

int McCarthy(int n){
    if (n > 100){
        return n-10;
    }else
        return McCarthy(McCarthy(n+11));
}

void F(int *a, int S){
    for(int i = 0; i<S; i++){
        if(a[i] != 91){
           a[i] = McCarthy(a[i]);
        }
    }
}

int main(){
    F(array, N);
    return 0;
}
