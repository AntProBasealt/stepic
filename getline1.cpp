#include <iostream>
#include <string>
using namespace std;

char *getline1()
{
int index = 0;
char input;
char* pold = new char[1];
while (cin.get(input) && (input!='\n')) {
index++;
pold[index-1] = input;
char * pnew=new char[index+1];
for (int i=0;i<index;i++) pnew[i]=pold[i];
delete [] pnew;
pold = pnew;
}
pold[index] = '\0';
return pold;
}
 int main ()
 {
//     char *a = {"123qwe"};
     getline1();

 }
