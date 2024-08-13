int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);  // For descending order
}
int hIndex(int* citations, int citationsSize) {
    qsort(citations, citationsSize, sizeof(int), compare);
    int result = 0;
    for(int i = 0 ; i < citationsSize ; i++){
        if(citations[i] < i+1){
            result = i;
            break;
        }
        else{
            result = i+1;
        }
    }
    return result;
}
