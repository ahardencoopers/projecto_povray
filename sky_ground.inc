#macro create_sky()
plane{
	<0,1,0>,1 hollow 
	texture{ pigment {color rgb<0.1,0.3,0.75>*0.7}
		#if (version = 3.7 )  finish {emission 1 diffuse 0}
		#else                 finish { ambient 1 diffuse 0}
		#end 
	}
	texture{
		pigment{
			bozo turbulence 0.75
			octaves 6  omega 0.7 lambda 2 
			color_map {
				[0.0  color rgb <0.95, 0.95, 0.95> ]
				[0.05  color rgb <1, 1, 1>*1.25 ]
				[0.15 color rgb <0.85, 0.85, 0.85> ]
				[0.55 color rgbt <1, 1, 1, 1>*1 ]
				[1.0 color rgbt <1, 1, 1, 1>*1 ]
			} // end color_map 
			translate< 3, 0,-1>
			scale <0.3, 0.4, 0.2>*3
		} // end pigment
		#if (version = 3.7 )  finish {emission 1 diffuse 0}
		#else                 finish { ambient 1 diffuse 0}
		#end 
	} // end texture 2
	scale 10000
}

#end

#macro create_fog()
fog{
	fog_type   2
	distance   1000
	color      rgb<1,1,1>*0.9
	fog_offset 0.1
	fog_alt    20
	turbulence 1.8
}
#end

/*#macro create_ground()
plane {
	<0,1,0>, 0 
	texture{
		pigment{
			color rgb<0.667,0.611,0.482>
		}
		normal {
			bumps 0.75 scale 0.015
		}
			finish {
				ambient 0.1
				diffuse 0.8
			}
	}
}
#end*/

#macro create_water()
plane {
y, 1
	texture{
		Polished_Chrome
		normal{
			bumps 0.03
			scale <1,0.25,0.25>
			turbulence 0.6
		}
	}
}
#end
