import java.lang.Math; 

class ProjectEulerSeven {
	public static boolean isPrime(int given) {
		/* return true if the given integer is prime,
		return false otherwise. */

		if(given == 1) {
			return false;
		}

		for(int i = 2; i < (int)Math.sqrt(given)+1; i++) {
			if(given%i == 0) {
				return false;
			}
		}

		return true;
	}

	public static void main(String[] args) {
		int prime_counter = 0, i = 2;
		for(; true; i++) {
			if(isPrime(i)) {
				prime_counter += 1;
				if(prime_counter == 10001) {
					break;
				}
			}
		}
		System.out.println(i);
	}
}