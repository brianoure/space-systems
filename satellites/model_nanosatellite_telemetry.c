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
unsigned int * get_nanosatellite_telemetry(solar_panel,
                                           battery_charge,
                                           battery_temperature,
                                           position_latitude,
                                           position_longitude,
                                           position_altitude,
                                           system_time,
                                           payload_status,
                                           payload_temperature,
                                           obc_status,
                                           obc_temperature,
                                           structure_status,
                                           structure_temperature,
                                           eps_status,
                                           eps_temperature,
                                           attitude_determination_status){
unsigned int first,second,third,fourth,fifth,sixth;
first = ( (solar_panel)|
          (battery_charge)|
          (battery_temperature)|
          (position_latitude) );
second= ( (position_longitude)|
          (position_altitude)|
          (system_time)|
          (payload_status) );
third = (
  
)
fourth = ( (payload_temperature)|
          (obc_status)|
          (obc_temperature)|
          (structure_status) );
fifth= ( (structure_temperature)|
          (eps_status)|
          (eps_temperature)|
          (attitude_determination_status) );
unsigned int rslt[4];
rslt = [first,second,third,fourth];
return rslt;
}//get_nanosatellite_telemetry
