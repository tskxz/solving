#include <iostream>

using namespace std;

int main(){
	char hello[10] = "Hello";
	for(int tam = 0; hello[tam];tam++);
		for(int i = tam-1; i>=0; i--){
			cout << hello[i];
		}
}