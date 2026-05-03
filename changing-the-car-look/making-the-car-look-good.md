# Making the car look good

Congratulation, you exported your car in .kn5 and can't wait to drive it



<figure><img src="../.gitbook/assets/image (89).png" alt=""><figcaption><p>Black Panther !</p></figcaption></figure>

Yeah, it doesn't look nice at all. And it's normal because until here we haven't touched the shader settings.\
\
There is 2 things needed to make the car look good : proper shader and textures, and the right shader values.

The first one is set with kseditor when you build the car, the second one is done through Content manager.



### What is a shader?

Shaders are what will define the look of said part in Assetto Corsa. There is a lot of shaders proposed by Assetto Corsa for whatever you want to do. You have shaders for tires, for the windscreen, you have shaders that make something more reflective, you can also have a shader that supports car damage, in short : it's the first step in making your car look good.

Now you may know probably 2 shaders already that are widely used in many mods : ksperpixel which is the default shader, and ksperpixelMultiMap.&#x20;



Now let's see some examples :&#x20;



#### Ksperpixel&#x20;

<figure><img src="../.gitbook/assets/image (158).png" alt=""><figcaption></figcaption></figure>

This shader is often used for small details that just need to appear on the screen. It's the most basic shader as you can see. It only supports one texture file which is the skin of the object.

This shader is not really to be used with dark objects as setting it incorrectly can lead to....annoying results when the sun will face the object

<figure><img src="../.gitbook/assets/image (182).png" alt=""><figcaption><p>1 2 3....</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (166).png" alt=""><figcaption><p>Soleil !</p></figcaption></figure>





#### KsperpixelNM

It is the same shader as ksperpixel although now it supports a normal map texture. What is a normal map? It's a texture that is used to give depth to an object.&#x20;

<figure><img src="../.gitbook/assets/image (103).png" alt=""><figcaption><p>It's 2D, but you have a feeling it's 3D</p></figcaption></figure>

This is used when you want to add details on a specific part. For example, it is used to add fabric details on the gloves or even for tyre texture with wet tyres ! Since the original object is flat, if you want a wet tyre texture but can't edit the tyre object to make it non-flat, you can use a normal map.

Another effect of the Normal map is a light reflection on the object, since there is a depth on the object, the light won't be evenly spread out on the object.

<figure><img src="../.gitbook/assets/image (226).png" alt=""><figcaption><p>Credit : Vincent Picole Youtube</p></figcaption></figure>



#### KsperpixelMultiMap

One of the mainstream shaders used it's the one generally used for the car body look. \
\
It supports 4 textures : txDiffuse (the skin) txNormal (the normal map) txMaps (the AO map) and txDetails.



What is an AO map? it's the texture that will simulate the shadows that occurs on the edges and curves, it will make the lightning on the car more realistic. It is a very necessary component that people should not neglect as it is essential if you want your car to look as good as possible. Fortunately, Content Manager once again saves us the trouble and can create an AO map automatically. Just select the 3 dots on the txdiffuse texture and calculate AO

<figure><img src="../.gitbook/assets/image (177).png" alt=""><figcaption></figcaption></figure>

You can select the resolution of your AO map, the bigger the better, especially if it matches the skin resolution. You can also use the show option and use the body preset for a body AO map, or the Rim preset if you want to do an AO map of the rim.



What about txDetails ?

This is something that will tweak the car look. I usually use the ACspecular.dds but you can use other textures such as Metallic.dds to have a metallic look on your car

<figure><img src="../.gitbook/assets/image (53).png" alt=""><figcaption><p>Credit : Val_N in Assetto corsa forums</p></figcaption></figure>



####

if you want to add more features to your car such as damage or dirt you can use ksperpixalMultimap\_Damage\_dirt



Kunos F138 :&#x20;

<figure><img src="../.gitbook/assets/image (120).png" alt=""><figcaption></figcaption></figure>

#### KsTyres

This is necessary for the tires texture, it will ask you 5 textures : the tire default skin and its normal map, one texture when the tire is dirty and the tire blurred skin and its normal map.

<figure><img src="../.gitbook/assets/image (194).png" alt=""><figcaption></figcaption></figure>

Usually txDirty can be ignored, as 90% of the player base use CSP which has its own tire dirty mechanism, txDirty is not used.

You have many more shaders, KsWindscreen, KsperpixelReflection etc etc, check the cars you think look good, and check the shaders used and the texture used. Try to understand the strengths and weakness of each shader with trial and error and you'll be able to have a nice-looking car. I myself use ksperpixelMultimap with skin, flatnm.dds, the AO map and acspecular.dds because I'm running on a 720p no post-processing Assetto Corsa so it does the job but further tweaking won't show much difference on a low config such as my PC. If you have a high-end computer, it's worth it to spend as much time on it.

### What values should I use

Having set the correct shader and texture is nice, but for now, the car still is black. This is the most important part and the most complex. Finding the right combination to have the perfect-looking car&#x20;



I will only explain the most important one as there is a lot of those values to tweak

KsAmbiant : set the ambient color of the object, regardless of the lighting.&#x20;

KsDiffuse : set the intensity of the diffusion of the color

<figure><img src="../.gitbook/assets/image (178).png" alt=""><figcaption><p>The effect of KsDiffuse</p></figcaption></figure>



<figure><img src="../.gitbook/assets/image (206).png" alt=""><figcaption><p>the effect of KsAmbiant</p></figcaption></figure>

KsSpecular is for the intensity of the sun rays applied to the car and how much they reflect on the car.

KsSpecularEXP can regulate those sunrays, the higher the value is, the less intense the sun rays will have an effect on your car

<figure><img src="../.gitbook/assets/image (179).png" alt=""><figcaption><p>The apocalypse is near, the sun will eat the earth</p></figcaption></figure>

#### KsEmissive&#x20;

It is used for making a particular color glow. Not generally useful for the car body but can be interesting for things such as LEDs

<figure><img src="../.gitbook/assets/image (113).png" alt=""><figcaption><p>I'm Blue dabedy dabeday</p></figcaption></figure>

KsAlpharef is how the sun rays will penetrate the object (set in alpha blend or alpha test, if the object has transparency such as windows)



#### FresnelMax Level

Makes the car more or less glossy

<figure><img src="../.gitbook/assets/image (140).png" alt=""><figcaption><p>without</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (101).png" alt=""><figcaption><p>With (1 is the maxium value for that setting)</p></figcaption></figure>

#### fresnelEXP

Kind of the same thing as SpecularEXP

<figure><img src="../.gitbook/assets/image (176).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../.gitbook/assets/image (122).png" alt=""><figcaption></figcaption></figure>

####

#### fresnelC

How metallic do you want your car to be on a scale of 0 to 1?

<figure><img src="../.gitbook/assets/image (222).png" alt=""><figcaption><p>without</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (167).png" alt=""><figcaption><p>With (when the car get the metallic mario powerup)</p></figcaption></figure>

#### UseDetail&#x20;

This is a parameter used to apply or not the txdetail texture

<figure><img src="../.gitbook/assets/image (159).png" alt=""><figcaption><p>The detail texture used is the skin.png, without it shows only txDiffuse which is a blank skin in my case</p></figcaption></figure>

#### DetailUvMultiplier

This will multiply the texture on the car. In my case, the skin UV mapping is done so that it covers the whole car, but if I multiply it by two it gives this result

<figure><img src="../.gitbook/assets/image (170).png" alt=""><figcaption></figcaption></figure>

The texture is now applied two times, and the UVMapping is changed so that the two skin.png can fit in the whole car. Set to 0 it will not use txDetails and instead will give you a black car.



I'll have explained the major parameters to set, there are many more depending on the shader you use and the best way to understand what they do is to do like me, change their values, and see the changes.

If a car looks great, you can use their preset on your car as a shortcut, then tweak the values to your liking. Custom Showroom can save the shader preset of any car you want. This is how we usually work.

