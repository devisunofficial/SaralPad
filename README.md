# SaralPad

SaralPad is a 12 key macropad with two rotary encoder, an OLED Display. It uses QMK firmware

It focuses on minimalism and ease of getting work done with as minimum clicks as possible. For this it uses 3 profile layer in firmware for normal, browser and coding use.

### Features:

 - Compact design but strong because of middleplate.
 - 128x32 OLED Display
 - EC11 Rotary encoder for whatever you want.
 - 12 Keys

### CAD Model:
Everything fits together using 4 M3 Bolts and heatset inserts.

It has 3 separate printed pieces. The backplate, the Middle plate to support pcb, and Top to cover electronics.
![Complete Saralpad](CAD/Assetes/case_img2.png)
Made in Autodesk Fusion.

### PCB:
Here's my PCB! It was made in KiCad. 

Schematic : ![Complete Saralpad](PCB/Assets/pcb_sch.png)
PCB Footprint : ![Complete Saralpad](PCB/Assets/pcb_footprint.png)

### Firmware Overview:
Currently Firmware is underdevelopment so there is some time to finished product.
This Hackpad uses QMK Firmware for everything.
Features after completion:
 - Different key profile for different uses(Browsing, Coding, Gaming, and much more). 
 - One Rotatory encoder to change profile.
 - Oled Display to show key profile and different data about computer(Don't know if later is possible)

 I might add more in the future! That's it for now.

### BOM:
 - 12x Cherry MX Switches
 - 12x DSA Keycaps
 - 4x M3x5x4 Heatset inserts
 - 4x M3x16mm SHCS Bolts
 - 4x M3x16mm SHCS Bolts
 - 14x 1N4148 DO-35 Diodes.
 - 1x XIAO RP2040
 - 1x 0.91" 128x32 OLED Display
 - 2x EC11 Rotary Encoder
 - 1x Case (3 printed parts)
 - 1x PCB
 S. No.,Name,Purpose,Quantity,Total Cost (USD),Link,Distributor
1,"Rotatry Encoder","Fidget Toy and Switches",1,3.00,"https://www.amazon.in/CentIoT-Encoder-Digital-Potentiometer-Control/dp/B0888RVZSN?dib=eyJ2IjoiMSJ9.5juthjEg2zJGwelGn8I2ZLRpGxI_Zypez8mWFc6VjiC4uMSiCSIojGzsGRmV71Km39BEu4TwZ3tFAWkCa6KwlUX-YGtpa-I-r4SUZSZ07xfdq-euNNbIL0Q0TDwMEJGTzdbUtKfgIA5yUuILl3LVCdHWjvklSv-2j7dEixy5-Kum0zHiT1tfcx2QoXglHpNefzkqfElzjso_X4GJ2-tedlv8nu2uDJH7oEKK0FJp-67mgWZTbGZg9liyLTUx_CpGYsQsBtm1_LvjLg2PLYO6WXls2ao4Hw3agXHDvVweHUA.jEN-Y61XZlQ_lQk-HzscZZjHMJiKe9EFq8ANm-3WZWg&dib_tag=se&keywords=rotary+encoder&qid=1780830174&sr=8-11","Amazon"
2,"Enclosure","Keyboard Body",1,8.00,"https://jlc3dp.com/3d-printing-quote","JLCPCB"
3,"PCB","Circuit to Attach Components",1,3.00,"https://jlcpcb.com/user-center/orders/?_t=1780829798859","JLCPCB"
4,"Switches","Keyboard Switch",1,18.00,"https://www.amazon.in/Switches-Equivalent-DIY-Replacing-Mechanical-Keyboard/dp/B073WC1NXL?crid=1CT47B8FQ55JT&dib=eyJ2IjoiMSJ9.N6ZfjV8IRTrhKAskfFoeoXr9ofBbnqLDumm-tcd3b1ZU8Eik0aDTRfHQnANzsFgiHMHO68Wdk6irb5ZLoQGCmuXrTKGqm37sAaj7uuD2JmYwtDNDLo1JuBQxGeTkE91PrpZ23QBkh30BN0bLNDKCPz6chqYLSfIN_iqlrAin_mrSGdLheJucycLZaJUcetkZYXh1f2j8bQeGn_j5XaN9DXXnrBKU4U0F1mE8eBdFfDE.CCGkMuDDbQY9HiqfydAFPKpxchnJM0hxPQsUC4va17Y&dib_tag=se&keywords=Cherry%2B3%2Bpin%2Bswitch&nsdOptOutParam=true&qid=1780829602&sprefix=cherry%2B3%2Bpin%2Bswitch%2Caps%2C272&sr=8-8&th=1","Amazon"
5,"Oled Display","Version Display",1,4.00,"https://www.amazon.in/Robocraze-Display-Module-Interface-Arduino/dp/B084H9HLCS?crid=3OD6WE0FGU4LG&dib=eyJ2IjoiMSJ9.h1p5B8JGgGKqduUpYWgqnGGiIcT4U-Ky_IJr-nDu_SReo1qMB-3RN96MYa-WdXwS_G6wMw53VFMgjSiG8jMOIW5t5GQDGgvE_mzcGxlRny-Pu6B1g9SbAX21OFmIQuBrFWGme8swgGPPwELkRBck94UzMN8Fvki5GoHX6VBXpMFTMrcRYiL6ua4orPM8gW8XGeaY0Akzbg5i_0YAxg_C-6CNwdTvCihY4Y4crPrpnk6jG7S4SDbUCrcKvjhF5a3XHCRgC48SkFyaWL9HHQROZz_JcPZnGIdpj9s77LK0Ih0.vrcDZoxg11H76TpUwnCaaJB3nPNxnN9c-y9352Mus3Y&dib_tag=se&keywords=0.91%2Boled%2Bdisplay&qid=1780829487&sprefix=0.91%2Boled%2Bdispla%2Caps%2C279&sr=8-2&th=1","Amazon"
6,"XIAO RP2040","Microcontroller",1,24.00,"https://www.amazon.in/Seeed-Studio-XIAO-RP2040-Pre-Soldered/dp/B0DRNTQ338?crid=3268XFE9P536V&dib=eyJ2IjoiMSJ9.Ha8RDUvuRs1tuqytn2i2Gvys79uQm5ufSuFkQy9VRK0ig20_Q8LyVSWFSWvxdsfq7WfVgXS5D0wAJ_-KUivrGndBjHb4wANk3mJtnivTxQmfW1dVSccMWNne8nmWycMXf_FZNqp6f4iAzbW5oMsv9Dq3lVswvVfHWkk7pDdLnnS_xHAnJ-92efFhGGJrlp0wD4cPoqtK4g2krUM7O2YCdoTThxkvE-fZNOlIT-FPLm4.xQ1Bvj5nLHvOFLw1XXcRc8SsjdLKA8JFH89hkH2eOjk&dib_tag=se&keywords=XIAO+RP2040&qid=1780826521&sprefix=xiao+rp2040%2Caps%2C273&sr=8-6","Amazon"

 ### Extra Stuff:
 Learned few new things, realised I have short temper and I am quite dumb in some cases.
 Don't know what should I add more. 
 For future : I submitted this during war, I thought of not completing it as (not going to state as it is obvious), just tell   me my future-self :- Would you have regretted if hadn't submitted?
