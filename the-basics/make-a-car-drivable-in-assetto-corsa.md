# Make a car drivable in Assetto Corsa

Assetto Corsa doesn't see the car, all it sees is empties. So in order to be able to drive a car, we need 5 Empty :&#x20;

WHEEL\_LF WHEEL\_RF WHEEL\_LR WHEEL\_RR  \
SUSP\_LF    SUSP\_RF    SUSP\_LR    SUSP\_RR\
STEER\_HR



The first family of empty is the tire and its component that is spinning. It's the Empty that is removed during the pitstop for a tire change.&#x20;

SUSP\_LF is not the suspension, but it's more like the caliper. It turns left and right along the tire, but it doesn't spin nor is removed during a pitstop.

Finally STEER\_HR is the steering wheel.&#x20;



So we load our car in Blender,&#x20;

<figure><img src="../.gitbook/assets/image (175).png" alt=""><figcaption></figcaption></figure>

By default, Blender points the Z axis to the sky, while Assetto Corsa needs the Y to be at the top, so rotate the empty by 90° on the X rotation. \
\
Aim the center of the empty to be exactly at the center of the tire

<figure><img src="../.gitbook/assets/image (110).png" alt=""><figcaption><p>Be very precise, don't hesitate to zoom in and aim carefully</p></figcaption></figure>

Once it's done, it should look like this

<figure><img src="../.gitbook/assets/image (109).png" alt=""><figcaption></figcaption></figure>

You can copy past the WHEEL\_LF empty and name it as SUSP\_LF and that's two done. Copy those two and put a - in the X coordinate to mirror it to the other side, and name them WHEEL\_RF and SUSP\_RF Repeat the process for the other 4 on the back.

Once it's done, you have to parent the object related to the empty it belongs to.&#x20;



For example, the tire and rim must be parented to the WHEEL\_LF empty, and the caliper must be parented to SUSP\_LF

<figure><img src="../.gitbook/assets/image (92).png" alt=""><figcaption></figcaption></figure>

Now that this is done, we can now do the STEER\_HR empty for the steering wheel.\
\
Same as before, Y must be pointed toward the sky, and the center of the empty is the point of rotation. So you should also aim carefully. Then again parent every objects tied to the steering wheel that is supposed to move to STEER\_HR

<figure><img src="../.gitbook/assets/image (156).png" alt=""><figcaption><p>Steady......Steady</p></figcaption></figure>

Now that this is done, you should finally have all the empties done

<figure><img src="../.gitbook/assets/image (172).png" alt=""><figcaption></figcaption></figure>

Congratulation, you have done the bare minimum to be able to drive this car. Now let's move on the other parts to make the car more complete
