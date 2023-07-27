/*
* Code to be executed in the nanosatellite
* Fills a global array-  binary_frame_array - with the binary sequence for transmission starting with MSBit to LSBit (read as left to right)
* arguments for the function -generate_nanosatellite_telemetry_binary_frame- also start with MSByte to LSByte
*/

long_size = sizeof(unsigned long);
char_size = sizeof(unsigned char);
frame_size_in_bytes = (1*char_size)+(13*long_size);
int binary_frame_array=[frame_size_in_bytes*8];

//MSB to LSB
void generate_nanosatellite_telemetry_binary_frame(
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
)
{//get_nanosatellite_telemetry

    int index_position=0;
  
    void taskloop(type_position_number,byte_size){//taskloop
    int bit_size = byte_size*8;
    for(int x=0; x<bit_size; x++){//for
    if(type_position_number==0) { binary_frame_array[index_position]= ( preamble           & (1<<(long_size-x)) );}
    if(type_position_number==1) { binary_frame_array[index_position]= ( position_latitude  & (1<<(long_size-x)) );}
    if(type_position_number==2) { binary_frame_array[index_position]= ( position_longitude & (1<<(long_size-x)) );}
    if(type_position_number==3) { binary_frame_array[index_position]= ( position_altitude  & (1<<(long_size-x)) );}
    if(type_position_number==4) { binary_frame_array[index_position]= ( system_time        & (1<<(long_size-x)) );}
    if(type_position_number==5) { binary_frame_array[index_position]= ( structure_status   & (1<<(long_size-x)) );}
    if(type_position_number==6) { binary_frame_array[index_position]= ( attitude_determination_status & (1<<(long_size-x)) );}
    if(type_position_number==7) { binary_frame_array[index_position]= ( payload_status                & (1<<(long_size-x)) );}
    if(type_position_number==8) { binary_frame_array[index_position]= ( obc_status                    & (1<<(long_size-x)) );}
    if(type_position_number==9) { binary_frame_array[index_position]= ( eps_status                    & (1<<(long_size-x)) );}
    if(type_position_number==10){ binary_frame_array[index_position]= ( communication_status            & (1<<(long_size-x)) );}
    if(type_position_number==11){ binary_frame_array[index_position]= ( last_uplink_command             & (1<<(long_size-x)) );}
    if(type_position_number==12){ binary_frame_array[index_position]= ( last_uplink_command_parameters  & (1<<(long_size-x)) );}
    if(type_position_number==13){ binary_frame_array[index_position]= ( redundancy_check                & (1<<(char_size-x)) );}//This part is 'char'
    index_position++;  
    }//for
    }//taskloop
  
}//end
