# TyresFX

One of the coolest CSP features is the fact that you can change the tyre compound skin in the game when you change the compound, this allows for better immersion in the game. If you want to add this feature in you car then it's easy........... As long as you meet the requirement.



TyresFX Only supports one texture. And it will apply it to anything on the car that has the ksTyres shader set. If you have a different texture for the tyre side and tyre tread, then you're out of luck.&#x20;

You need to have the same texture for both, so try to merge the tread and tyre side texture in a single texture. Like here&#x20;

<figure><img src="../.gitbook/assets/image (102).png" alt=""><figcaption><p>Tread on the center</p></figcaption></figure>

Once you have your texture, you create an extension folder inside your car and create an ext\_config.ini

```
[TYRES_FX_CUSTOMTEXTURE_SS]
TXDIFFUSE=FCM_Tire_S.dds
TXBLUR= FCM_Tire_BLUR_S.dds
TXNORMAL = FCM_Tire_NM_2.dds

[TYRES_FX_CUSTOMTEXTURE_S]
TXDIFFUSE=FCM_Tire.dds
TXBLUR= FCM_Tire_BLUR.dds


[TYRES_FX_CUSTOMTEXTURE_M]
TXDIFFUSE=FCM_Tire_H.dds
TXBLUR= FCM_Tire_BLUR_H.dds

[TYRES_FX_CUSTOMTEXTURE_H]
TXDIFFUSE=Hard.dds
TXBLUR= Hard_blur.dds
TXNORMAL = FCM_Tire_NM_2.dds

```

SS, S, M, and H are the name of the compound. You can find them on tyres.ini

You then write the name of the texture you want to use for each compound, TXDIFFUSE being the skin.

You generally only need to change TXDIFFUSE and TXBLUR, but you can also change the normal map of the tyre if, for example, you want to have wet tyres. In that case, add a TXNORMAL= line and use the tyre normal map texture you want to replace with.

