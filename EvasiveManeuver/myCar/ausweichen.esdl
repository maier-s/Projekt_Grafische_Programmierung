package myCar;
import resources.rad;
import resources.m;

class ausweichen {
	@get
	rad steering = 0.0[rad];

	@generated("blockdiagram", "1f49b9c4")
	public void steering_out(boolean in emerg_msg, m in y) {
		if ((emerg_msg && (y < 0.75[m])) && ((steering + 0.001396[rad]) < 0.05235[rad])) {
			steering = (steering + 0.001396[rad]); // Main/steering_out 1/if-then 1
		} // Main/steering_out 1
		if ((emerg_msg && between(y, 0.75[m], 1.5[m])) && (steering >= 0.0[rad])) {
			steering = (steering - 0.001396[rad]); // Main/steering_out 2/if-then 1
		} // Main/steering_out 2
		if ((emerg_msg && between(y, 1.5[m], 2.25[m])) && ((steering - 0.001396[rad]) >= -0.05235[rad])) {
			steering = (steering - 0.001396[rad]); // Main/steering_out 3/if-then 1
		} // Main/steering_out 3
		if ((emerg_msg && (y >= 2.25[m])) && (steering <= 0.0[rad])) {
			steering = (steering + 0.001396[rad]); // Main/steering_out 4/if-then 1
		} // Main/steering_out 4
	}
}