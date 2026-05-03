# Adjusting the car to the physics

&#x20;that's it you have the kn5 built, you have a physics surrounding you car and can't wait to drive. But when you drive or use the align data in Custom Showroom, this happens : &#x20;

<figure><img src="../.gitbook/assets/image (220).png" alt=""><figcaption><p>Sami you're wrecking the car SAMI!!</p></figcaption></figure>

1 the car will not be at the correct height, 2 the tyres are not aligned with the car correctly (and 3 if you didn't parent correctly the calliper to SUSP\_LF like in this case, the game won't recognize it so it won't turn nor stick with the tyre)



You can fix it by editing two files, car.ini and suspension.ini

```
[BASIC]
GRAPHICS_OFFSET=0,-0.05,0.07
```

This is the x y z value used to move the body of the car, if you need to make the car higher or lower you know what to edit. You must always try to stay within the collider

<figure><img src="../.gitbook/assets/image (199).png" alt=""><figcaption></figcaption></figure>

Note that only the suspension follows the car, the collider wing and fuel tank doesn't move with this option. You can move the car from up to down, but if you want to move it left to right the best is to change the Z position of the car in blender in the space and save it again as kn5, if you change the Z position in the car.ini the car stays at the same position but the other component moves.

<figure><img src="../.gitbook/assets/image (200).png" alt=""><figcaption><p>Wait a moment</p></figcaption></figure>

Only the collider doesn't move, but the other physics component does. It is essential that your car is perfectly aligned there with the physics component.

Once your car doesn't bite the dust and is aligned, we can now take care of the wheels.

Open suspension.ini and check for 4 values

The first two global values :&#x20;

```
[BASIC]
WHEELBASE=3.285
CG_LOCATION=0.46
```

WHEELBASE moves the front tire and rear tire closer to each other or further

<figure><img src="../.gitbook/assets/image (93).png" alt=""><figcaption></figcaption></figure>

CG\_LOCATION moves both tire forward or backward

<figure><img src="../.gitbook/assets/image (134).png" alt=""><figcaption></figcaption></figure>

Now let's see what we can do with the front tire and rear tire separately

```
[FRONT]
TYPE=DWB
BASEY=0.12019890719754
TRACK=1.432
RIM_OFFSET=0.02
ROD_LENGTH=0.00999999999999989
HUB_MASS=27
WBCAR_TOP_FRONT=0.6759,0.0712,-0.022
WBCAR_TOP_REAR=0.6764,0.0675,-0.4856
WBCAR_BOTTOM_FRONT=0.7054,-0.1473,0.0125
WBCAR_BOTTOM_REAR=0.7049,-0.1435,-0.425
WBTYRE_TOP=0.1097,0.0818,-0.0228
WBTYRE_BOTTOM=0.0754,-0.1548,0.002
WBCAR_STEER=0.6764,0.0678,0.03
WBTYRE_STEER=0.10651,0.0782,0.025
TOE_OUT=0.0003
STATIC_CAMBER=-2.0
```

BASEY is the height of the front side of the car on the Y axis. You can make it lower or higher depending on your needs

<figure><img src="../.gitbook/assets/image (174).png" alt=""><figcaption><p>ready to take off, like alonso in austin</p></figcaption></figure>

TRACK is how close both front tires are between them.

<figure><img src="../.gitbook/assets/image (135).png" alt=""><figcaption><p>This is a drag car, not a F1</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (196).png" alt=""><figcaption><p>Is this Francesco Bernoulli?</p></figcaption></figure>

The same applies to the \[REAR] category.



The last thing, is to make sure the Wheels fit the tire, for that you can edit the Width and radius values inside tyres.ini

<figure><img src="../.gitbook/assets/image (96).png" alt=""><figcaption></figcaption></figure>

If the radius is not at the correct size, and is for example smaller than the physical tire, then this can happen

<figure><img src="../.gitbook/assets/image (54).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../.gitbook/assets/image (218).png" alt=""><figcaption><p>Rip</p></figcaption></figure>

So you need to be careful with this value if you don't want your tire to hover on the ground or go through

Now you're all set ! you can finally drive the car on Assetto Corsa !
