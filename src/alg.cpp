// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
	int nod = 0;
	if (a > b) {
		nod = b;
		while (!(a % b == 0)) {
			a = b;
			nod = a % b;
		}
	}
	else {
		nod = a;
		while (!(b % a == 0)) {
			nod = b % a;
			b = a;
		}
	}
	return nod;
}
