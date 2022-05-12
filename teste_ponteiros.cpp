#include <iostream>
#include <cstdlib>

using namespace std;

int main(void){
	int a = 5;
	int c = 9;
	int *p = &a;
	cout <<"conteudo " << a << endl;
	cout <<"endereco " << p << endl << endl;
	
	cout <<"mesmo conteudo " << *p << endl;
	cout <<"mesmo endereco " << &a << endl << endl;
	
	cout <<"conteudo modificado usando o ponteiro: " << endl;
	*p = 0;
	cout <<"novo conteudo " << a << endl << endl;
	
	cout <<"mudando o endereco armazenado em p" << endl;
	p = &c;
	cout <<"conteudo do novo endereco " << *p;
	return 0;
	
}
