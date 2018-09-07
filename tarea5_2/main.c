//Fermín Narváez A01411229
//Profe necesito asesorias 

#include <stdio.h>
#include <math.h>
int main() {
    double pi = 0;
    int n;
    printf("Cuántos decimales quieres que aparezca? (ESCALA MAXIMA 49 DECIMALES)");
    scanf("%d",&n);
    
    while (n > 49 || n <= 0)
    {
    printf("Error! number should in range of (1 to 49).\n");
    printf("Enter the number again: ");
    scanf("%d", &n);
    }
     for (int i=0; i<n; i++)
    {
        pi+= pow(16,-i) * (4.0 / (8.0*i+1) - 2.0/(8*i+4) - 1/(8.0*i+5) - 1.0/(8*i+6));

    }

    printf("Pi is: ");
    printf("%.*lf", n, pi);
    return 0;
}
