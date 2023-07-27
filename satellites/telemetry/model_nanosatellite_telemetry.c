/*
* Code to be executed in the nanosatellite
* Should work for most if not all 32-bit machines
*/

long_size =sizeof(unsigned long);
short_size=sizeof(unsigned short);
int_size  =sizeof(unsigned int);
char_size =sizeof(unsigned char);
frame_size_in_bytes = (2*short_size)+(7*int_size)+(5*char_size)+(6*long_size);
int binary_result_pointer[frame_size_in_bytes*8];//binary_frame:88 bits

//MSB to LSB
int* generate_nanosatellite_telemetry_binary_frame(
unsigned long preamble,
unsigned long position_latitude,
unsigned long position_longitude,
unsigned long position_altitude,
unsigned long system_time,
unsigned long structure_status,
unsigned long attitude_determination_status, 
unsigned long payload_status,
unsigned long obc_status,
unsigned long eps_status,
unsigned long communication_status,
unsigned long last_uplink_command,
unsigned long last_uplink_command_parameters,
unsigned char redundancy_check
) {//get_nanosatellite_telemetry

int pre_start=0;        int pre_end=0;
int lat_start=0;        int lat_end=0;
int lon__start=0;       int lon__end=0;
int alt_start=0;        int alt_end=0;
int time_start=0;       int time_end=0;
int structure_start=0;  int structure_end=0;
int adcs_start=0;       int adcs_end=0;
int payload_start=0;    int payload_end=0;
int obc_start=0;        int obc_end=0;
int eps_start=0;        int eps_end=0;
int comms_start=0;      int comms_end=0;
int command_start=0;    int command_end=0;
int param_start=0;      int param_end=0;
int red_start=0;        int red_end=0;

int index;
for(index=0;index<frame_size;index++){//for
if((0<=index)         && (index<long_size)){  binary_result_pointer[index] = (preamble & 1<<(long_size-index));  }//preamble
if((long_size<=index) && (index<long_size)){  binary_result_pointer[index] = (preamble & 1<<(long_size-index));  }//solar panel
if((0<=index) && (index<long_size)){  binary_result_pointer[index] = (preamble & 1<<(long_size-index));  }//battery charge
}//for

//short: preamble1, preamble2, preamble3, preamble4
for(marker=0            ;marker<short_size    ;marker++){  result_pointer[marker] = preamble1 & 1<<frame_size-frame_size; }
for(marker=short_size   ;marker<(2*short_size);marker++){  result_pointer[marker] = (preamble2 & (1<<marker)); }
for(int x=(2*short_size);x<(3*short_size);x++){  result_pointer[x] = (preamble3 & (1<<x)); }
for(int x=(3*short_size);x<(4*short_size);x++){  result_pointer[x] = (preamble4 & (1<<x)); }

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
marker=(((4*short_size)+(3*int_size))+(4*short_size));
for(int x=marker                ;x<(marker+char_size)    ;x++){ result_pointer[x] = ( position_altitude1 & (1<<x)); }/* char loop */
for(int x=(marker+char_size)    ;x<(marker+(2*char_size));x++){ result_pointer[x] = ( position_altitude2 & (1<<x)); }/* char loop */
for(int x=(marker+(2*char_size));x<(marker+(3*char_size));x++){ result_pointer[x] = ( position_altitude3 & (1<<x)); }/* char loop */

//short: system_time1, system_time2
for(int x=marker             ;x<(marker+short_size)   ;x++){ result_pointer[x] = ( system_time1 & (1<<x)); }/* short loop */
for(int x=(marker+short_size);x<(marker+(2*short_size);x++){ result_pointer[x] = ( system_time2 & (1<<x)); }/* short loop */

//char: payload_status
for(int x=marker;x<char_size;x++){}/* char loop */

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


get_binary_array_short(unsigned short value){//ftn
int length = sizeof(short)
int result[length];
int index;
for(index=0;index<length;index++){//for
result[index]=(value & (1<<(length-1-index)));
}//for
return result;
}//ftn

int* get_binary_array_int(unsigned int value){//ftn
int length = sizeof(int)
int result[length];
int index;
for(index=0;index<length;index++){//for
result[index]=(value & (1<<(length-1-index)));
}//for
return result;
}//ftn

int* get_binary_array_char(unsigned char value){//ftn
int length = sizeof(char)
int result[length];
int index;
for(index=0;index<length;index++){//for
result[index]=(value & (1<<(length-1-index)));
}//for
return result;
}//ftn
