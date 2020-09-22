#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits>
#include <algorithm>

#define MAX 20

// ********************************************************************
// ** Funcao que promove uma busca sequencial em um vetor de N elementos
// ********************************************************************
bool buscaSeq(std::vector<int> v, int k) {

    return false;
}

// ********************************************************************
// ********************************************************************
// ********************************************************************
int main() {

std::vector<int> v;

	std::cout << "tamanho do vetor = " << v.size() << std::endl;

    srand ( time(NULL) );

    for (unsigned int i=0; i < MAX; i++) {
        v.push_back(rand() % MAX*10);
        }

    std::cout << "conteudo de v: ";
    for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
       std::cout << ' ' << *it << std::endl;

    	
 	return 0;        
}