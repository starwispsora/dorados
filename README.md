***

######31Jul <br>
message <br>
 - message interface = message form : <br>
    1)topic(name,type): +pkgxml, +cmakelist -> pub-sub -> compile -> run<br>
    2)service(name,type) <br>
    3)action(name,type) <br>

***

######1Aug <br>
 - the day actually run and controlled my Turtlebot3 :
    +pkgxml, +cmakelist -> pub-sub -> compile -> run(controlled by keyboard) <br>
 - <my laptop - DDC - my bot (simple diagram)>
 laptop		
 node1		
 node2
(-vmware : subnet - NAT bridge(wifi network card) - ifcongif(192.100.14...))
-bring-up : open ros2 - ros2 launch turtlebot3_bringup robot.launch.py		
|
|
DDS(multi port<-UDP,TDP) (not safe in public  (X) 
DDS(router id:turtle, pw:turtlebot3) 	      (O)
|
|
bot
turtlebot3 (Raspberry Pi) <br>

***

<running order>
1)link router <br>
(2)vmware connect) <br>
3)bring-up : open ros2 - ros2 launch turtlebot3_bringup robot.launch.py <br>	
4)`turtlebot3 <br>

***

<turtlebot3 info>
- 12v <br>
- volocity limit : 3m/s <br>
- 2moters : DC moters(simplest way we can set up)(diameter cell) <br>

***

 - http://192.168.14.1 <br>
 - admin-set up-network-LAN <br>
 - nb(mine 02, turtlebot=burger) <br>
 - ssh ubuntu@192.168.14.50  <br>
 - apt list --upgradable  <br>
 - nb(turtle's 02, turtlebot=burger) <br>

 ***


<on terminal> <br>
 - ros2 launch turtlebot3_bringup robot.launch.py  <br>
 - ros2 run turtlebot3_teleop teleop_keyboard <br>

***

<on vscode>  <br>
 - vscode open remote : SSH - ubuntu@192.168.14.50 (turtle's) <br>
 ***
------------------------------------------------------------------------------
<gazebo simulator>
 - install(on my laptop)
 - run : "gazebo"
 - stop : "killgazebo" (to abvoid gazebos conflict)
------------------------------------------------------------------------------
unset GTK_PATH : qt.qpa.plugin: Could not find the Qt platform plugin "wayland" in ......
