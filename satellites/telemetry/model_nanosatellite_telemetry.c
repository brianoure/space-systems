preamble is 'unsigned long' type
- solar_panel_voltage is 'unsigned int' type
- battery_charge is 'unsigned int' type
- battery_temperature is 'int' type
- position_latitude is 'unsigned long' type
- position_longitude is 'unsigned long' type
- position_altitude is 'unsigned int' type
- system_time is 'unsigned long' type
- payload_status is 'unsigned char' type
- payload_temperature is 'int' type
- obc_status is 'unsigned char' type
- int memory_remaining_percentage is 'unsigned int' type
- last_uplink_command is 'unsigned long' type
- last_uplink_command_parameter1 is 'unsigned long' type
- last_uplink_command_parameter2 is 'unsigned long' type
- obc_temperature is 'int' type
- structure_status is 'unsigned char' type
- structure_temperature is 'int' type
- eps_status  is 'unsigned char' type
- eps_temperature is 'int' type
- attitude_determination_status is 'unsigned char' type
- communication_status is 'unsigned char' type
- redundancy_check is 'unsigned int' type
/*
* Should be 32-bit machine friendly
*/
void get_nanosatellite_telemetry(unsigned short preamble1,
                                 unsigned short preamble2,
                                 unsigned short preamble3,
                                 unsigned short preamble4,
                                 int solar_panel_voltage,
                                 int battery_charge,
                                 int battery_temperature,
                                 long position_latitude,
                                 long position_longitude,
                                 unsigned int position_altitude,
                                 long system_time,
                                 char payload_status,
                                 int payload_temperature,
                                 char obc_status,
                                 int memory_remaining_percentage,
                                 long last_uplink_command,
                                 long last_uplink_command_parameters,
                                 int obc_temperature,
                                 char structure_status,
                                 int structure_temperature,
                                 char eps_status,
                                 int eps_temperature,
                                 char attitude_determination_status, 
                                 int redundancy_check ){//get_nanosatellite_telemetry
long_size=sizeof(long);
int_size=sizeof(int);

return 0;
}//get_nanosatellite_telemetry
