# Decrypt Rfactor mods

## Preparing the environment

First you need to download the [toolset](https://cdn.discordapp.com/attachments/1013482325721485442/1037785793068019762/gmt.zip)

extract the gmt folder inside the C: root directory.



<figure><img src="../.gitbook/assets/image (80).png" alt=""><figcaption></figcaption></figure>

Find the .mas file of the car that contains all the part you want, for example for CTDP mod it's form.mas (it's generallt the mas file that weight the most)

We first need to extract the gmt file from it, so we open a cmd window

<figure><img src="../.gitbook/assets/image (228).png" alt=""><figcaption></figcaption></figure>

drag and drop the MAS2File exe on the cmd window to automatically past the path of the exe. Press space then drag and drop the mas file we were talking about, then add another space and write the path where you want to extract the gmt file (you can just chose C:gmt)

<figure><img src="../.gitbook/assets/image (154).png" alt=""><figcaption><p>example of the command</p></figcaption></figure>

now that all gmt files are inside the gmt folder we can start decrypting them

<figure><img src="../.gitbook/assets/image (138).png" alt=""><figcaption><p>all the gmt are in the gmt folder</p></figcaption></figure>

```
c:\gmt\find c:\gmt -exec c:\gmt\rfactordec -o "{}" "{}" ;
```

Insert this command in the cmd and it will start to decrypt automatically all gmt file

<figure><img src="../.gitbook/assets/image (225).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../.gitbook/assets/image (81).png" alt=""><figcaption></figcaption></figure>

You can now load the gmt file in 3Dsimed, find the correct texture of the part you need and apply it (for example the skin)

