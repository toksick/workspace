/*
 * selection-sort.c
 *
 *  Created on: 15.05.2015
 *      Author: Alex
 */
#include <stdio.h>
#include <strings.h>

int main(int argc, char **argv) {

	int array[5] = {1,4,10,7,9};
	int new;
	int j;
	int var;

	for (j = 0; j < 4; ++j) {

		int key = array[j];
		new = j;
		int i;
		for (i = j+1; i <= 4; i++) {
			if (array[i] <= key) {
				key = array[i];
				new = i;
			}

		}
		array[new] = array[j];
		array[j] = key;

	}
	for (var = 0; var < 5; ++var) {
		printf("%d\n",array[var]);
	}
	return(0);
}







