//Fermín Narváez A01411229
int main() {
    int counter =1;
    int i;
    int total=1;
    printf("Dime el numerito para el factorial: ");
    scanf("%d", &i);
    
    if(i<0){
    printf("Pon un numerito más grande, menores de 0 no se pueden. Reinicia el programa");
    }
    else {
        while (counter <= i) {
            total = total * counter;
            counter++;
        }
        printf("La respuesta %d es: %d", i, total);
    }
    return 0;
}
