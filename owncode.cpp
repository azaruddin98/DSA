#include <iostream>
using namespace std;
int main() {
    int a[] = {20,10,90,80,70,60};
    int elements = sizeof(a)/sizeof(a[0]);
    int arraysize = elements;
    cout<<elements<<endl;
    int j=0;
    for(int i=0 ; i<elements-1;)
    {
        for(j=i;j<elements-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        elements--;
    }
    for(j = 0; j<arraysize;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}
