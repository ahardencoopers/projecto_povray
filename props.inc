#macro create_triangle()
object {
	difference {
		box {
			< 1,1,1>, <-1,0,-1>
		}
		plane {
			x-y,  -sqrt(2)/2
		}
		plane {
			-x-y, -sqrt(2)/2
		}
		plane {
			z-y,  -sqrt(2)/2
		}
		plane {
			-z-y, -sqrt(2)/2
		}
	}
}
#end

#macro create_roof(mx, my, mz, s)
object {
	difference {
		create_triangle()
		object {
			box {<0,0,0>, <1,1,1> }
			translate<-0.5,0.7,-0.5>
			
		}
	}
	texture {
		pigment {
			image_map {
				png "roof.png"
			}
		}	
	}
	scale s
	translate<mx, my, mz>
}
#end

#macro create_boat(mx, my, mz, s, r)
union {
	object {
		create_boat_base(0,0,0,1)
		texture {pigment {DMFDarkOak}}
		rotate <0,r,0>
		scale s
		translate <mx, my, mz>
	}
	cylinder {
		<-9,1.4,14>, <-9,2.8,14>, 0.05
		texture {Chrome_Metal}
		translate <-1.2,0,-0.3>
	}
}
object {
	union {
		object {
			mesh {
				triangle {
					<-9.5,1.6,13.5>
					<-9.5,2.9,13.5>
					<-11.5,1.4,13.5>
				}
			}
		}
		object {
			mesh {
				triangle {
					<-9.5,1.6,13.5>
					<-9.5,2.9,13.5>
					<-7.5,1.4,14.5>
				}
			}
		}
	}
	texture {pigment {White_Wood}}
}
#end

#macro create_boat_base(mx,my,mz,s)
object {
union {
	object {
		mesh {
			triangle {
				<0,0,0>
				<-1,1,0>
				<1,1,0>
			}
			triangle {
				<0,0,0>
				<1,1,0>
				<2,0,0>
			}
			triangle {
				<0,0,0>
				<-1,1,0>
				<-2,0,0>
			}
		}
	}

	object {
		mesh {
			triangle {
				<0,0,-2>
				<-1,1,-2>
				<1,1,-2>
			}
			triangle {
				<0,0,-2>
				<1,1,-2>
				<2,0,-2>
			}
			triangle {
				<0,0,-2>
				<-1,1,-2>
				<-2,0,-2>
			}
		}
	}

	object {
		mesh {
			triangle {
				<1, 1, 0>
				<2, 0, 0>
				<2, 0, -1>
			}
			triangle {
				<1,1,0>
				<1,1,-2>
				<2,0,-1>
			}
			triangle {
				<1,1,-2>
				<2,0,-1>
				<2,0,-2>
			}
		}
	}

	object {
		mesh {
			triangle {
				<-2,0,0>
				<-1,1,0>
				<-2,0,-1>
			}
			triangle {
				<-1,1,0>
				<-2,0,-1>
				<-1,1,-2>
			}
			triangle {
				<-2,0,-1>
				<-2,0,-2>
				<-1,1,-2>
			}
		}
	}

	object {
		mesh {
			triangle {
				<1,1,0>
				<-1,1,0>
				<-1,1,-2>
			}
		}
	}

	object {
		mesh {
			triangle {
				<1,1,0>
				<-1,1,0>
				<-1,1,-2>
			}
		}
	}

	object {
		mesh {
			triangle {
				<1,1,0>
				<1,1,-2>
				<-1,1,-2>
			}
		}
	}
}
	translate <mx, my, mz>
	scale s
	rotate <0,0,180>
}
#end

#macro create_tree()
#declare HEIGHT = lombardy_poplar_13_height * 1;
#declare WIDTH = HEIGHT*200/300;
union { 

         object { lombardy_poplar_13_stems
                pigment{color MediumWood} }

         object { lombardy_poplar_13_leaves
                texture { pigment {color MediumForestGreen} 
                          finish { ambient 0.15 diffuse 0.8 }}}
         rotate 90*y 
         scale .3
         translate <15, 7.5, 16>
	}
  

#end
