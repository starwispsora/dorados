***

###### 31Jul <br>
message <br>
 - message interface = message form : <br>
    1)topic(name,type): +pkgxml, +cmakelist -> pub-sub -> compile -> run <br>
    2)service(name,type) <br>
    3)action(name,type) <br>

***

###### 1Aug <br>
 - the day actually run and controlled my Turtlebot3 first time : <br>
    +pkgxml, +cmakelist -> pub-sub -> compile -> run(controlled by keyboard) <br>

***

<my laptop - DDC - my bot (simple diagram)>  <br> 
 laptop <br>
 node1 <br>	
 node2  <br>
 - bring-up : open ros2 - ros2 launch turtlebot3_bringup robot.launch.py  <br>		 
| <br>
| <br>
DDS(multi port<-UDP,TDP) (weaker security)  (X) <br>
DDS(router id:turtle, pw:turtlebot3) 	      (O) <br>
| <br>
| <br>
turtlebot3 (Raspberry Pi) <br>

***

<turtlebot3 running order>  <br>
1)link router <br>
(2)vmware connect) <br>
3)bring-up : open ros2 - ros2 launch turtlebot3_bringup robot.launch.py <br>	
4)`turtlebot3 <br>

***

<turtlebot3 info>  <br>
- 12v <br>
- speed limit : 0.3m/s <br>
- has 2 moters : DC moters(simplest way we can set up)(diameter cell) <br>

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

<gazebo simulator>  <br>
 - install(on my laptop)  <br>
 - run : "gazebo"  <br>
 - stop : "killgazebo" (to abvoid gazebos conflict)  <br>

***

<etc.>  <br>
unset GTK_PATH : use it when you get " qt.qpa.plugin: Could not find the Qt platform plugin "wayland" in ...... "

***
