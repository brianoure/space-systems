/*
* Code to be executed in the nanosatellite
* Should work in all 32-bit machines - avoided using 'long' type
*/
(short value){}
(int value){}
(char value){}
int* generate_nanosatellite_telemetry_binary_frame(
unsigned short preamble1,
unsigned short preamble2,
unsigned short preamble3,
unsigned short preamble4,
unsigned int solar_panel_voltage,
unsigned int battery_charge,
unsigned int battery_temperature,
unsigned short position_latitude1,
unsigned short position_latitude2,
unsigned short position_longitude1,
unsigned short position_longitude2,
unsigned char position_altitude1,
unsigned char position_altitude2,
unsigned char position_altitude3,
unsigned short system_time1,
unsigned short system_time2,
unsigned char payload_status,
unsigned int payload_temperature,
unsigned char obc_status,
unsigned int memory_remaining_percentage,
unsigned short last_uplink_command1,
unsigned short last_uplink_command2,
unsigned short last_uplink_command_parameters1,
unsigned short last_uplink_command_parameters2,
unsigned int obc_temperature,
unsigned char structure_status,
unsigned int structure_temperature,
unsigned char eps_status,
unsigned int eps_temperature,
unsigned char attitude_determination_status, 
unsigned char redundancy_check
) {//get_nanosatellite_telemetry

short_size=(int) sizeof(short);
int_size  =(int) sizeof(int);
char_size =(int) sizeof(char);
frame_size = (14*short_size)+(8*int_size)+(9*char_size);
int result_pointer[frame_size];

//short: preamble1, preamble2, preamble3, preamble4
for(int x=0             ;x<short_size    ;x++){  result_pointer[x] = (preamble1 & (1<<x)); }/* short loop */
for(int x=short_size    ;x<(2*short_size);x++){  result_pointer[x] = (preamble2 & (1<<x)); }/* short loop */
for(int x=(2*short_size);x<(3*short_size);x++){  result_pointer[x] = (preamble3 & (1<<x)); }/* short loop */
for(int x=(3*short_size);x<(4*short_size);x++){  result_pointer[x] = (preamble4 & (1<<x)); }/* short loop */

//int: solar_panel_voltage, battery_charge, battery_temperature
for(int x=(4*short_size)               ;x<((4*short_size)+int_size)    ;x++){ result_pointer[x] = ( solar_panel_voltage & (1<<x)); }/* int loop */
for(int x=((4*short_size)+int_size)    ;x<((4*short_size)+(2*int_size));x++){ result_pointer[x] = ( battery_charge & (1<<x)); }/* int loop */
for(int x=((4*short_size)+(2*int_size));x<((4*short_size)+(3*int_size));x++){ result_pointer[x] = ( battery_temperature & (1<<x)); }/* int loop */

//short: position_latitude1, position_latitude2, position_longitude1, 
for(int x=((4*short_size)+(3*int_size))                 ;x<(((4*short_size)+(3*int_size))+short_size)    ;x++){ result_pointer[x] = ( position_latitude1 & (1<<x)); }/* short loop */
for(int x=(((4*short_size)+(3*int_size))+short_size)    ;x<(((4*short_size)+(3*int_size))+(2*short_size));x++){ result_pointer[x] = ( position_latitude2 & (1<<x)); }/* short loop */
for(int x=(((4*short_size)+(3*int_size))+(2*short_size));x<(((4*short_size)+(3*int_size))+(3*short_size));x++){ result_pointer[x] = ( position_longitude1 & (1<<x)); }/* short loop */
for(int x=(((4*short_size)+(3*int_size))+(3*short_size));x<(((4*short_size)+(3*int_size))+(4*short_size));x++){ result_pointer[x] = ( position_longitude2 & (1<<x)); }/* short loop */

//int: position_altitude1, position_altitude2, position_altitude3
int marker4=(((4*short_size)+(3*int_size))+(4*short_size));
for(int x=marker4                ;x<(marker4+char_size)    ;x++){ result_pointer[x] = ( position_altitude1 & (1<<x)); }/* char loop */
for(int x=(marker4+char_size)    ;x<(marker4+(2*char_size));x++){ result_pointer[x] = ( position_altitude2 & (1<<x)); }/* char loop */
for(int x=(marker4+(2*char_size));x<(marker4+(3*char_size));x++){ result_pointer[x] = ( position_altitude3 & (1<<x)); }/* char loop */

//short: system_time1, system_time2
int marker5=(marker4+(3*char_size));
for(int x=marker5             ;x<(marker5+short_size)   ;x++){ result_pointer[x] = ( system_time1e3 & (1<<x)); }/* short loop */
for(int x=(marker5+short_size);x<(marker5+(2*short_size);x++){ result_pointer[x] = ( position_altitude3 & (1<<x)); }/* short loop */

//char: payload_status
int marker6=;
for(int x=0;x<char_size;x++){}/* char loop */

//int: payload_temperature
for(int x=0;x<int_size;x++){}/* int loop */

//char: obc_status
for(int x=0;x<char_size;x++){}/* char loop */

//int memory_remaining_percentage
for(int x=0;x<int_size;x++){}/* int loop */

//short: last_uplink_command1 , last_uplink_command2
for(int x=0;x<short_size;x++){
}/* short loop */
for(int x=0;x<short_size;x++){
}/* short loop */

//short: last_uplink_command_parameters1, last_uplink_command_parameters2
for(int x=0;x<short_size;x++){
}/* short loop */
for(int x=0;x<short_size;x++){
}/* short loop */

//int: obc_temperature
for(int x=0;x<int_size;x++){}/* int loop */

//char: structure_status
for(int x=0;x<char_size;x++){}/* char loop */

//int: structure_temperature
for(int x=0;x<int_size;x++){}/* int loop */

//char: eps_status
for(int x=0;x<char_size;x++){}/* char loop */

//int: eps_temperature
for(int x=0;x<int_size;x++){}/* int loop */

//char: attitude_determination_status
for(int x=0;x<char_size;x++){}/* char loop */

//char: redundancy_check
for(int x=0;x<char_size;x++){}/* char loop */

return result_pointer;
}//get_nanosatellite_telemetry
