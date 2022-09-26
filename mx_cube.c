#include <unistd.h>

void mx_printchar(char c); 

void mx_horizontal_line(int n) {
	mx_printchar('+');
	for (int i = 0; i < (2 * n); i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');
}

void mx_horizontal_line2(int n) {
	mx_printchar('+');
	for (int i = 0; i < 2 * n; i++) {
        mx_printchar('-');
	}
	mx_printchar('+');
    	for (int o = 1; o < n / 2 + 1; o++) { 
        	mx_printchar(' ');
    	}
    	mx_printchar('|');
    	mx_printchar('\n');
}

void mx_upside(int n) {
    	for (int t = 0; t < n / 2 + 1; t++) {
        	mx_printchar(' ');
    	}
    	mx_horizontal_line(n);
    	for (int i = 0; i < n / 2; i++) {
        	for (int j = 0; j < n / 2 - i; ++j) {
            		mx_printchar(' ');
        	}
        	mx_printchar('/');
        	for (int c = 0; c < 2 * n; c++) {
            		mx_printchar(' ');
        	}
        	mx_printchar('/');
        
            	for (int k = 0; k < i; k++) {
                	mx_printchar(' ');
            	}
        	mx_printchar('|');
        	mx_printchar('\n');
    	}
    	mx_horizontal_line2(n);
}

int mx_checkup(int n) {
    	int number = 0;
    	if (n % 2 == 0) {
        	number = (n / 2) - 1;
    	}
    	else {
        	number = ((n - 1) / 2);
    	}
    	return number;
}

void mx_front_side(int n) {
    	int counter = 0;
    	for (int j = 0; j < n; j++) {
        	mx_printchar('|');
        	for (int c = 0; c < (2 * n); c++) {
            		mx_printchar(' ');
        	}
        	mx_printchar('|');
            	if (counter < mx_checkup(n)) {
                	for (int h = 1; h < n / 2 + 1; h++) {
                    		mx_printchar(' ');
                	}
                	mx_printchar('|');
                	counter++;
            	}	
            	else if (counter == mx_checkup(n)) {
                	for (int h = 1; h < n / 2 + 1; h++) { 
                    		mx_printchar(' ');
                	}           
                	mx_printchar('+');
                	counter++;
            	}
            	else {
                	for (int h = j; h < n - 1; h++) {
                    		mx_printchar(' ');
                	}
                	mx_printchar('/');
            	}
        	mx_printchar('\n');
    	}
    	mx_horizontal_line(n);
} 

void mx_cube(int n) {
	if (n <= 1) {
		return;	
	}
	mx_upside(n);
	mx_front_side(n);
}

