# Model satellite downlink telemetry frame construction
This is just a model telemetry frame. Complex satellites require significantly larger frames with more complex data <br>
(I'll include an advanced example in this same directory at a later time)

The frame, starting with the MSB, is arranged as follows:
- unsigned long preamble
- unsigned long position_latitude
- unsigned long position_longitude
- unsigned long position_altitude
- unsigned long system_time
- unsigned long structure_status
- unsigned long attitude_determination_status 
- unsigned long payload_status
- unsigned long obc_status
- unsigned long eps_status
- unsigned long communication_status
- unsigned long last_uplink_command
- unsigned long last_uplink_command_parameters
- unsigned char redundancy_check
