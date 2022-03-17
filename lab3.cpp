#include <iostream>
using namespace std;

int main()
{
 char a[24] = "How cruel is this World";
 
 for (int i=23; i>=0; i--)
 {
  cout<<a[i];
 } 
 cout<<endl;
 return 0;
}


"mov %[n_a], %%rax        \n\t"
   "start:                   \n\t"
    "push (%%rax)            \n\t"
    "add $8, %%rax           \n\t"
    "cmp %[k_a], %%rax       \n\t"
    "jne start               \n\t"
    //"add $-72, %%rax           \n\t"
    "mov %[n_a], %%eax       \n\t"
   "loop:                    \n\t"
    "pop (%%rax)             \n\t"
    "add $8, %%rax           \n\t"
    "cmp %[k_a], %%rax       \n\t"
    "jne loop                \n\t"
   "end_asm:                 \n\t"
    :
    : [n_a]"m"(n_a),
      [k_a]"m"(k_a)
    : "%rax"
