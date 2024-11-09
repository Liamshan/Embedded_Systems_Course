
int main(void) {
    int volatile counter = 0;
		while (counter < 21) {
			++counter;
			if((counter & 1) != 0) {
				/* do something when counter is odd */
			}
		}

    return 0;
}
