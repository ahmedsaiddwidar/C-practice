#include<iostream>

int main()
{
int x = 5;
int &ref = x; // cant be initialized to null, it reference for an existing var, so it is basically same as ptrs but doesnt take size
int &r2 = ref;

printf("the address of x = %x\n", &x);
printf("the address of ref = %x\n", &ref);
printf("the address of r2 = %x\n", &r2);

    return 0;
}