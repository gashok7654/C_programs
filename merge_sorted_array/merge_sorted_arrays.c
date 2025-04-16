void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    if (nums1Size != (m + n)) {
        printf("Wrong data\n");
        return;
    }
    if (nums2Size != n) {
        printf("Error size\n");
    }

    int a, b, i;
    a = m - 1;
    b = n - 1;
    i = nums1Size - 1;

    while (a >= 0 && b >= 0) {
        if (nums1[a] <= nums2[b]) {
            nums1[i] = nums2[b];
            b--;
        } else {
            nums1[i] = nums1[a];
            a--;
        }
        i--;
    }

    while (b >= 0) {
        nums1[i] = nums2[b];
        b--;
        i--;
    }
}
