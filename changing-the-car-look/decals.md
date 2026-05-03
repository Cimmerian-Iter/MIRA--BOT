---
description: Our biggest problem, now defeated !
---

# Decals

Codemaster cars all have horrible mapping. Making the decals from scratch with it is a lot worse than walking feet naked on a knife road. Until now, we had two solutions. Either we use the psd template from here where it already has the decals mapped, we just need to import it in blender as .obj and make it fit the car. Or we use Blender shrinkwrap option.



Fortunatey there is an even easier method called 3DSimed !

<figure><img src="../.gitbook/assets/image (119).png" alt=""><figcaption></figcaption></figure>

First, select the material which has the decal, you can see that it is on Channel 1.

select the 7th icon (edit texture channel coordinate) on the top right and do Copy UV -> Channel 1 to Channel 0

<figure><img src="../.gitbook/assets/image (70).png" alt=""><figcaption></figcaption></figure>

And select the decal texture as the main texture&#x20;

<figure><img src="../.gitbook/assets/image (187).png" alt=""><figcaption></figcaption></figure>

Congratulation you have a black car with decals on it! Now onto the next step, let's merge the decal and the livery.

Export the car as is to .dae and import it in blender.

The first step is to remove everything that isn't the body.

<figure><img src="../.gitbook/assets/image (214).png" alt=""><figcaption></figcaption></figure>

Now select the mesh, and separate it by material

<figure><img src="../.gitbook/assets/image (76).png" alt=""><figcaption></figcaption></figure>

Now keep only the parts that have REDBULL\_05 as material (which is the material on which the decal is applied)



<figure><img src="../.gitbook/assets/image (141).png" alt=""><figcaption></figcaption></figure>

Time to merge, export this, and get back to the car you were working with. Go in render mode now.

\*wait for 10 minutes for my weakass intel GPU to render it\*

<figure><img src="../.gitbook/assets/image (208).png" alt=""><figcaption></figcaption></figure>

Ok well, of course adding the decals like that won't magically fit the car, since both are the same size and position they are interfering with each other. So now there is two way of doing it.



Either you're lazy, and you change the scale to 1.002 so that the decals get out of the car, or you cut the body which has the decals in multiple pieces. Each object must contain one sponsor, and you move them by 0.001m

<figure><img src="../.gitbook/assets/image (71).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../.gitbook/assets/image (171).png" alt=""><figcaption></figcaption></figure>

Either way, you should get this result in the end, if you don't like the black thing, then just set the blend mode to alpha blend so that transparency is applied.



And it's done, you have your decals applied on the car !
