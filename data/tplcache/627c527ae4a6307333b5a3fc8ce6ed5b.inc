<li>
								<div class="pic">
									<img src="/style/images/mes03.jpg"/>
									<a target="_blank" href="[field:arcurl/]"><img src="/style/images/ad05.png"/></a>
								</div>
								<h2><a target="_blank" href="[field:arcurl/]">[field:title/]</a></h2>								
							</li>
							
						</ul>
					</div>
				</div>						
			</div>
		</div>
		
		<script>
			//产品滚动
			function move(obj,speed){
			    if(obj.offsetLeft<-obj.offsetWidth/2){//向左移动的判�?
			        obj.style.left='0';
			    }            
			    if(obj.offsetLeft>0){//向右移动的判�?             
			       obj.style.left=-obj.offsetWidth/2+'px';
			    }        
			    obj.style.left=obj.offsetLeft+speed+'px';         
			}
			window.onload=function(){
				var box = document.getElementsByClassName('productRoll');
				var ulA = document.getElementById("demo");
				var liA = ulA.getElementsByTagName('li');
				var timer;
				ulA.innerHTML = ulA.innerHTML+ulA.innerHTML;
				ulA.style.width = parseInt(liA[0].offsetWidth*liA.length)+parseInt('24*('+liA.length+'-1)')+'px';
				timer=setInterval(function(){
					move(ulA,-2);
				},30);
				box[0].onmouseover=function(){
					clearInterval(timer);
				};
				box[0].onmouseout=function(){
					timer=setInterval(function(){
						move(ulA,-2);
					},30);
				};
			};
		</script>
		
<!-- 底部 -->
{dede:include filename="footer.htm"