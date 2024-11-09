int main() {
	*((unsigned int *)0x400FE608U) = 0x20U;
	*((unsigned int *)0x40025400U) = 0x0EU;
	*((unsigned int *)0x4002551CU) = 0x0EU;
	
	while (1) {
	*((unsigned int *)0x40025300U) = 0x02U;
		int counter = 0;
		while (counter < 1000000) {
			++counter;
		}		
		
	*((unsigned int *)0x40025300U) = 0x00U;
		counter = 0;
		while (counter < 1000000) {
			++counter;
		}
	}
	return 0;
}
