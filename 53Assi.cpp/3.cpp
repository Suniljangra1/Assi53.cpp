/*
int i, j, k = 0;  ->constant
for (i = n / 2; i <= n; i++) -> n 
{
for (j = 2; j <= n; j = j * 2)  -> n * logn 
{
k = k + n / 2;
}
}

time complexity is -> O(n log n)
*/