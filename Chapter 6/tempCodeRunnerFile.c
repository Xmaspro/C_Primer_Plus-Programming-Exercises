void show_array(double** array, int a){
    for (int i = 0; i < a; i++){
        printf("First array is: %lf", *(array +i));
    }
    printf("\n");
    for (int i = 0; i < a; i++){
    printf("Second array is: %lf", *(*(array+i) + 1));
}