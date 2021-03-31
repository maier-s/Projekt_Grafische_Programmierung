package myCar;
import resources.rad;

class SM_laneChange_right {
	@set
	private boolean emergency_msg;
	integer count;
	linksLenken obj_links;
	rechtsLenken obj_rechts;
	@get
	private rad steering_out;
	@set
	private integer max_count;
	@get
	private boolean active;

	@generated("statemachine", "000000")
	public void sM_laneChange_rightStatemachineTrigger() triggers SM_laneChange_rightStatemachine;

	@generated("statemachine", "e7d86158")
	statemachine SM_laneChange_rightStatemachine using SM_laneChange_rightStatemachineStates {
		start idle;

		state idle {
			transition emergency_msg == true to turn_right;
		}

		state turn_left {
			entry {
				count = 0;
				obj_links.steering = steering_out;
			}
			static {
				count = count + 1;
				obj_links.calc();
				steering_out = obj_links.steering;
			}
			transition count == max_count to straighten_right;
		}

		state straighten_right {
			entry {
				count = 0;
				obj_rechts.steering = steering_out;
			}
			static {
				count = count + 1;
				if (!between(steering_out, - 0.001[rad], 0.001[rad])) {
					obj_rechts.calc();
				}
				steering_out = obj_rechts.steering;
			}
			transition count == max_count to Done;
		}

		state turn_right {
			entry {
				count = 0;
				obj_rechts.steering = steering_out;
				active = true;
			}
			static {
				count = count + 1;
				obj_rechts.calc();
				steering_out = obj_rechts.steering;
			}
			transition count == max_count to straighten_left;
		}

		state straighten_left {
			entry {
				count = 0;
				obj_links.steering = steering_out;
			}
			static {
				count = count + 1;
				if (!between(steering_out, - 0.001[rad], 0.001[rad])) {
					obj_links.calc();
				}
				steering_out = obj_links.steering;
			}
			transition count == max_count to turn_left;
		}

		state Done {
			entry {
				active = false;
			}
			transition emergency_msg == false to idle;
		}
	}
}
@generated("statemachine", "000000")
type SM_laneChange_rightStatemachineStates is enum {
	idle,
	turn_left,
	straighten_right,
	turn_right,
	straighten_left,
	Done
};