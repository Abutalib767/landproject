#include<iostream>

 /*
 Числа фибоначи
 Мы хотим получить п-ный символ фибоначи
 На входе программы число n
 Должна вывести числою
  */

int fibbonaci(int n ) {
    if (n == 1 || n == 2) {
        return 2;
    }
    for  (int i = 1; i <= n; i++) {
        std::cout << "Number " << i << ": " << fibbonaci(i) << std::endl;
    }
    long long unsigned result _1 = 1
    long long unsigned result _2 = 1
    long long unsigned result _3 = 0

    for (int i = 3; i <= n; i++) {
        result 

        result_3 = result_1 + result_2;
        result_1 = result_2;
        result_2 = result_3;
    }
    return fibbonaci(n-1) + fibbonaci(n-2)
}
int main(int argc, char* argv[]){
    if (argc !=2) {
        std::cout<<"Incorrect usage"<<std::endl;
        return 1;
    }

std::cout<< argv[1]<< std::endl;

    int n =atoi(argv[1]);

    if (n < 1) {
  std::cout << "Use a number > 0" <<std::endl;
  return 2
    }

std::cout<< n*2 << std::endl;

    std::cout<< "hello world"<<std::endl;
    return 0;
}