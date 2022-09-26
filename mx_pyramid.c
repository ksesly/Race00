#include <unistd.h>

void mx_printchar(char c);
      
void mx_behind_side(int n, int i) {
	if (i < n/2) {
		{
			for (int in3 = 0; in3 < i ; ++in3) {
				mx_printchar(' ');
			}
		}
		if (i != 0) {
			mx_printchar('\\');
		} 
	} 
	if ( i >= n/2) {
		for (int j = 1; j < n - i ; j++) {
			mx_printchar(' ');	
		}
		mx_printchar('|');
	}
}
 
void mx_mainpart(int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			mx_printchar(' ');	
		}
		mx_printchar('/');
		for (int in = 0; in < i; in++) {
			mx_printchar(' ');
		} 
		{
			for (int in2 = 0; in2 < i - 1; ++in2) {
				mx_printchar(' ');
			}
		} 
		mx_printchar('\\');
		mx_behind_side(n, i);
		mx_printchar('\n');
	} 
}

void mx_bottom_line(int n) {
	mx_printchar('/');
	for (int j = 0; j < n * 2 - 3; j++) {
		mx_printchar('_');
	}
	mx_printchar('\\');
	mx_printchar('|');
	mx_printchar('\n');
}

void mx_pyramid(int n) {
	if (n < 2 || n % 2 != 0 ) {
	    return;
    	}
	mx_mainpart(n);
	mx_bottom_line(n);
}

