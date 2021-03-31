package myCar;
import resources.DriverMessages;
import resources.CarMessages;
import SystemLib.Miscellaneous.EdgeRising;
import SystemLib.Miscellaneous.EdgeFalling;

static class EvasiveManeuver
reads DriverMessages.emergency, CarMessages.y
writes CarMessages.steering {
	ausweichen ausweichen_instance;
	SM_laneChange_left SM_laneChange_left_instance;
	SM_laneChange_right SM_laneChange_right_instance;
	EdgeRising EdgeRising_instance;
	EdgeFalling EdgeFalling_instance;
	characteristic integer max_count = 150;
	@thread
	@generated("blockdiagram", "0cc23868")
	public void calc() {
		SM_laneChange_left_instance.sM_ausweichenStatemachineTrigger(); // Main/calc 1
		SM_laneChange_left_instance.emergency_msg = EdgeRising_instance.value(); // Main/calc 2
		SM_laneChange_right_instance.sM_laneChange_rightStatemachineTrigger(); // Main/calc 3
		EdgeRising_instance.compute(DriverMessages.emergency); // Main/calc 4
		EdgeFalling_instance.compute(DriverMessages.emergency); // Main/calc 5
		if (SM_laneChange_left_instance.active) {
			CarMessages.steering = SM_laneChange_left_instance.steering_out; // Main/calc 6/if-then 1
		} // Main/calc 6
		if (SM_laneChange_right_instance.active) {
			CarMessages.steering = SM_laneChange_right_instance.steering_out; // Main/calc 7/if-then 1
		} // Main/calc 7
		SM_laneChange_right_instance.emergency_msg = EdgeFalling_instance.value(); // Main/calc 8
		SM_laneChange_left_instance.max_count = max_count; // Main/calc 9
		SM_laneChange_right_instance.max_count = max_count; // Main/calc 10
	}
}