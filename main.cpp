/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 25 Сентябрь 2015 г., 21:24
 */

/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 25 Сентябрь 2015 г., 21:24
 */

#include <stdio.h>
#include <cmath>
using namespace std;

int *mas;
int n, i, j;
long int dif, res;

int main(int argc, char *argv[]) {
    freopen(argv[1], "r", stdin);
	
	
	
B:
	if(scanf("%i", &n) == 1) {
		res = 0;
		mas = new int[n];
		for (i = 0; i < n; i++) {
			scanf("%i", &mas[i]);
		}
		
//		printf("%i : ", n);
//		for (i = 0; i < n; i++) {
//			printf("%i ", mas[i]);
//		}
		
		for (i = 1; i < n; i++) {
			res += abs(mas[0]-mas[i]);
		}
		
		for (i = 1; i < n; i++) {
			dif = 0;
			for (j = 0; j < n; j++) {
				dif += abs(mas[i]-mas[j]);
			}
			if (dif < res) {
				res = dif;
			}
		}
		
		printf("%i\n", res);
		delete []mas;
		goto B;
	}
	
	// получить n
	// получить n-чисел в массив
	// лупануть qsort - нужно для некоторых возможных частных тестов
	// взять максимум и минимум - нулевой и последний элемент
	// определить края
	// взять центр и расчитать сумму модулей разниц чисел меньше и больше выбранного номера
	// сдвинутся на половину расстояния до края
	// обновить край
	// действовать пока чето
	// вывести результат
	// освободить динамический массив
	
//	while (getline(stream, line)) {
//		cout << line << endl;
//	}
	return 0;
}

/*
 import sys

test_cases = open(sys.argv[1], 'r')
for test in test_cases:
    arr = test.split()
    n = int(arr[0])
    sum = 0
    for i in range(n):
        sum += int(arr[i+1])
    avg = int (sum / n)
    dist = 0
    for i in range(n):
        dist += abs(avg-int(arr[i+1]))
    avgInc = avg + 1
    while True:
        sumDist = 0
        for i in range(n):
            sumDist += abs(avgInc-int(arr[i+1]))
        if dist < sumDist :
            break
        dist = sumDist
        avgInc += 1
    avgDec = avg - 1
    while True:
        sumDist = 0
        for i in range(n):
            sumDist += abs(avgDec-int(arr[i+1]))
        if dist < sumDist :
            break
        dist = sumDist  
        avgDec -= 1
    print dist

test_cases.close()
 */