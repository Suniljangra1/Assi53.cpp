/*
int a = 0;    -> constant
for (i = 0; i < N; i++)  -> (n+1)
{
for (j = N; j > i; j--) -> (n+1)*(n+1)
{
a = a + i + j; 
   }
}
 time complexity is -> O(n^2)
*/