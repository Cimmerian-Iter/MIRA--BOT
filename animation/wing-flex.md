---
description: Big thanks toG-Gorce Guy for introducing me how to bend wings in Assetto Corsa
---

# Wing flex

CSP improves on Assetto Corsa default engine and allows us to move some parts of the car more realistically. When you speed up or go over a kerb, the front wing does wobble and bends due to aerodynamic forces. This can be replicated thanks to CSP.\
\
<br>

## I. Preparing the car

#### Isolating the Front wing

First of all, we must add bones to the front wing. These bones will make parts of the front wing move.&#x20;

We need to isolate everything related to the front wing, if the front wing is part of the car body object, split it into several pieces and join every part related to the front wing again.\
\
For example in this car, I have 3 parts : The front wing skin, the carbon part, and the rivets.&#x20;

Load the bones from [this blend](https://cdn.discordapp.com/attachments/1100018766575845378/1105220652706840766/bones.blend), and isolate the front wing



<figure><img src="../.gitbook/assets/image (148).png" alt=""><figcaption><p>Front wing, rivet, carbon, bones, all here</p></figcaption></figure>

#### Positioning the bones

Move the bones toward the center of the front wing

<figure><img src="../.gitbook/assets/image (210).png" alt=""><figcaption><p>Perfectly in the middle</p></figcaption></figure>

Now move the 1st bone to the end of the moving part of the front wing (the big left part here). Be in edit mode to move the bone.

<figure><img src="../.gitbook/assets/image (60).png" alt=""><figcaption></figcaption></figure>

Move the second bone to the extremity of the part holding the front wing to the nose

<figure><img src="../.gitbook/assets/image (129).png" alt=""><figcaption></figcaption></figure>

Do the same thing with the right bones and it should look like this :&#x20;

<figure><img src="../.gitbook/assets/image (197).png" alt=""><figcaption></figcaption></figure>

#### Fixing rotation and bones position

Now that this is done let's fix the direction of the wing. Assetto Corsa needs the Y axis to be on top, so we will make the Y axis of the front wing face the top.\
\
Select the front wing parts, go to active tools, and select "Affect Only" = Origins.

<figure><img src="../.gitbook/assets/image (105).png" alt=""><figcaption></figcaption></figure>

Use the rotation tool to see the 3 axes of the object.

<figure><img src="../.gitbook/assets/image (207).png" alt=""><figcaption><p>YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY</p></figcaption></figure>

If Y is not on top, press the following keys on your keyboard R + X + 90 (this will rotate the object by 90 degrees on the X axis, which will make the Z axis who usually is on top to go down letting Y on top)

You also need to reset the location of every parts to the center (0,0,0), you can use CTRL+A and do reset position.

Now, create a new material for each parts, it will be needed after. (You can name it whatever you like, in this case i named them carbonskinned and front\_skinned)



Finally, once this is done, we save the bone position.

Select the bones, go into pose mode, select all bones and do CTRL + A, and select "Apply Pose as Rest Pose"

<figure><img src="../.gitbook/assets/image (215).png" alt=""><figcaption></figcaption></figure>

## II. Animating the bones

This part is where it get tricky, mostly the fault of the front wing mesh depending on if the polygons are cool to work with or not.

### 1) Parenting the bones to the mesh

Select all the parts of the front wing, then the bones in object mode. Do CTRL+P and select "Armature deform With Envelope Weights weights".

<figure><img src="../.gitbook/assets/image (201).png" alt=""><figcaption></figcaption></figure>

{% hint style="info" %}
If upon doing this the front wing mesh is deformed, smaller, or bigger then revert the changes. Make sure that all parts are unparented, and that their scale is set to 1.0
{% endhint %}

The bones are now affecting the front wing like it should. But if you move one bone, the effect might not be to your liking.

<figure><img src="../.gitbook/assets/image (98).png" alt=""><figcaption></figcaption></figure>

### 2) Fixing the weight paint&#x20;

We now have to fix the "Weight Paint". This tells how much the area of the front wing will be deformed by one bone.

Go into edit mode, and check the Front Wing mesh. What we need is to separate the areas between the bones.

<figure><img src="../.gitbook/assets/image (192).png" alt=""><figcaption></figcaption></figure>

You can use the knife tool to creat new subsection in the mesh.

<figure><img src="../.gitbook/assets/image (190).png" alt=""><figcaption></figcaption></figure>

Sometime the knife tool won't cut certain parts, I'm unsure why but it shouldn't impact much anyway.

<figure><img src="../.gitbook/assets/image (86).png" alt=""><figcaption></figcaption></figure>

Now that this is done, enter into Weight mode, Select a bone in the vertex group, you will see in red the area that will be the most affected by the selected bone when moving. We will change the weight map. Set the Weight to 0, and paint the whole front wing.

<figure><img src="../.gitbook/assets/image (128).png" alt=""><figcaption><p>Before</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (124).png" alt=""><figcaption><p>After</p></figcaption></figure>

Do the same operation for all the objects and the bones, everything must be blue.

<figure><img src="../.gitbook/assets/image (180).png" alt=""><figcaption><p>Even the small details of the Front Wing</p></figcaption></figure>

Now let's assign each region between the bones correctly, chose one part, go into edit mode, and select the region that we will affect to one bone.

<figure><img src="../.gitbook/assets/image (61).png" alt=""><figcaption><p>This is the area of the Left bone which name is bone 3</p></figcaption></figure>

In the vertex menu, make sure weight is set to 1, and select assign.

<figure><img src="../.gitbook/assets/image (195).png" alt=""><figcaption><p>Assign it now !</p></figcaption></figure>

When we go back in Weight mode and select Bone003 we see that the part is completely red, if some areas inside are not red (because some parts of the wing were not correctly selected, you can fix it with the gradient tool, and swipe from the extremity of the wing to the bone extremity.

<figure><img src="../.gitbook/assets/image (87).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../.gitbook/assets/image (112).png" alt=""><figcaption><p>Thanks gradiant tool</p></figcaption></figure>

The same goes for the area between the bones, select them in edit mode and paint it for bone 2

<figure><img src="../.gitbook/assets/image (145).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../.gitbook/assets/image (185).png" alt=""><figcaption></figcaption></figure>

Do the same for the other side, and the other parts.&#x20;

<figure><img src="../.gitbook/assets/image (121).png" alt=""><figcaption></figcaption></figure>

\
Once it is done you can test rotating the bones, the wing should flex normally

<figure><img src="../.gitbook/assets/image (107).png" alt=""><figcaption></figcaption></figure>

If for some reason you see some part bending the wrong way, it means your weight paint is wrong and you should redo it until everything bend normally.

<figure><img src="../.gitbook/assets/image (136).png" alt=""><figcaption><p>The front wing spawned a mouth</p></figcaption></figure>



### 3) Creating the animation

Now we need to animate the front wing bending backward, because as you know, the more speed you have, the more force will be applied to the front wing forcing it to bend backward.&#x20;

<figure><img src="../.gitbook/assets/image (57).png" alt=""><figcaption></figcaption></figure>

Go into pose mode, and save the default rotation to the frame 1, and for frame 100, make the wing bend backward.

Bone 2 and 6 must be rotated by -2 degrees on the X axis

<figure><img src="../.gitbook/assets/image (91).png" alt=""><figcaption></figcaption></figure>

Bones 3 and 7 must be rotated by -3 degrees on the x axis&#x20;

<figure><img src="../.gitbook/assets/image (74).png" alt=""><figcaption></figcaption></figure>

And to finish, bend all 4 bones to 2 degrees on Y axis.

Now if you play the animation you will see the wing bending backward from 0 to 100, if the animation is good enough for you, you can export it with the ksanim exporter. Else you can tweak it to your liking.

For now, we will name our ksanim FW\_Flex.ksanim

###

## III. Exporting to KsEditor

Once this is done, you can export the fbx back to the unpacked car folder, and open KsEditor. You will notice that it has automatically set the shaders to ksSkinnedMesh for the new materials you created and bound to the flexing parts of the car.

<figure><img src="../.gitbook/assets/image (77).png" alt=""><figcaption><p>Put the textures back and change the values</p></figcaption></figure>

KsSkinnedMesh is just the equivalent of KsPerPixelMultiMap but for bones, you also have the KsSkinnedMesh\_NMDetaill which is the same as KsPerPixelMultiMap\_NMDetaill

<figure><img src="../.gitbook/assets/image (127).png" alt=""><figcaption></figcaption></figure>



Now everything should be done on the car side, if you have some problems like the front wing being misplaced in ks editor, it means you haven't reset the location of the front wing in blender, make sure that location, scale, and rotation is reset back to 0 and that Y axis is pointing to the sky.

<figure><img src="../.gitbook/assets/image (117).png" alt=""><figcaption></figcaption></figure>

## IV. Editing Data to include wing flex

Now that we have done the animation, we need to specify to Assetto Corsa how to run it.



### 1) AERO.ini

We need to create a wing that will be tied to the flexing wing. I have already 8 wing object in my aero so this will be the 9th.

{% code overflow="wrap" lineNumbers="true" %}
```xml
[WING_9]
NAME=fw_flex
CHORD=1
SPAN=1
POSITION=0,-0.013,2.762
LUT_AOA_CL=Neutral.lut
LUT_GH_CL=Neutral.lut
CL_GAIN=0
LUT_AOA_CD=Neutral.lut
LUT_GH_CD=Neutral.lut
CD_GAIN=0
ANGLE=0
ZONE_FRONT_CL=0
ZONE_FRONT_CD=0
ZONE_REAR_CL=0
ZONE_REAR_CD=0
ZONE_LEFT_CL=0
ZONE_LEFT_CD=0
ZONE_RIGHT_CL=0
ZONE_RIGHT_CD=0
YAW_CL_GAIN=0

[DYNAMIC_CONTROLLER_0]
WING=9
COMBINATOR=ADD
INPUT=SPEED_KMH
LUT=fw_flexanim.lut
FILTER=0.9
UP_LIMIT=100
DOWN_LIMIT=0

```
{% endcode %}

Past this to the aero.ini and save it



### 2) WING\_ANIMATION.ini

This file is where we will specify the ksanim location, which wing it should affect and what frames it should play.

{% code lineNumbers="true" fullWidth="false" %}
```
[ANIMATION_0]
WING=9
FILE=fw_flex.ksanim
MIN=0
MAX=100
```
{% endcode %}

Don't forget to change the animation number if you already have some in your wing\_animation.ini

### 3) EXT\_CONFIG.INI

Now we need to specify the bones that will wobble, this is a CSP features which makes the wing move when you hit a kerb or make contact.&#x20;

```
[WOBBLY_BIT_0]
NAME = Bone003
CONNECTED_TO = -0, 0, 0
MAX_RANGE = 0.10      ////  0.05
DAMPENING_LAG = 0.93  ////  0.7
G_GAIN = 0.7  ////  1
GRAVITY_GAIN = 1.0  ////  0
OFFSET_GAIN = 1500  ////  2000
STIFF_AXIS = 0, 0, 1  ////  0, 0, 1
STIFF_AXIS_STIFFNESS = 0.15  //// 0.7 
G_FILTER = 0.0  ////  0
DEFAULT_GRAVITY_INCLUDED_ALREADY = 1   ////  0

[WOBBLY_BIT_1]
NAME = Bone007
CONNECTED_TO = -0, 0, 0
MAX_RANGE = 0.10      ////  0.05
DAMPENING_LAG = 0.93  ////  0.7
G_GAIN = 0.7  ////  1
GRAVITY_GAIN = 1.0  ////  0
OFFSET_GAIN = 1500  ////  2000
STIFF_AXIS = 0, 0, 1  ////  0, 0, 1.1
STIFF_AXIS_STIFFNESS = 0.15  //// 0.7
G_FILTER = 0.0  ////  0
DEFAULT_GRAVITY_INCLUDED_ALREADY = 1   ////  0
```

Add this to your ext\_config.ini inside the extension folder of your car.

### 4) Adding necessary files to data

We have specified in aero.ini that we use two .lut files : [neutral.lut](https://cdn.discordapp.com/attachments/1100018766575845378/1105562293615472680/neutral.lut) and [fw\_flexanim.lut](https://cdn.discordapp.com/attachments/1100018766575845378/1105562326842744902/fw_flexanim.lut), download them and put them in your data folder.

fw\_flexanim.lut is used to map frames to a certain speed. You can edit it if you want it to bend faster or slower depending on the speed you're reaching.



## V. Testing

You can check that the fw\_flex animation works correctly in showroom, and then in game if it wobble.

<figure><img src="../.gitbook/assets/image (68).png" alt=""><figcaption></figcaption></figure>

