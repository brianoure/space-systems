unsigned int * get_nanosatellite_telemetry(int solar_panel,
                                           int battery_charge,
                                           int battery_temperature,
                                           long position_latitude,
                                           long position_longitude,
                                           unsigned int position_altitude,
                                           long system_time,
                                           char payload_status,
                                           int payload_temperature,
                                           char obc_status,
                                           int memory_remaining,
                                           int last_uplink_command,
                                           int last_uplink_command_parameters,
                                           int obc_temperature,
                                           char structure_status,
                                           int structure_temperature,
                                           char eps_status,
                                           int eps_temperature,
                                           char attitude_determination_status ){//get_nanosatellite_telemetry
unsigned int first; unsigned int second; unsigned int third; unsigned int fourth; unsigned int fifth; unsigned int sixth;
first = ( (solar_panel)|
          (battery_charge)|
          (battery_temperature)|
           );
second= position_latitude;
third = position_longitude;
fourth = (  (position_altitude)|
          (system_time)|
          (payload_status)|
  (payload_temperature)|
          (obc_status)|
          (obc_temperature)|
          (structure_status) );
fifth = ( (structure_temperature)|
          (eps_status)|
          (eps_temperature)|
          (attitude_determination_status) );
sixth = ( (structure_temperature)|
          (eps_status)|
          (eps_temperature)|
          (attitude_determination_status) );
unsigned int rslt[4];
rslt = [first,second,third,fourth];
return rslt;
}//get_nanosatellite_telemetry
