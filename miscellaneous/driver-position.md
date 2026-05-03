# Driver position

You have converted your car but the driver is out of place? Or his animation doesn't fit? Let's fix this.



The first thing to do is to find a steer.ksanim that is used on a similar steering wheel that you are using, or even better, animate the driver yourself (but for now it's too complex for me so I won't be covering this for now)

Once you have found a steer.ksanim that would match your car (and put it in the animations folder), you can move the driver using Custom Showroom by loading the driver, and ticking the Movable Driver option. Then press the T button to show a 3D Sphere on top of the driver.

<figure><img src="../.gitbook/assets/image (151).png" alt=""><figcaption></figcaption></figure>

You can move the driver left right, up and down and even rotate it using that 3D sphere arrows. Once the position is good, you can do Save Pos.

If the steering animation is too fast (or slow) for the steering wheel, this can happen :

<figure><img src="../.gitbook/assets/image (163).png" alt=""><figcaption></figcaption></figure>

Open driver3D.ini

```
[MODEL]

NAME=driver_FVA10

POSITION=0,0,0


[STEER_ANIMATION]

NAME=steer.ksanim

LOCK=360

```

NAME= is the name of the driver.kn5 used, if you use a driver model with a custom helmet for example you can use the name of said model. For example, in my FVA mod I use FVA helmet on a custom driver.kn5 file so I use the name of said kn5 which is driver\_FV10.kn5

In steering animation, it's just the name of the steering animation.

Now onto what matters now, the LOCK value is what will set the speed of the hand animation. A good way to fix it is to turn the wheel, then edit the value and see the changes live. Make sure that the hand is correctly placed on the steering wheel and save that value.

<figure><img src="../.gitbook/assets/image (130).png" alt=""><figcaption><p>Perfect now</p></figcaption></figure>



