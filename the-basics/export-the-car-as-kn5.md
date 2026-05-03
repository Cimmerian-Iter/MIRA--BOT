# Export the car as kn5

Once you have finished converting your car, you can now export it as fbx and build it with kseditor.



You need to export your car at scale 0.01, and have a texture folder that contains every texture needed for the car

<figure><img src="../.gitbook/assets/image (75).png" alt=""><figcaption></figcaption></figure>

Load the fbx in kseditor and you will have a super UI (no) to build your car !

<figure><img src="../.gitbook/assets/image (88).png" alt=""><figcaption></figcaption></figure>

The top right is how your car look, don't bother too much with this we won't use kseditor for the graphical aspect of the car

The top left is the list of components of your car. The same as Blender, and the material tab will be the settings for each material.

On the bottom, you will have options for each object you will select.&#x20;

So now what do we do?&#x20;

First, we check in the materials tab at the bottom that each material has a texture, otherwise, kseditor won't build the car

<figure><img src="../.gitbook/assets/image (161).png" alt=""><figcaption></figcaption></figure>

Select the texture name on the bottom list and its information should appear on top. You can edit the shader used, like ksperpixel, ksperpixelMultiMap, and more. As well as the texture it uses on its channels.

Once you have set your options correctly you can now save the .kn5 and export your car !&#x20;

In order for Assetto Corsa to know what is the car kn5, it uses the lods.ini

```
[LOD_0]
FILE=fva_f10b.kn5
IN=0
OUT=1000

```

For example, my kn5 is called fva\_f10b.kn5 so I write this name in the file. If I want to have more LODs, I can add them to the file after creating them (Content Manager can create LOD) and add another LOD section in the file. Then edit the IN and OUT values to tell Assetto Corsa at which distance from the player's POV the game should switch the kn5. In that case, past 1000 meters, the kn5 won't be shown anymore in the player's field of vision.

Note : You can save the shader preset thanks to the persistence file, the little .ini that has the same name as your fbx. It contains information about the shader tied to each material. It can avoid from having to set that each time you want to build the car. By default, if you extract the car from Custom Showroom, it generates a persistence file with.
