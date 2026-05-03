# Suspension

Driving an F1 car with stiff suspension gives a weird feeling, so let's animate those with DIR.\
You can also animate them using fbx animation, but DIR\_ is superior for the suspension.

3DSmax users have a DIR\_ helper tool, which we don't have in Blender. It's not much of a problem, you just won't be able to see if how you did your DIR\_ is correct or not until you go into the game.

How does DIR\_ work? It's simple

<figure><img src="../.gitbook/assets/image (223).png" alt=""><figcaption><p>I should have listened during art class</p></figcaption></figure>

DIR\_SUSP1 is the empty whose origin will be the point which the X axis of the empty SUSP1 will point toward. If DIR\_SUSP1 moves down, then SUSP1 will rotate so that its X-axis still points toward the center of DIR\_SUSP1. It does not matter how the DIR\_SUSP1 is rotated as only the center is considered. In our example, you can see that there is a little head parented to the empty. So when the empty rotates, then the head too rotates. This is what we will take advantage of to animate the suspension.

As for the naming, the DIR prefix must be added to the name of the empty that is the parent of the object you want to animate. If the empty is called SUSP1, then the DIR is DIR\_SUSP1.\
\
As for how we parent both empties, we will see that in the example below.

You can either do it the lazy way for cars whose suspension are simple, like here&#x20;

### Lazy way

Copy SUSP\_LF, name it DIR\_SUSP1 and parent it to SUSP\_LF, then copy again SUSP\_LF and move it on the X axis so that the center of the empty is at the edge of the suspension. Then you parent the suspension object to the SUSPX empty.

<figure><img src="../.gitbook/assets/image (137).png" alt=""><figcaption></figcaption></figure>

This is what you should get

<figure><img src="../.gitbook/assets/image (227).png" alt=""><figcaption><p>The susp, and the Dir point</p></figcaption></figure>

Do that for the other 4, pay attention that for the right side you need to rotate the empty so that X faces toward the tire!

<figure><img src="../.gitbook/assets/image (108).png" alt=""><figcaption></figcaption></figure>

Congratulation lazy guy, you animated the suspension in 2 min. But what if you have some shame unlike me and want the suspension to be perfect?

### The correct way to do DIR\_

We will use the W12 car which has a more complex suspension

<figure><img src="../.gitbook/assets/image (95).png" alt=""><figcaption><p>Empties everywhere</p></figcaption></figure>

Let's take for example the steering arm, we can see that the arm is connected to two parts, one to the chassis and one to the caliper. The caliper part is static and merged with the caliper, so the edge of the steering arm is supposed to rotate with it if the wheels turn left and right.\
On the other side, the steering arm is connected to the chassis with a moving part. It goes inside and out of the chassis. \
\
Knowing that it's clear where we are supposed to put the origin of the SUSP empty and the origin of the DIR\_ empty

<figure><img src="../.gitbook/assets/image (164).png" alt=""><figcaption><p>brought to you by paint.exe !</p></figcaption></figure>

A little exercise for you : How do we know who is parented to who? And where should I place my empties ?

it's important that you remind yourself about 3 points :&#x20;

What is static?

What is supposed to move?

Where is it supposed to point toward?



If we answer the question, it's simple

**What is static?** The edge that connects to the calliper. Like that when the calliper moves, the steering arm moves along and doesn't disconnect.

**What is supposed to move?** The steering arm is supposed to move in and out of the chassis body. If we parent the steering arm to the chassis it will not move in and out. It will only rotate toward the DIR\_ empty.

**Where is it supposed to point toward?** The steering arm, connected to the calliper must be pointed toward the little hole in the chassis. So we put the DIR\_ empty inside the hole of the chassis.

Let's do another suspension

<figure><img src="../.gitbook/assets/image (146).png" alt=""><figcaption></figcaption></figure>

This one is up and down since it's the rear tyre. So it's even easier.\
Both sides can host the susp empty and the DIR empty. But it's easier to do the DIR\_ on the calliper side and the SUSP empty on the chassis.

<figure><img src="../.gitbook/assets/image (123).png" alt=""><figcaption></figcaption></figure>

Save the car, and export it. You will see your car with an animated suspension moving fine now.
