//Program to check valid strings for the Regular Expression C(A + B)+
#include <iostream>
using namespace std;
// Function to find whether the given
// string is Accepted by the DFA
void DFA(string str, int N)
{
// If n <= 1, then print No
if (N <= 1) {
cout << "No";
return;
}
// To count the matched characters
int count = 0;
// Check if the first character is C
if (str[0] == 'C') {
count++;
// Traverse the rest of string
for (int i = 1; i < N; i++) {
// If character is A or B,
// increment count by 1

if (str[i] == 'A' || str[i] == 'B')
count++;
else
break;
}
}
else {
// If the first character
// is not C, print -1
cout << "No";
return;
}
// If all characters matches
if (count == N)
cout << "Yes";
else
cout << "No";
}
int main()
{
string str = "CAABBAAB";
int N = str.size();
DFA(str, N);

return 0;
}
