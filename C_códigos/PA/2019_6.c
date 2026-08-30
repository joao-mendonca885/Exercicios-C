int compara_strings(char frase1[], char frase2[]){
    int i, j;
    for (i=0; frase1[i] != '\0'; i++);
    for (j=0; frase2[j] != '\0'; j++);
    if (i != j)return 1;
    for (i=0; i<j; i++){
        if(frase1[i] != frase2[i]) return 1;
    }
    return 0;
}