package myCar;
import resources.m;

class Obstacles {
	@generated("blockdiagram", "2e55a54f")
	public m distance(m in x) {
		if (x < 200.0[m]) {
			return(200.0[m] - x); // Main/distance 1/if-then 1
		} // Main/distance 1
		if ((!(x < 200.0[m])) && (x < 450.0[m])) {
			return(450.0[m] - x); // Main/distance 2/if-then 1
		} // Main/distance 2
		if ((!(x < 450.0[m])) && (x < 700.0[m])) {
			return(700.0[m] - x); // Main/distance 3/if-then 1
		} // Main/distance 3
		if ((!(x < 700.0[m])) && (x < 950.0[m])) {
			return(950.0[m] - x); // Main/distance 4/if-then 1
		} else {
			return 1000.0[m]; // Main/distance 4/if-else 1
		} // Main/distance 4
	}
}