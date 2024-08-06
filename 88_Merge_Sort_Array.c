int temp[200];
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int tp = 0;
    int n1p = 0;
    int n2p = 0;
    
    while (n1p < m && n2p < n) {
        if (nums1[n1p] < nums2[n2p]) {
            temp[tp++] = nums1[n1p++];
        } else {
            temp[tp++] = nums2[n2p++];
        }
    }
    
    while (n1p < m) {
        temp[tp++] = nums1[n1p++];
    }
    
    while (n2p < n) {
        temp[tp++] = nums2[n2p++];
    }
    
    for (int i = 0; i < m + n; i++) {
        nums1[i] = temp[i];
    }
}