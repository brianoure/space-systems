/*
solar_panel is voltage recorded at the panel,
battery_charge is the percentage charge remaining,
battery_temperature
position_latitude refers to the satellite position above or below the equator,
position_longitude refers to satellite positionto the right or left of the meridian,
position_altitude refers to how high the satellite is above thye sea level,
system_time refers to the time at which the telemetry data was collected,
payload_status refers to the status of the payload,
payload_temperature,
obc_status refers to the status of the on-board-computer,
obc_temperature
structure_status refers to the status of the overall structure,
structure_temperature,
eps_status refers to the status of the electrical power subsystem,
eps_temperature
attitude_determination_status refers to the status of the attitude determination & control subsystem,
communication_status refers to the status of the communication subsystem.
*/
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
