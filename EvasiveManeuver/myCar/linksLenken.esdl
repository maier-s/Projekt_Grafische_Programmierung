package myCar;
import resources.rad;

class linksLenken {
	@get
	@set
	rad steering;
	@get
	boolean full;

	@generated("blockdiagram", "21b1ee3b")
	public void calc() {
		if ((steering + 0.001396[rad]) < 0.2094[rad]) {
			steering = (steering + 0.001396[rad]); // Main/calc 1/if-then 1
		} // Main/calc 1
		full = (!((steering + 0.001396[rad]) < 0.2094[rad])); // Main/calc 2
	}
}