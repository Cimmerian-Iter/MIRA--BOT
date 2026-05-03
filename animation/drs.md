# DRS

DRS animation won't use DIR obviously, in order to use pre-animated functions that is activated by the player, we record the animation manually. For the DRS, we will do that in blender. Note that this is the same technique used to animate wipers and other stuff.

The first step is to create an Empty that will control the animation of the DRS.

<figure><img src="../.gitbook/assets/image (79).png" alt=""><figcaption></figcaption></figure>

I created an empty (this time the Z axis must be pointing to the sky) which is at the edge of the DRS. Its origin must be the pivot point of the DRS.&#x20;

Then you parent the DRS to the empty and give it a name. For example, I gave it the name DRS.

Then I set the animation frame to 20.

Save the position of the empty at the frame zero by pressing the I button while the frame selected is 1 and the mouse is on the rotation field

<figure><img src="../.gitbook/assets/image (168).png" alt=""><figcaption></figcaption></figure>



Now I go to the frame 20 and rotate the empty to the point where the DRS is in its open position. For example 45°

<figure><img src="../.gitbook/assets/image (160).png" alt=""><figcaption></figcaption></figure>

you can now press the play button, you would see the DRS being animated completely from closed to open position.

Notice that the DRS on this car has a mobile object that moves along the DRS, the shark fin. We can also animate this piece by modifying both its position and rotation.

We save its original position (both rotation and position) then move to frame 20. We move the position of the empty that controls the shark fin and rotate it so that it matches the position of the piece when the DRS is open

<figure><img src="../.gitbook/assets/image (211).png" alt=""><figcaption><p>frame 1</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (58).png" alt=""><figcaption><p>frame 20</p></figcaption></figure>



Now how do I export this animation?&#x20;

Either we export the fbx animation and build it with kseditor like in the AC pipeline, or we use a more straightforward way which is using the ksanim exporter for blender that you can find [here](https://www.racedepartment.com/downloads/blender-ksanim-knh-exporter.30388/)

Once you have installed this extension you need to be aware of something. In game, all animation will be 90° rotated compared to what you have set in blender.

To counter that, go to the frame 1 and 20, subtract -90 from the value of the X rotation

<figure><img src="../.gitbook/assets/image (104).png" alt=""><figcaption><p>frame 1</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (62).png" alt=""><figcaption><p>frame 20</p></figcaption></figure>

Once this is done you can export the ksanim directly from blender

<figure><img src="../.gitbook/assets/image (149).png" alt=""><figcaption></figcaption></figure>

Name it whatever you want and place it in the animations folder of your car. As for the car, save the fbx and build the KN5 again.

Once the car is saved and built again, it's time to tell the car to use this ksanim for drs.

Open wings\_animations.ini

```
[ANIMATION_0]
WING=7
FILE=car_Wing.ksanim
MIN=0
MAX=20
INVERTED=1
SPEED=8

```

WING is the number of the WING in aero.ini that corresponds to the DRS

```
aero.ini

[WING_7]
NAME=DRS
CHORD=1
SPAN=1.417
POSITION=0,0.60,-1.850
LUT_AOA_CL=wing_rear2_AOA_CL.lut
LUT_GH_CL=							; Height aero lift multiplier lookup table
CL_GAIN=1
LUT_AOA_CD=wing_rear2_AOA_CD.lut
LUT_GH_CD=							; Height aero drag multiplier table
CD_GAIN=1.0
ANGLE=15
ZONE_FRONT_CL=0    ; CL=CL/(1.0+ZONE_0_CL*DAMAGE)
ZONE_FRONT_CD=0    ; CD=CD*(1.0+ZONE_0_CD*DAMAGE)
ZONE_REAR_CL=0.01     ; CL=CL/(1.0+ZONE_0_CL*DAMAGE)
ZONE_REAR_CD=0.01     ; CD=CD*(1.0+ZONE_0_CD*DAMAGE)
ZONE_LEFT_CL=0     ; CL=CL/(1.0+ZONE_0_CL*DAMAGE)
ZONE_LEFT_CD=0     ; CD=CD*(1.0+ZONE_0_CD*DAMAGE)
ZONE_RIGHT_CL=0     ; CL=CL/(1.0+ZONE_0_CL*DAMAGE)
ZONE_RIGHT_CD=0     ; CD=CD*(1.0+ZONE_0_CD*DAMAGE)
YAW_CL_GAIN=-0.10

```

In this case, it's the WING 7

Min and Max are the numbers of frames used from start to finish

Speed is the speed of the animation, if you want to make it slower or faster

Now that this is done the DRS should work. You can open Custom Showroom and play the animation of the DRS and see if the results match your expectations!

<figure><img src="../.gitbook/assets/image (144).png" alt=""><figcaption></figcaption></figure>



