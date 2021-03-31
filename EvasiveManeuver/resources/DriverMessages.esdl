package resources;
import resources.velocity;

data interface DriverMessages {
	real power = 0.0;
	real brake = 0.0;
	boolean on = false;
	real deviation = 0.0;
	boolean emergency = false;
	velocity v_target = 0.0[kmh];
}