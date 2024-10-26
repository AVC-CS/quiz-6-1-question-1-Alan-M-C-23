#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void getTwoValues(int &begin, int &end);
int getNextPrime(int begin);
int getPrevPrime(int end);


void getTwoValues(int &begin, int &end){
    do
    {
    cout << "Enter two Values: ";
    cin >> begin >> end;
    } while (begin > end);
    
}

int getNextPrime(int begin){
int i,j;
int flag;
	for (i = begin; i <= 3000; i++){
		flag = 1;
		for (j = 2; j <= (i/2); ++j){
                        
			if ((i % j == 0)){
			flag = 0;
			break;
			}
                        
			}
		if (flag == 1){
		return i;
        break;
        }
    }
    return 0;
}

int getPrevPrime(int end ){
int i,j;
int flag;
	for (i = end; i >= 5; i--){
		flag = 1;
		for (j = 2; j <= (i/2); ++j){
                        
			if ((i % j == 0)){
			flag = 0;
			break;
			}
                        
			}
		if (flag == 1){
		return i;
        break;
        }
    }
return 0;
}

