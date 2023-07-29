/*
*main program for controlling a quadcopter
*/
int LEFT  =10;
int RIGHT =33;
int LOWER =45;
int HOVER =27;
int RAISE =88;
int FORWARD =63;
int BACK =56;
int SPIN =77;
int TAKEOFF =28;
int LAND =39;

struct motor{ long rpm; int run_duration; };


void north_rotor(struct motor rr);
void west_rotor(struct motor rr);
void east_rotor(struct motor rr);
void south_rotor(struct motor rr);

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
if(left_key_press_speed1)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(left_key_press_speed2)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(left_key_press_speed3)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(left_key_press_speed4)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(right_key_press_speed1)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(right_key_press_speed2)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(right_key_press_speed3)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(right_key_press_speed4)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(lower_key_press_speed1)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(lower_key_press_speed2)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(lower_key_press_speed3)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(lower_key_press_speed4)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(raise_key_press_speed1)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(raise_key_press_speed2)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(raise_key_press_speed3)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(raise_key_press_speed4)  {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(forward_key_press_speed1){north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(forward_key_press_speed2){north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(forward_key_press_speed3){north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(forward_key_press_speed4){north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(back_key_press_speed1)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(back_key_press_speed2)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(back_key_press_speed3)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(back_key_press_speed4)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(spin_key_press_speed1)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(spin_key_press_speed2)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(spin_key_press_speed3)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(spin_key_press_speed4)   {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(takeoff_key_press)       {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(land_key_press)          {north_rotor(struct motor rr); west_rotor(struct motor rr); east_rotor(struct motor rr); south_rotor(struct motor rr);}
if(exit_program_key_press){}
}//while
}//main
