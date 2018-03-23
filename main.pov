//POVRay project
//This project uses and modifies certain code parts found in the links below:
//Realistic sky and grass ground: http://www.f-lohmueller.de/pov_tut/backgrnd/pov/p_sky03.txt
//Realistic water: http://www.f-lohmueller.de/pov_tut/backgrnd/p_wat1.htm
#include "colors.inc"
#include "textures.inc"
//Includes creados para el proyecto
#include "sky_ground.inc"
#include "mountain.inc"
#include "lombardy_poplar.inc"
#include "props.inc"

global_settings{ assumed_gamma 1.0 }
#default{ finish{ ambient 0.1 diffuse 0.9 }}

camera {
    //look_at <3,3,3>
    //location <0,6,-3>
	//look_at <3,8,3>
    //location <-2,8,0>
	//Sunset #1
	//look_at <5,3,8>
    //location <-30,7,30>
	//Sunset #2
	look_at <5,3,8>
    location <-15,2,15>
	//look_at <-9.5,1.6,13.5>
    //location <0,3,12>
	//Inverse sunset
	//look_at <5,3,8>
    //location <20,2,-10>

	//look_at <0,0,0>
    //location <-8,0,3>
}

//sun
light_source{<1500,200,-1600> color rgb<1,1,1> }
//light_source{<1500,200,-2500> color rgb<1,1,1> }
//light_source{<-30,5,10> color rgb<1,1,1> }

create_sky()
create_fog()
create_water()
create_mountain1(0,-6,0)
create_mountain1(-5,-9,-8)
create_mountain1(-15,-7,8)
create_boat(-9,1.4,14,0.60,58)
create_tree()
sphere{
	<180,2,-180>, 10
	texture{pigment {image_map{
		png "texture1.png"
		map_type 1
	}}}    
	//rotate <0, 0, 5>
	scale 1
}
