/*
*main program for controlling a quadcopter
*/
typedef LEFT 10;
typedef RIGHT 33;
typedef LOWER 45;
typedef HOVER 27;
typedef RAISE 88;
typedef FORWARD 63;
typedef BACK 56;
typedef SPIN 77;
typedef TAKEOFF 28;
typedef LAND 39;

void north_rotor(long rpm);
void west_rotor(long rpm);
void east_rotor(long rpm);
void south_rotor(long rpm);

int run_program=1;

void execute(int action){//action
if(action==LEFT) {}//if
if(action==RIGHT){}//if
if(action==LOWER){}//if
if(action==RAISE){}//if
if(action==FORWARD){}//if
if(action==BACK){}//if
if(action==SPIN){}//if
if(action==TAKEOFF){}//if
if(action==LAND){}//if
}//action

int main(){//main
while(run_program){//while
if(left_key_press_speed1)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(left_key_press_speed2)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(left_key_press_speed3)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(left_key_press_speed4)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(right_key_press_speed1)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(right_key_press_speed2)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(right_key_press_speed3)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(right_key_press_speed4)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(lower_key_press_speed1)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(lower_key_press_speed2)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(lower_key_press_speed3)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(lower_key_press_speed4)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(raise_key_press_speed1)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(raise_key_press_speed2)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(raise_key_press_speed3)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(raise_key_press_speed4)  {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(forward_key_press_speed1){north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(forward_key_press_speed2){north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(forward_key_press_speed3){north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(forward_key_press_speed4){north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(back_key_press_speed1)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(back_key_press_speed2)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(back_key_press_speed3)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(back_key_press_speed4)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(spin_key_press_speed1)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(spin_key_press_speed2)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(spin_key_press_speed3)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(spin_key_press_speed4)   {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(takeoff_key_press)       {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(land_key_press)          {north_rotor(long rpm); west_rotor(long rpm); east_rotor(long rpm); south_rotor(long rpm);}
if(exit_program_key_press){}
}//while
}//main
