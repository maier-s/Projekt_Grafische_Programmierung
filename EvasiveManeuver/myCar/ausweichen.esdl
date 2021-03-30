package myCar;
import resources.rad;
import resources.m;

class ausweichen {
	@get
	rad steering = 0.0[rad];

	@generated("blockdiagram", "4a201f28")
	public void steering_out(boolean in emerg_msg, m in y) {
		if ((emerg_msg && (y < 0.35[m])) && ((steering + 0.001396[rad]) < 0.2094[rad])) {
			steering = (steering + 0.001396[rad]); // Main/steering_out 1/if-then 1
		} // Main/steering_out 1
		if ((emerg_msg && between(y, 0.35[m], 4.0[m])) && ((steering + 0.001396[rad]) > -0.2094[rad])) {
			steering = (steering - 0.001396[rad]); // Main/steering_out 2/if-then 1
		} // Main/steering_out 2
		if ((emerg_msg && (y > 4.0[m])) && ((steering + 0.001396[rad]) < 0.0[rad])) {
			steering = (steering + 0.001396[rad]); // Main/steering_out 3/if-then 1
		} // Main/steering_out 3
	}
}