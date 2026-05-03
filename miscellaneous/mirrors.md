---
description: 'Stroll : What''s that?'
---

# Mirrors

If you want working mirrors, either follow the AC pipeline, or do this simple thing



<figure><img src="../.gitbook/assets/image (181).png" alt=""><figcaption><p>Select the mirror object, and copy its name</p></figcaption></figure>

then open mirrors.ini and add this

```
[MIRROR_0]
NAME=CAR_Mirror_R

[MIRROR_1]
NAME=CAR_Mirror_L //since my left mirror is called like that
```

You are assigning an object to be a mirror, and it will be recognized as such in the game

<figure><img src="../.gitbook/assets/image (162).png" alt=""><figcaption><p>Magic</p></figcaption></figure>

No need for a specific texture or shader.
