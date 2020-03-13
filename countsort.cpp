#include<iostream>
#include<string.h>
#define RANGE 255

using namespace std;

string countsort(string str){

	//char arr[RANGE];

	string out;

	int count[RANGE+1],i;

	memset(count,0,sizeof(count));

	for(i=0;str[i];++i)
	{
		++count[str[i]];
	} 


	for (i = 1; i <= RANGE; ++i)  
        count[i] += count[i-1];  

    for (i = 0; str[i]; ++i)  
    {  
        out[count[str[i]]-1] = str[i];  
        --count[str[i]];  
    }  

    for (i = 0; str[i]; ++i)  
        str[i] = out[i];  

return str;
	//cout<< "Sorted character array is " << str;  


}


int main(){

	//char arr[255];

	string str = "helloworld";
	//cout << str;
	string n =countsort(str);

	 cout<< "Sorted character array is " << n;  

	 

}