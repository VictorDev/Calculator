#include <iostream>
#include <cstdlib> // для функции rand()
#include <ctime> // для функции time()
using namespace std;
 
int main()
{
	srand( time(0) );//привязка к системному времени для генерации реальных случайных чисел
	int n1=2,n2=3;
    cout<<"input n1"<<endl;
    cin>>n1;
    cout<<"input n2"<<endl;
    cin>>n2;
    int a[n1];
    int b[n2];
    for(int i = 0; i<n1;i++){
    	cout<<"a["<<i<<"]";
    		cin>>a[i];
    }
    for(int i = 0; i<n2;i++){
    	cout<<"b["<<i<<"]";
    		cin>>b[i];
    }
    int lenC = n1 + n2;
    int c[lenC];
    for(int i = 0; i<n1;i++){
    		c[i] = a[i];
    }
    for(int i = n1; i<lenC;i++){
    		c[i] = b[i-n1];
    }
    cout<<endl<<"mass c = ";
    for(int i = 0; i<lenC;i++){
    		cout<<c[i]<<" ";
    }
    
    int targetIndex = rand()%(lenC-1) + 0;
    cout<<endl<<"change the value of the first element to the value of the element with the index = "<<targetIndex<<endl;
    int firstValue = c[0];
    c[0] = c[targetIndex];
    c[targetIndex] = firstValue;
    
    cout<<"mass c = ";
    for(int i = 0; i<lenC;i++){
    		cout<<c[i]<<" ";
    }
    
    return 0;
}
