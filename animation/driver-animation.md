---
description: WIP - Need to fix Gangnam Style
---

# Driver animation



Then let's start with setting the driver right. 3DSmax user use assetto driver fbx example provided by kunos, but in blender it doesn't work.

<figure><img src="../.gitbook/assets/image (100).png" alt=""><figcaption><p>T posing ?</p></figcaption></figure>

Instead we will use stereo blend who managed to set the driver up in blender with working bones.&#x20;

<figure><img src="../.gitbook/assets/image (132).png" alt=""><figcaption><p>a lot more clean now</p></figcaption></figure>

We aren't playing mario kart wii, so we need to edit the driver position first to match the real position. For that first it's always good to have a picture that serves as a comparaison. In my case I want to make it seat like an F1 driver.

<figure><img src="../.gitbook/assets/image (139).png" alt=""><figcaption><p>This is the end goal</p></figcaption></figure>

First let's move the foot of the driver, you woud have noticed but there is two green blocks under the driver feets, the bones are connected to it and if we want to move the feet and legs we need to move them and rotate them.

<figure><img src="../.gitbook/assets/image (205).png" alt=""><figcaption><p>Moving the object</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (173).png" alt=""><figcaption><p>Rotating the object</p></figcaption></figure>

Consider those two objects like the accelerator and the breaks, try to match their position and the skinned mesh will adapt automatically to it.

The next step is to move the drivers ass and spine. You would think at first that there is no bones for it, but if you zoom you'll find one.

<figure><img src="../.gitbook/assets/image (153).png" alt=""><figcaption><p>RIG_Center bone, ridiculisly small</p></figcaption></figure>

Rotate it to make the driver bend backward. Then adjust again the two pedals object to make the sitting look more natural.

<figure><img src="../.gitbook/assets/image (189).png" alt=""><figcaption><p>looks better</p></figcaption></figure>

2 bones left to edit, first RIG\_HIPS to adjust further the belly and top part of the driver, then RIG\_Neck to move the driver's head.

<figure><img src="../.gitbook/assets/image (216).png" alt=""><figcaption><p>The neck moved !</p></figcaption></figure>

Now let's finish off by the arms, just like for the feet there is two object that are tied to them and that you need to use in order to move them. But there is also the small round circle in between them that you need to move since it is what will make the wheel rotation (and rotate the hands).

Move both hand grip object and Wheel rotation and this should be good for the driver position !



<figure><img src="../.gitbook/assets/image (131).png" alt=""><figcaption><p>The WHEEL_ROTATION alongisde the HAND GRIP object highlighted.</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (213).png" alt=""><figcaption><p>yey finally</p></figcaption></figure>

we then load the car we want to animate, create a new collection and load the car there and hide every non necessary part.

<figure><img src="../.gitbook/assets/image (99).png" alt=""><figcaption></figcaption></figure>

Now let's do the moving like before to make the driver fit the cockpit.&#x20;

<figure><img src="../.gitbook/assets/image (52).png" alt=""><figcaption><p>From this</p></figcaption></figure>



<figure><img src="../.gitbook/assets/image (78).png" alt=""><figcaption><p>To this</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (85).png" alt=""><figcaption></figcaption></figure>

Once the driver is seated, We need to export these settings. And for that we need to select the DRIVER\_DRIVER node while being in pose mode.

<figure><img src="../.gitbook/assets/image (51).png" alt=""><figcaption></figcaption></figure>

And then using these options to export : Fix DRIVER:DRIVER and export "driver\_pos.knh"\
<br>

<figure><img src="../.gitbook/assets/image (229).png" alt=""><figcaption><p>Important to also select "Selected Objects"</p></figcaption></figure>

Bear in mind that this is used to set not animation constrained bones, mainly the head bone. For example, if you export solely the steer.ksanim, the head will be tilted using the default values<br>

<figure><img src="../.gitbook/assets/image (39).png" alt=""><figcaption></figcaption></figure>

Despite moving the head bone however you want, if you don't do this step the head will remain like this.

<figure><img src="../.gitbook/assets/image (40).png" alt=""><figcaption><p>oh a penny inside my cockpit, lucky me</p></figcaption></figure>

Now that the body is in place, we need to deal with the most annoying parts : the hands.\
\
Take your STEER\_HR node, and create an animation that has 100 frames. We will use the same values than the Wheel\_Rotation.

<figure><img src="../.gitbook/assets/image (41).png" alt=""><figcaption></figcaption></figure>

Every 25 frames, add a 180°. So that in the frame 100 you reach 720°, once done, set yourself to the frame 50, this will be the start of the animation. 50-100 will be for right steering, 0-50 for left steering.\
\
We need to move the hands and finger correctly at frame 50 so that it fits the steering wheel.

<br>

<figure><img src="../.gitbook/assets/image (42).png" alt=""><figcaption><p>what are you squeezing step bro</p></figcaption></figure>

These 2 green cube are what will move the whole arm, move them toward the steering wheel

<figure><img src="../.gitbook/assets/image (43).png" alt=""><figcaption></figcaption></figure>

The objective is to make the palm rest on the grip. This is the most important, don't mind yet how the finger enters the steering wheel, we will adjust that later.

Once you moved the green cubes, you will see that the hands look painful in that position.

<figure><img src="../.gitbook/assets/image (44).png" alt=""><figcaption></figcaption></figure>

We then rotate the cube to make the hand look better (you will move the cube also a little to replace correctly the hands)

<figure><img src="../.gitbook/assets/image (45).png" alt=""><figcaption></figcaption></figure>

Great now the position looks perfect. We need to save the position of the hands, on frame 0. Select a cube, then press I on the rotation/position to save the coordinates. It's important that both position and rotation are saved, by default only the rotation of the cube is saved. Once the rest position of the hands are done, save them for frame 0, frame 50 and frame 100. They need to have the exact same position for the hands.

<figure><img src="../.gitbook/assets/image (46).png" alt=""><figcaption></figcaption></figure>

Now move the animation to the next frame, it will generally be the steering wheel rotated to 90°. You will need to redo the same thing again. Moving the cubes so that it fits the steering wheel

<figure><img src="../.gitbook/assets/image (47).png" alt=""><figcaption></figcaption></figure>

For Formula 1 modder like me, this is where the biggest issue arise. Starting the 3rd frame, the hand will move out of the wheel because it is programmed to replicated what we do with a round steering wheel. Except for Formula steering wheel, we don't let the wheel go since it's not supposed to do 720°\
\
So when we reach what the steering wheel should look like 180°, it would do Gagnam Style on you

<figure><img src="../.gitbook/assets/image (48).png" alt=""><figcaption></figcaption></figure>

Unfortunately, while in this mode, the cube will have absolutely no effect on the hand. Meaning this time you will have to switch to bones view, and modifyint the position of the bones manually. Which is why you should focus for now on doing all the frames where the cube has an effect, and let the gagnam style for later\
\
Once all frames where the cube has an effect, is done the animation should look like this&#x20;

<br>

{% embed url="https://youtu.be/DgGCM5r8yR0" %}

Once it's done, you can export the driver the animation to Assetto Corsa using these settings<br>

<figure><img src="../.gitbook/assets/image (49).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../.gitbook/assets/image (50).png" alt=""><figcaption></figcaption></figure>

When saved, you then need to have in driver3D.ini the LOCK value to 360.\
\
And what you did as an animation will work correctly in showroom.
